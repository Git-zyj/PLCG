/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234893
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
    var_10 &= min(((signed char)-49), (((/* implicit */signed char) (_Bool)1)));
    var_11 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) var_1);
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_9)))))) : ((~(var_3)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = min((max((min((var_5), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_4)))))))));
                                var_14 = ((/* implicit */short) max((max((var_3), (max((((/* implicit */unsigned long long int) var_1)), (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (max((((/* implicit */long long int) 3112079979U)), (-6636561741285325084LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
