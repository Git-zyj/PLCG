/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214760
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) 516496514))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = max((((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), ((+(((/* implicit */int) (short)11769)))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
                {
                    arr_7 [i_2] [i_2 + 1] = ((/* implicit */unsigned short) var_2);
                    var_12 *= ((/* implicit */int) ((((((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) / (var_9)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48857)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)60899)) : (((/* implicit */int) (unsigned short)4636)))))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_13 = ((/* implicit */short) ((long long int) var_8));
                    arr_10 [(unsigned short)5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)67))));
                    var_14 = ((/* implicit */short) (-(max((((arr_3 [(_Bool)1] [i_0] [0]) / (-244124885))), (-1883152057)))));
                    arr_11 [i_3] [i_3] [i_3] [i_3] = max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_0)))) ? (arr_0 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (((((/* implicit */_Bool) var_3)) ? ((-(var_2))) : (4294967294U))));
                }
            }
        } 
    } 
}
