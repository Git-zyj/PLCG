/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50341
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
    var_19 = ((/* implicit */long long int) max((((((_Bool) var_17)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) (unsigned short)65535))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 ^= ((max((var_3), (arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) 2807668341433704426LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5247))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (-5986316456319980905LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) : (max((-4225976721066670374LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_1] [i_0] [i_3 - 1] [i_0] [i_1 + 1] = var_0;
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_14 [i_0] [i_3 + 1] [5LL] [i_4] [i_0]))));
                                var_22 = ((/* implicit */short) (!(min(((!(((/* implicit */_Bool) -8305865121243445678LL)))), ((!((_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_1] [(unsigned short)1] [(_Bool)1] [i_0]))) + (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(short)1] [(_Bool)1]))) * (-8305865121243445678LL)))))) ? (((/* implicit */int) (unsigned short)60074)) : (((/* implicit */int) min((var_4), (((/* implicit */short) var_6)))))));
                    var_23 = ((/* implicit */short) 8305865121243445678LL);
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) ((_Bool) 4225976721066670373LL))))) & (((/* implicit */int) var_7))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)993)) ? (-13LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (max((1134907106097364992LL), (((/* implicit */long long int) ((((/* implicit */_Bool) -5641425792799116182LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
        arr_22 [i_5] [i_5] |= ((/* implicit */_Bool) var_12);
        var_25 ^= ((/* implicit */_Bool) (-((+(((/* implicit */int) (!(arr_13 [i_5] [i_5] [i_5]))))))));
        arr_23 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_2 [i_5] [i_5]))) || (((/* implicit */_Bool) var_17))));
        var_26 *= ((/* implicit */long long int) (_Bool)1);
    }
}
