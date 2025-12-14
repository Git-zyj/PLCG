/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224276
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((70368744177656LL), (((/* implicit */long long int) var_1)))) | (((/* implicit */long long int) ((int) var_5)))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_10)) : (var_0))) | (((/* implicit */unsigned int) (((_Bool)1) ? (1069547520) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -1948944615)))), (((((/* implicit */unsigned long long int) -2147483646)) == (var_5)))))))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -1180505385)) : (((var_8) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4515189237046284362ULL)) ? (var_3) : (var_1)))) : (max((-4542721730685764301LL), (((/* implicit */long long int) var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1191)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [7])) : (-788978147)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 4] [i_1 - 4] [i_1 - 3])))));
                    var_16 = ((/* implicit */unsigned int) ((135440425U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((+(arr_4 [i_2] [i_0]))) <= (var_3))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_3])) | ((+(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_0] [i_5] [i_6 + 1]))))) : (((long long int) var_11))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) -9223372036854775795LL))) ? (arr_10 [i_0] [i_5 - 1] [i_6 - 1] [i_5]) : (((((/* implicit */_Bool) 469762048LL)) ? (arr_0 [i_6]) : (((/* implicit */unsigned long long int) var_12))))));
                                var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (var_3) : (639860170U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0]))));
        var_23 ^= ((/* implicit */unsigned int) ((_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]));
    }
}
