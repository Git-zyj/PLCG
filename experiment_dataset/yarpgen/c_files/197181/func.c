/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197181
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((max(((unsigned char)119), (((/* implicit */unsigned char) (signed char)76)))), (((/* implicit */unsigned char) min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4]), (arr_12 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4] [i_4]))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (unsigned short)20614))));
                            }
                        } 
                    } 
                } 
                var_16 += (short)32752;
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((3518457106958830118ULL), (((/* implicit */unsigned long long int) (signed char)12)))) >> (((3520687891U) - (3520687865U)))))) ? ((~((~(-6698966420602155084LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64758)))));
                arr_15 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1473220413) : (((/* implicit */int) (signed char)57))))) ? (((((/* implicit */_Bool) var_1)) ? (360811327U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (_Bool)1)))))))))))));
}
