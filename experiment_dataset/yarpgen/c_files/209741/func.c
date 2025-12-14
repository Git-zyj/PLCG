/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209741
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_1)))) * (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) > (((long long int) var_16))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [6U] [i_4] [i_3] = ((/* implicit */long long int) var_12);
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_16))));
                                arr_18 [i_1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (6) : (-1))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_1] [i_0] [9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-64))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)32735)) : (-1)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)81))))) : (3746623952U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_5])) > (((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (short)32735))))))))));
                var_22 = ((/* implicit */unsigned short) (((((-(var_2))) + (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) arr_21 [i_5]))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_5 - 1])) ? (((/* implicit */int) arr_13 [i_5] [i_6] [i_5 - 1])) : (((/* implicit */int) arr_5 [i_6] [i_6])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((/* implicit */int) var_11)), ((-(((/* implicit */int) max((var_8), (var_6))))))));
}
