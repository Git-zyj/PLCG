/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194397
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_10 [8U] [i_1] [i_2] [i_3] [i_3] |= ((/* implicit */unsigned long long int) arr_1 [i_3]);
                            var_18 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((signed char)-69), ((signed char)-1))))));
                            var_19 = ((/* implicit */int) (~(2475494446U)));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-56)) ? (6411879049495859267ULL) : (((/* implicit */unsigned long long int) 1068949973)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 15608813842050610661ULL))));
                var_22 = ((/* implicit */unsigned char) 73029125);
                var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned int) 224)) : (191735152U))), (((/* implicit */unsigned int) (unsigned short)1984))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (_Bool)0);
}
