/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203369
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) ((((/* implicit */int) var_4)) < (var_3))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_12 ^= ((/* implicit */signed char) min(((unsigned char)246), (((/* implicit */unsigned char) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_6)))), (var_0))))));
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-105)) ? (max((((/* implicit */int) arr_2 [i_1 + 1])), (var_3))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2 - 3]))) > (var_1)))))))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */signed char) var_3);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_17 [i_0] [i_1 - 1] [i_1] = ((/* implicit */long long int) var_6);
                    var_14 += ((/* implicit */signed char) 8381370508110843211LL);
                }
            }
        } 
    } 
}
