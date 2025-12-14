/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50846
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned char)3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_1 + 2])) ? ((+(((/* implicit */int) (unsigned char)70)))) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_4 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                            arr_12 [(_Bool)1] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)198)))) << (((((/* implicit */int) arr_1 [i_0])) - (48813)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_4 = 1; i_4 < 19; i_4 += 2) 
    {
        var_20 = min(((~(((var_6) ? (2673391247U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_4 + 1])) : (((/* implicit */int) arr_7 [i_4 - 1]))))));
        arr_15 [i_4] = ((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [(_Bool)1]);
        arr_16 [(_Bool)1] = ((/* implicit */unsigned int) arr_14 [i_4 + 1]);
        var_21 = ((/* implicit */_Bool) (-(2673391256U)));
    }
    var_22 = ((/* implicit */unsigned long long int) 2673391247U);
}
