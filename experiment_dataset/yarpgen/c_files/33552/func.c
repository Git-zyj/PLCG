/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33552
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    var_11 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1 - 2] [i_0 + 1] [i_2 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))));
                    arr_8 [(short)15] = ((/* implicit */int) arr_4 [i_2 - 3] [i_1 - 2] [i_0 + 1] [i_0 + 1]);
                }
                for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0 + 4] [i_3] [i_3] [i_3])) - ((-(((/* implicit */int) (_Bool)1))))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) == (((/* implicit */int) arr_1 [i_1 - 1]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 4; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (unsigned short)23989);
                            arr_17 [12U] [i_1] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (short)30777)))), (((/* implicit */int) max((arr_3 [i_4 + 2]), (arr_3 [i_4 + 3]))))));
                            arr_18 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((((arr_6 [i_0 - 1] [i_5 + 2]) * (((/* implicit */unsigned long long int) arr_5 [20LL] [i_4 - 4] [i_1 - 2] [i_0])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [5] [i_4 - 1] [i_1]))))));
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */short) max(((+(arr_13 [i_0] [(_Bool)1] [i_0] [i_0]))), (((/* implicit */unsigned int) ((short) (signed char)4)))));
                var_14 = var_6;
            }
        } 
    } 
    var_15 = var_0;
}
