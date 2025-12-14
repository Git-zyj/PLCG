/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22865
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3555329876U)) ? (739637428U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) != (((((/* implicit */int) arr_2 [i_2 - 1])) & (((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 2]))))))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned long long int) ((signed char) 739637416U))))));
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_4 [i_2 + 1] [i_2 - 1] [i_2]))) && (((/* implicit */_Bool) ((unsigned char) arr_1 [i_3])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0])))))))));
                var_24 = ((/* implicit */_Bool) max((var_24), ((!(arr_2 [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((signed char) var_13));
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_18))) && (((/* implicit */_Bool) ((signed char) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
}
