/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52613
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) (!(((_Bool) 18446744073709551615ULL))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [(signed char)4] [i_0 - 1] [i_0] [i_3] [i_3 - 1] = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)171)), (((long long int) ((arr_2 [i_0]) / (((/* implicit */unsigned long long int) arr_0 [i_0])))))));
                            var_15 = ((/* implicit */short) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0] [i_2])))))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((((var_9) + (var_12))) * (1174489725U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-8346)))))));
}
