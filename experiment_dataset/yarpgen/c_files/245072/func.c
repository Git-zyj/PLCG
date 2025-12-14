/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245072
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((((long long int) arr_3 [i_1] [i_0])), (((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) arr_0 [i_0]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17094)) ? (((/* implicit */int) (unsigned short)17094)) : (((/* implicit */int) (unsigned short)48429))));
                        var_20 -= ((/* implicit */unsigned short) var_2);
                        var_21 = ((/* implicit */int) ((long long int) arr_9 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 1]));
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_15)));
                        var_23 = ((((/* implicit */_Bool) (unsigned short)48442)) ? (((/* implicit */int) (unsigned short)48442)) : (((/* implicit */int) (unsigned short)17110)));
                        var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_4])) : (var_0)))));
                        var_25 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [2] [i_2])));
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_6] [i_2])) ? (((/* implicit */int) var_7)) : (arr_1 [i_6] [i_5])));
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_9)) : (var_1)))) ? (arr_20 [i_6] [i_6] [i_5] [i_2] [6LL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))) : (var_5)))));
                            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_5] [i_1])) : (var_13)));
                        }
                        var_30 = ((/* implicit */long long int) arr_13 [i_1]);
                        arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0] [i_1] [i_2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_5])))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
                        var_32 &= var_13;
                    }
                    var_33 = ((int) arr_11 [i_0] [(short)6] [i_1] [i_1] [2LL]);
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [(unsigned short)0] [(unsigned short)0] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_1] [i_0]))));
                    var_35 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1] [i_2] [0LL]);
                }
                var_36 = ((/* implicit */long long int) arr_3 [i_1] [i_0]);
            }
        } 
    } 
    var_37 = ((/* implicit */int) var_17);
}
