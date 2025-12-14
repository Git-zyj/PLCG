/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235381
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
    var_14 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) var_1);
                            var_16 = max((arr_3 [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min(((short)-12683), (((/* implicit */short) arr_8 [i_3]))))) : ((+(((/* implicit */int) (short)17883))))))));
                            arr_11 [14U] [(signed char)8] [(signed char)8] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2 - 3]))))) ? (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2]))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 2]))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) 13486937875306495463ULL));
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */signed char) var_13);
            }
        } 
    } 
}
