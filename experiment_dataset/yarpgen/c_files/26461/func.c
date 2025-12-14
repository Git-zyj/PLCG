/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26461
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 6; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_4 + 1] [i_4 + 4] [i_4] [i_4 - 1] [i_4 + 4])), (((((/* implicit */unsigned long long int) ((var_13) + (var_14)))) / (max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                                arr_16 [i_0] = (-(arr_8 [i_0] [i_4 - 2] [i_2] [i_3] [i_4] [i_3]));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) 491520);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((491520) / (arr_2 [i_6] [i_6] [i_6])));
                            arr_24 [i_0] [6] [(_Bool)1] [5] = ((/* implicit */int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((491520), (-491541)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (+(3ULL)))))))) : (var_6)));
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_11))));
}
