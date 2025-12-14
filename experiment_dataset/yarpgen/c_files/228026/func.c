/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228026
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (unsigned char)208))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((int) arr_5 [i_0]));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [(signed char)7] [i_1] [(_Bool)1] [(signed char)7] [9U] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10442)) ^ (((/* implicit */int) arr_6 [i_3] [(signed char)4]))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((min((arr_11 [(_Bool)1] [i_4 + 1] [13U] [(unsigned char)15] [i_4]), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
