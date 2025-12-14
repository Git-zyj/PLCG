/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192501
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_3)), (((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_3])))))))) > (((/* implicit */int) max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1]))))));
                        }
                    } 
                } 
                var_15 ^= ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_8 [i_0] [(unsigned short)9] [i_0] [(unsigned short)9])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) | (var_6))) : (min((arr_6 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_0])))));
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned long long int) (+(min((var_8), (((/* implicit */int) var_3))))));
    var_17 += var_12;
}
