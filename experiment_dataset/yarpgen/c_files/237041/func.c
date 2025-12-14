/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237041
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (short)30373)))))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1 + 1] [3U] [i_0] = ((/* implicit */unsigned char) (signed char)-7);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (signed char)7);
                                var_18 &= ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (-7693855440502732686LL)));
                                var_19 = ((/* implicit */signed char) max(((~(min((((/* implicit */unsigned long long int) 2147483647)), (6745101997759915422ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)22961)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned long long int) var_2);
}
