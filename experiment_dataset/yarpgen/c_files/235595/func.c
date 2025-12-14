/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235595
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
    var_18 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) (short)32256)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((short) 8011153664879377036ULL))), (arr_4 [i_1 + 2] [i_1 + 1]))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (signed char)-127);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_16 [i_3] [i_2] [i_1 + 1] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)23277)), (2ULL)));
                            arr_17 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_16)), (var_4)))) && (((/* implicit */_Bool) (short)-32257))));
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) == (((/* implicit */int) var_1)))))), (min((arr_11 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_1 + 1]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_3] [i_1] [(short)15])) > (((/* implicit */int) (short)32270)))))))));
                            arr_19 [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) (short)32470)) ? (((/* implicit */int) (short)6289)) : (((/* implicit */int) (unsigned char)70)))) | (((/* implicit */int) arr_4 [i_1 - 1] [(unsigned char)12])))), (((/* implicit */int) ((unsigned short) ((short) arr_5 [i_0] [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
