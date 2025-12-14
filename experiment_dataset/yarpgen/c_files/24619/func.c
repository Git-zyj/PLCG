/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24619
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
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (-5622970343742887963LL)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((max((arr_0 [i_1]), (max((((/* implicit */unsigned short) arr_4 [i_1] [4LL])), ((unsigned short)19654))))), (((/* implicit */unsigned short) arr_3 [i_1] [i_1] [i_0])))))));
                arr_5 [i_0] = max((27U), (((/* implicit */unsigned int) arr_1 [i_0])));
                var_19 = ((/* implicit */unsigned short) min((18209345155386467840ULL), (((/* implicit */unsigned long long int) max((1104948337677017933LL), (((/* implicit */long long int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_3 [i_0] [6U] [(unsigned short)3]))))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_20 += ((/* implicit */short) max((arr_2 [i_0] [i_2]), (arr_2 [i_0] [i_1])));
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */int) max((max((((/* implicit */long long int) (_Bool)1)), (max((1104948337677017933LL), (6307901604911116240LL))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) max(((short)-17409), (((/* implicit */short) (_Bool)1))))), ((unsigned short)55414))))));
                }
            }
        } 
    } 
    var_21 = min((max((max((1104948337677017935LL), (((/* implicit */long long int) var_15)))), (min((((/* implicit */long long int) var_0)), (1104948337677017927LL))))), (((/* implicit */long long int) var_9)));
    var_22 = ((/* implicit */short) max((var_12), (min((min((596643581), (var_12))), (max((var_8), (((/* implicit */int) (signed char)-121))))))));
}
