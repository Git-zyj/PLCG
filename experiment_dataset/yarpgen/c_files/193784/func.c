/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193784
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_5)))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((_Bool) (_Bool)1))), (var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_11))))))))));
        var_16 = ((/* implicit */long long int) min((arr_2 [i_0]), ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((1956359919608358949LL) & (((/* implicit */long long int) ((arr_0 [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) arr_2 [6LL]))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((arr_2 [i_2 - 1]) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) (_Bool)0))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 += ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1)))));
                        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_3 - 1] [(_Bool)1] [i_2] [i_2 - 1]))));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (_Bool)1))));
            arr_18 [i_2] [i_2] = ((/* implicit */long long int) ((int) arr_1 [i_3 - 1] [i_3 - 1]));
        }
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_1))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */_Bool) max(((~(arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7 + 1]))), (((arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7 - 1]) << (((arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7 - 1]) - (798598689)))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) max((var_1), ((_Bool)1))))))) & (min((arr_8 [i_2 - 1]), (((/* implicit */long long int) (_Bool)0)))))))));
                                var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]))))), (min((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2 - 1] [i_6] [i_7 - 1] [i_9]))) : (var_12))), (3160456139376844842LL)))));
                                var_26 = var_0;
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    }
    var_28 = ((/* implicit */_Bool) max((((max((((/* implicit */long long int) var_10)), (var_6))) * (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))), (((/* implicit */long long int) max(((_Bool)0), ((_Bool)0))))));
}
