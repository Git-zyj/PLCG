/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220674
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [(short)12] [3ULL] [i_1] = ((/* implicit */unsigned char) ((((arr_4 [i_1 - 1] [i_1]) / (arr_4 [i_1 - 1] [i_1]))) * (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (var_4))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((int) min((16407310204200927821ULL), (var_3)))) - (((((/* implicit */int) max((arr_5 [i_0]), ((signed char)-107)))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))) / (18446744073709551615ULL)))))));
                arr_8 [(_Bool)0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((_Bool) var_7))) >> (((arr_1 [i_0]) - (5662483170483340384ULL))))) > (((/* implicit */int) var_0))));
                var_10 ^= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_0))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_11 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_2)))));
                            var_12 -= ((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_4 [i_3 + 3] [i_1 + 1]), (arr_4 [i_3 + 3] [i_1 + 1])))), (max((0LL), (((/* implicit */long long int) (short)32767))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((short) (signed char)0)))));
}
