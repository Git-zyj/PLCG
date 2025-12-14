/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248570
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((((/* implicit */signed char) ((min((var_15), (((/* implicit */unsigned int) var_6)))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) var_7)))))))), (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2])));
                                var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((var_14), (((/* implicit */long long int) var_6)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14)) ? (4) : (((/* implicit */int) (signed char)-51))));
            }
        } 
    } 
    var_23 *= ((/* implicit */long long int) max((var_13), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) (signed char)-52)) : (0))) < (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_11)))))))));
}
