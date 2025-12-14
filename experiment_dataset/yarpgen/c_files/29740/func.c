/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29740
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
    var_12 = ((/* implicit */signed char) (-(3931990654098463722ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) var_1);
                arr_5 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (var_7)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [i_3] [i_0] [(short)7] = ((/* implicit */unsigned int) min((0ULL), (((/* implicit */unsigned long long int) 4217026930U))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_6 [i_0])))) ? (((/* implicit */long long int) ((arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]) | (((/* implicit */int) var_0))))) : (max((((/* implicit */long long int) var_2)), (var_6)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_1);
}
