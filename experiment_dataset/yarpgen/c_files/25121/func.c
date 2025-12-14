/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25121
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
    var_16 += ((/* implicit */int) max((max((((var_10) << (((var_11) + (5749698453170243254LL))))), (var_9))), (((/* implicit */unsigned long long int) var_15))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) < (arr_0 [i_0]))))) + ((-(-6499148831288478001LL)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_18 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 5399915968930286840LL)) >= (((arr_8 [i_0]) / (arr_9 [i_2])))))), (arr_3 [i_2] [i_2])));
                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1])))) || ((!(((/* implicit */_Bool) 5826985162372842495ULL))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_20 = ((unsigned long long int) arr_9 [i_0]);
                            arr_15 [i_0] [i_1] [i_1] [2ULL] [i_4 + 1] &= var_13;
                        }
                    } 
                } 
            }
            var_21 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_1])) : (min((arr_8 [i_1]), (((/* implicit */unsigned long long int) arr_5 [13] [i_1] [i_1])))));
            var_22 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))), (((arr_0 [i_0]) ^ (arr_3 [i_0] [i_1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0]) < (((/* implicit */unsigned long long int) arr_12 [8LL] [i_0] [i_0] [i_0] [i_1]))))))));
            arr_16 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-2147483631) : (arr_5 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_10 [i_0] [i_1] [i_1] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0]))) : ((+(arr_5 [i_0] [i_1] [i_0])))))) / (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]) : (((/* implicit */unsigned long long int) max((-1), (arr_11 [i_1] [i_1] [i_1] [6LL] [13ULL]))))))));
        }
    }
    for (int i_5 = 1; i_5 < 6; i_5 += 3) /* same iter space */
    {
        arr_21 [1] [i_5] = (~(((/* implicit */int) (!(((/* implicit */_Bool) 5))))));
        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5] [1ULL] [i_5] [i_5 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5 + 2] [i_5 + 2] [15ULL] [i_5])) ? (arr_12 [i_5 + 2] [i_5] [8ULL] [i_5] [i_5]) : (((/* implicit */long long int) var_3)))))));
    }
    for (int i_6 = 1; i_6 < 6; i_6 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_19 [i_6 + 3]) : (arr_1 [i_6 + 4]))) + ((-(var_5)))));
        var_25 ^= ((/* implicit */unsigned long long int) arr_4 [i_6] [i_6 + 2]);
        var_26 = var_12;
    }
    var_27 = ((/* implicit */long long int) (((~(var_0))) > (6421766217236714021LL)));
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_13))));
    var_29 = ((/* implicit */unsigned long long int) var_11);
}
