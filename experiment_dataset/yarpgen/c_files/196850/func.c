/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196850
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
    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [(unsigned char)1] [i_0] = ((/* implicit */short) ((max((var_11), (((/* implicit */unsigned int) -1619762163)))) << (((((((/* implicit */unsigned int) var_5)) + (var_11))) - (2672179361U)))));
                                var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((((/* implicit */int) (_Bool)1)), (-1619762180))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)-39)) < (((/* implicit */int) arr_10 [(short)4] [(short)4] [i_1] [i_0 - 1]))))))))));
                                arr_14 [i_0] [(signed char)8] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) var_8);
                                arr_15 [i_4] [i_0] [i_2] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (_Bool)1)), (((var_10) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_3] [i_3 + 1] [i_3 - 2] [(_Bool)1])))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) var_2)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */long long int) (-(min((((/* implicit */int) var_8)), ((+(((/* implicit */int) arr_4 [i_0] [6U]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_4))));
    var_16 = ((/* implicit */unsigned long long int) (-(var_5)));
}
