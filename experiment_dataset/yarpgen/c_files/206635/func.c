/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206635
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
    var_12 |= ((/* implicit */unsigned int) max((max((var_7), (min((((/* implicit */unsigned long long int) 3743728506U)), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((unsigned char) var_7)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((unsigned int) ((arr_7 [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_1 + 1]) || (((/* implicit */_Bool) var_4)))));
                                arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_4 - 1] [i_1 - 1] [i_1 - 2]))))) < (min((((/* implicit */long long int) arr_2 [i_4 - 2] [i_1 + 1] [i_1 + 2])), (var_3)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned char)8] |= ((/* implicit */unsigned short) (~(((((/* implicit */int) max(((unsigned char)255), ((unsigned char)255)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_5)))))))));
                                var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_0)))) ? (max((var_0), (var_7))) : (9770811313815030277ULL)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) (~(((unsigned long long int) ((8540474648852309760ULL) <= (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])))))));
                }
            } 
        } 
    } 
}
