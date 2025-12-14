/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212849
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) max((((/* implicit */int) max((max((var_1), (var_2))), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3)))))))), ((((~(((/* implicit */int) var_6)))) + (((/* implicit */int) arr_0 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 *= ((/* implicit */_Bool) var_6);
                                arr_13 [i_0] [i_2] [i_2] [7U] [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (short)29186)), (((var_4) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9949)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-29193)))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [1U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)4] [i_0 - 2] [i_2 + 3]))) : (arr_6 [(signed char)10] [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_0);
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned long long int) var_7)), (var_9)))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */int) max((((/* implicit */unsigned short) (short)-29186)), (var_6)))) * (((/* implicit */int) var_3))))));
}
