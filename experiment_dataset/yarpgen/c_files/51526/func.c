/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51526
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) (+(arr_2 [i_0 + 1])));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (15911033474173399456ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? ((+(arr_2 [i_0]))) : ((-(((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) 6225079330507794052LL);
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_15 [3ULL] [i_0] [i_2] [i_3 - 3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((short) 6225079330507794066LL))) | (((/* implicit */int) ((unsigned char) (unsigned short)28331)))));
                                arr_16 [19] [i_1] [i_2] [1ULL] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_6 [i_4] [i_4] [i_2]));
                                var_16 = (-(((/* implicit */int) ((unsigned char) var_11))));
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_11 [9LL]))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)-2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)101)) && (((/* implicit */_Bool) arr_11 [i_5])))))));
        arr_21 [i_5] = ((/* implicit */int) ((unsigned long long int) arr_7 [i_5] [i_5]));
    }
    var_18 *= ((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) var_8)) ? (1993693371791423042LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 20; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            {
                var_19 += ((/* implicit */unsigned char) (+(((max((((/* implicit */long long int) var_12)), (var_10))) + (((/* implicit */long long int) ((int) arr_22 [i_7])))))));
                arr_29 [i_7] [i_6 + 2] [i_7] &= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_25 [i_6 + 2] [i_6 + 2] [i_6 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_7])) ? (((/* implicit */int) (short)-32763)) : (var_11)))) : (((((/* implicit */unsigned long long int) arr_25 [i_6 - 2] [i_6 - 2] [i_6 + 2])) + (arr_26 [i_6 + 2] [i_6 - 2] [i_7]))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_28 [i_6 + 2]))) ? (((arr_28 [i_7]) - (arr_28 [i_7]))) : ((~(-573767876)))));
            }
        } 
    } 
}
