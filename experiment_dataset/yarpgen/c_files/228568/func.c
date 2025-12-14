/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228568
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (-(609304552)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (((((~(var_9))) + (2147483647))) << (((min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))))), ((-(1515998247U))))) - (1U))))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))));
                    arr_7 [i_0] = arr_1 [i_0] [i_1];
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    arr_12 [i_0] [(unsigned short)16] [i_3] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    var_18 = ((arr_4 [i_0]) ? (((/* implicit */unsigned int) (+(arr_11 [i_0] [i_0] [i_0])))) : ((~(arr_3 [i_0]))));
                    arr_13 [i_0] = ((/* implicit */signed char) -1);
                }
                arr_14 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_8 [(short)0] [(_Bool)1] [i_1] [i_0]);
                var_19 = 1977944106U;
            }
        } 
    } 
}
