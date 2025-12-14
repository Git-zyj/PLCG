/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219923
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
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)29040)), (13468222627616899506ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) (_Bool)1))))))) % (853583381U)));
                                arr_12 [i_3] = ((unsigned short) ((unsigned short) min((((/* implicit */unsigned short) var_0)), (var_11))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] [i_1] = ((9223372036854775807LL) < (min((((/* implicit */long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)1))))), (-590339974442780513LL))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) var_11)), (var_10))));
    var_16 = ((/* implicit */unsigned long long int) var_10);
}
