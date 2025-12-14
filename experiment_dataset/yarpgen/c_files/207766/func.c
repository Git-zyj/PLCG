/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207766
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
                arr_5 [i_0] [i_1] = ((unsigned int) 1ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(((int) var_0))));
    /* LoopNest 3 */
    for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_12 [i_2] [i_2 + 3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((255ULL) - (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) arr_2 [i_4 - 2] [i_4 - 2] [i_2])) ? (((/* implicit */int) arr_11 [12] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_2] [i_3])))) : (((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (short)17931)) : (((/* implicit */int) (signed char)127))))));
                    var_16 = ((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) (signed char)120))))) / (var_0))), (((/* implicit */long long int) ((var_9) | (((/* implicit */int) ((unsigned char) (signed char)(-127 - 1)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-107)), (var_13)))), (var_5)))) ? (((/* implicit */long long int) 3192681367U)) : (var_11)));
    var_18 = ((/* implicit */unsigned int) var_14);
}
