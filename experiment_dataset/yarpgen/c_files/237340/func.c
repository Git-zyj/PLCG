/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237340
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (261935431U)));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_6))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (-421186661)))) ? ((~(var_4))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) 17056232417564057359ULL);
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 10; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_10 [5U] [i_1] [i_1] [i_3])))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_18 [i_1] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 2] [1] [i_3]))))) ? ((+(((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3])))) : (884517649)));
                                arr_19 [i_1 + 2] [6U] [i_1] [i_4] [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 283465622U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_17 [6] [i_3 - 1] [6] [6U] [i_5]))))) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_2 + 2])) : (-1834486335)))) : ((-(arr_0 [i_5])))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 634052825U)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (unsigned short)8191))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) arr_14 [i_1] [(short)8] [i_3] [(_Bool)1]);
                }
            } 
        } 
        var_16 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))) % (3530278193U)));
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
    }
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_4))));
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (long long int i_7 = 4; i_7 < 16; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (short)11952))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_6] [i_7 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))) ^ (var_5)))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-89))))) * (min((var_1), (((/* implicit */long long int) (_Bool)0)))))))));
                    arr_27 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) (-(((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) arr_24 [i_6])) : (var_3))))));
                }
            } 
        } 
    } 
}
