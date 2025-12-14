/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41827
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) min((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) min(((unsigned char)244), ((unsigned char)226)))) ? (var_17) : (min((((/* implicit */int) (unsigned char)136)), (arr_8 [i_1])))))));
                                var_19 &= ((/* implicit */signed char) arr_3 [1] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_0])) ^ (min((((/* implicit */unsigned long long int) (-(var_14)))), (((unsigned long long int) -1752202202))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) var_16)))));
}
