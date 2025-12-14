/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33524
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_18 = ((((/* implicit */_Bool) 841443728078393527LL)) ? (((long long int) 0LL)) : (min((var_10), ((+(-3367755476450706528LL))))));
                        arr_8 [i_0] [i_1] = min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (var_1))), (var_12));
                        var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_0)) ? (arr_5 [0LL] [i_1] [16LL] [i_2]) : (var_14))) : (arr_0 [i_0] [i_2 + 1])))) ? (((((/* implicit */_Bool) -5243984771439339826LL)) ? (var_8) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3123557590860068348LL)) ? (50509956344590624LL) : (5243984771439339834LL)))))))));
                    }
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        arr_13 [16LL] [i_2] [i_1] = (~(min((((((/* implicit */_Bool) arr_11 [i_1] [14LL] [i_2] [9LL])) ? (var_14) : (arr_3 [i_4]))), ((~(var_11))))));
                        arr_14 [i_4 + 2] [i_1] [i_0] = ((long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 2] [i_1] [i_1] [i_2 - 1])) ? (arr_0 [i_1] [i_1]) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (var_17)))));
                        var_20 ^= ((((/* implicit */_Bool) ((long long int) arr_10 [i_4 + 1] [i_2 + 3]))) ? (((long long int) 6716203852952571254LL)) : (arr_9 [i_0] [i_4] [i_2] [i_4] [i_2] [18LL]));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_19 [i_1] = ((((/* implicit */_Bool) (-(arr_11 [i_2 + 2] [i_2] [i_5] [i_5])))) ? (((long long int) ((((/* implicit */_Bool) var_0)) ? (-571262195203454266LL) : (-571262195203454266LL)))) : (((long long int) (!(((/* implicit */_Bool) -5243984771439339826LL))))));
                        var_21 = ((((/* implicit */_Bool) var_0)) ? (((long long int) ((var_11) - (arr_17 [i_2 + 1] [i_2 + 1] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) -9223372036854775807LL)) ? (-2293447553400563402LL) : (arr_17 [i_0] [i_1] [10LL] [i_1] [8LL]))));
                        var_22 = ((((/* implicit */_Bool) ((long long int) arr_18 [i_5] [i_5] [i_2] [i_2 + 1]))) ? (var_17) : (((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) -1LL)) ? (var_9) : (arr_6 [i_0] [i_0] [i_2] [15LL]))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_5])) ? (-2895975998381001822LL) : (5458795748758430911LL))))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) ((arr_12 [i_0] [i_0] [i_0] [i_2] [8LL] [i_6]) == ((~(((((/* implicit */_Bool) var_12)) ? (var_10) : (-1LL)))))));
                        arr_22 [i_0] [i_0] [i_1] [i_0] [i_6] = ((long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_0] [i_2 + 2] [i_2 + 3]))));
                    }
                    for (long long int i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((long long int) ((((/* implicit */_Bool) -1645540138927317204LL)) ? (arr_24 [i_1] [i_7 + 1] [14LL] [i_7 + 1] [i_7 + 1]) : (arr_24 [i_1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1])));
                        arr_26 [i_0] [6LL] [i_0] [i_1] [i_7] = ((/* implicit */long long int) (!(((arr_9 [i_0] [i_1] [i_1] [i_2] [i_7 - 1] [i_7]) != (var_2)))));
                    }
                    for (long long int i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_8 + 1] [i_1] = min((((((/* implicit */_Bool) ((long long int) arr_20 [i_1]))) ? (((long long int) var_14)) : (var_1))), (((long long int) ((long long int) arr_18 [5LL] [i_2] [i_1] [i_0]))));
                        arr_30 [6LL] [i_1] [i_1] [i_1] [1LL] = min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 63LL))))), (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6565632751929464514LL))))));
                        var_25 = 549722259456LL;
                    }
                }
                for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    arr_33 [i_1] [20LL] [i_1] = arr_4 [i_9] [i_1] [i_9] [i_9];
                    arr_34 [21LL] [i_1] = ((((/* implicit */_Bool) min((1554212155464295057LL), (5446735695455601973LL)))) ? (((long long int) min((arr_1 [i_9] [i_1]), (arr_15 [i_0] [i_1])))) : (min((((long long int) arr_1 [i_0] [i_0])), (arr_7 [i_9] [i_9 + 2] [i_1] [i_1] [i_9 - 1] [i_1]))));
                }
                var_26 |= (~(((arr_2 [i_0] [i_1] [i_1]) ^ (0LL))));
            }
        } 
    } 
    var_27 = var_3;
}
