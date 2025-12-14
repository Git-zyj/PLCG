/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204482
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
    var_20 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_3] [i_2 - 3] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-34)))) >> (((((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (signed char)61)))) + (33)))));
                            var_22 = ((/* implicit */unsigned char) max((min((arr_7 [i_1] [i_2] [i_1 - 1] [i_1 + 1]), (arr_7 [i_1] [i_2] [i_1 + 1] [i_1 - 2]))), (((arr_7 [i_1] [i_2] [i_1 - 1] [i_1 + 1]) - (arr_7 [i_1] [i_2] [i_1 + 1] [i_1 - 2])))));
                            var_23 -= ((/* implicit */unsigned long long int) 1909872120U);
                        }
                    } 
                } 
                arr_12 [i_0] = var_12;
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((584097932) & (((/* implicit */int) (unsigned short)57994)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)7542)) % (((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11539)))))));
}
