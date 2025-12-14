/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208388
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            arr_10 [(signed char)4] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) var_3);
                            arr_11 [(_Bool)1] [12] [(unsigned char)4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) arr_3 [i_2] [i_1] [i_0]);
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */long long int) min((max(((+(1126385236U))), (((((/* implicit */_Bool) var_14)) ? (var_4) : (1126385245U))))), (((((3168582054U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned char)4]))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - ((-(((/* implicit */int) (unsigned char)162))))))) : ((((-(var_8))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))))));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 49152)), (3168582056U)))) >= (((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) 3168582059U))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (max((var_12), (((/* implicit */unsigned long long int) var_14))))))));
}
