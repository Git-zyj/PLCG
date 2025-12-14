/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20659
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
    var_18 = ((/* implicit */long long int) (~(2389523131U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 24; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (arr_5 [i_2] [i_1 + 1])));
                            arr_13 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_2 [i_3 - 2])), (max((min((arr_0 [i_0]), (((/* implicit */long long int) var_4)))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-68))))))));
                            var_20 = ((/* implicit */unsigned short) arr_6 [i_0] [i_2] [i_3]);
                            arr_14 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3 + 1] = ((((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)4] [i_1 - 1])) || (((((/* implicit */int) var_7)) <= (((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2] [i_3]))) : (arr_1 [i_0]));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_0])) ? (-1353132031) : (((/* implicit */int) arr_3 [0LL]))))))) ? (min((var_15), (((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_1 + 1])))) : (((max((681130817U), (((/* implicit */unsigned int) arr_8 [i_0] [i_1])))) << (((/* implicit */int) ((3613836479U) >= (var_15)))))))))));
            }
        } 
    } 
}
