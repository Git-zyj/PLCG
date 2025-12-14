/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209059
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) 189340224U))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (arr_0 [i_0] [i_1]))) : (((unsigned int) (unsigned short)8)))));
                arr_6 [i_0] [8] &= ((signed char) ((int) min((4296653913406206938ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-9942)) + (2147483647))) >> (((arr_3 [i_3]) - (3051506380U)))))))) ? (((/* implicit */int) (short)21617)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 436910318)) ? (14150090160303344692ULL) : (((/* implicit */unsigned long long int) arr_14 [(unsigned short)5] [i_3] [i_4]))))))))));
                                var_13 = ((/* implicit */unsigned int) ((signed char) (signed char)4));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (!(min(((!((_Bool)1))), ((!(((/* implicit */_Bool) (unsigned char)86))))))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned short) (unsigned char)3))), (max((max((var_3), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_9))))));
}
