/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32843
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
    var_19 = ((/* implicit */signed char) (-(min((min((((/* implicit */long long int) (unsigned short)56673)), (-5284355934709171830LL))), (((/* implicit */long long int) (signed char)-110))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) (signed char)-58);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)30565)), ((-(min((-1299604979), (((/* implicit */int) (signed char)78)))))))))));
                            var_22 = ((/* implicit */_Bool) var_9);
                            arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) -558125054);
                        }
                    } 
                } 
                arr_11 [i_0] = max(((signed char)3), ((signed char)-59));
                var_23 *= ((/* implicit */_Bool) (signed char)-59);
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)9);
            }
        } 
    } 
}
