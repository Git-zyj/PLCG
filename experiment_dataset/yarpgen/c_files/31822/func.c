/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31822
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_15 = arr_0 [i_0];
                            var_16 = ((/* implicit */int) max((((/* implicit */long long int) (+((-2147483647 - 1))))), (min((((((/* implicit */_Bool) 3306053968256281388LL)) ? (arr_8 [i_0] [(unsigned char)1] [i_2] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (max((3306053968256281382LL), (((/* implicit */long long int) arr_0 [i_3]))))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_9 [i_2] [i_3 + 1] [i_3 - 1] [i_3]))) ? ((~(-3306053968256281389LL))) : ((~(arr_9 [i_2] [i_3 + 2] [i_3 - 1] [i_3 - 2])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) (-((~(((var_13) ? (222657114U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((var_13) ? (3306053968256281414LL) : (3306053968256281388LL)));
    var_20 *= ((/* implicit */unsigned char) ((-409245973) & (752138991)));
}
