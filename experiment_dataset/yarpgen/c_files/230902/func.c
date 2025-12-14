/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230902
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)32767)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)32738))))));
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 12; i_2 += 3) 
                {
                    var_12 = ((/* implicit */_Bool) (((!(arr_2 [i_2 - 3]))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_11))))) : (((/* implicit */int) var_9))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-48)), ((short)21220))))));
                                arr_14 [i_2] [i_3] [(signed char)11] [i_2] [i_2] [(unsigned char)2] [i_2] = ((/* implicit */short) var_11);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) (short)32767)))))))))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_6);
}
