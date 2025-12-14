/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21033
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
    var_13 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((unsigned char) (unsigned char)252))))), (((var_11) || (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_7))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 3]))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) arr_0 [i_0] [i_4]);
                                var_15 = ((/* implicit */short) (((((~(var_1))) < (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((((/* implicit */long long int) arr_0 [i_4 - 1] [i_1 - 3])) <= (arr_9 [i_2]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_4 - 1] [i_2] [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2 + 2] [i_3] [i_4]))))))) : (((/* implicit */long long int) arr_10 [i_4 - 1] [i_3] [i_2 - 3] [i_1 + 4] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
