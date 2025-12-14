/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196695
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))) >> (((2434862853794046567ULL) - (2434862853794046520ULL))))))));
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))), ((-(-2031745340)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-120)))) - (((/* implicit */int) (unsigned short)24657))));
                            var_20 += ((/* implicit */short) var_7);
                            var_21 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1663021440)) || (((/* implicit */_Bool) (unsigned char)32)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)22106))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) min((((/* implicit */int) (signed char)-122)), (370738177))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_1] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34753))))))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (signed char)98);
}
