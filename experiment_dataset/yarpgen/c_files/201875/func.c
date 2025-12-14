/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201875
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)125))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_5 [i_2 + 1])) + (((/* implicit */int) max((var_10), (((/* implicit */short) (signed char)-125)))))))))));
                                arr_16 [i_4] [i_4] [i_2 - 3] [2U] [i_2 - 3] [i_1] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] |= ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [6ULL] [6ULL] [6ULL])) : (((/* implicit */int) (signed char)106)))) ^ (((/* implicit */int) var_9))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)100)) >= (((/* implicit */int) (signed char)-99)))) ? (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)-100)))) : (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) : (((((((/* implicit */_Bool) (short)17266)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)90)))) + (((/* implicit */int) var_12))))));
}
