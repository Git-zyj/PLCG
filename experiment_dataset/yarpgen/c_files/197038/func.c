/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197038
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
    var_12 = ((/* implicit */unsigned short) var_5);
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned short) var_7);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 4; i_1 < 22; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_15 = ((/* implicit */_Bool) var_1);
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) arr_3 [i_5])) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_2]))))));
                            }
                            arr_18 [i_3] [i_2] [15ULL] [(short)13] [i_3] = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (max((18014398509481983ULL), (((/* implicit */unsigned long long int) (short)64)))) : (((/* implicit */unsigned long long int) ((((_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_17 [i_2 - 2]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_24 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (((var_8) ? (arr_21 [(unsigned short)15] [i_7] [(unsigned short)15] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2 + 2])) & (((/* implicit */int) var_7)))))));
                            arr_25 [i_7] = ((/* implicit */_Bool) var_6);
                            var_18 = ((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_2] [i_6] [i_7 - 1] [(signed char)18]);
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [(unsigned short)4] [i_7 + 1] [i_1] [i_7] [(unsigned short)8] [i_1])) ? (((/* implicit */int) arr_11 [i_1 - 4] [i_7 + 1] [(short)8] [i_1])) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) arr_13 [i_1] [i_7 + 1] [i_7] [i_7] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_16 [i_1] [i_7 - 1] [i_6] [i_7] [i_6] [i_6])))))))));
                        }
                    } 
                } 
                arr_26 [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) max((((/* implicit */unsigned char) arr_7 [(short)4])), (var_5))))))), (arr_21 [i_1] [i_2] [i_2] [i_2 + 3])));
            }
        } 
    } 
}
