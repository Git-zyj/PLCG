/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198069
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) 1533104223U);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) var_15)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */long long int) var_8)), (var_7)))))) : (var_14)));
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 23; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) ((12333310152704361270ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((var_15), (((/* implicit */unsigned short) var_3)))))))));
                arr_13 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23668))) : (5U)))) ? (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (var_1)))) || (((/* implicit */_Bool) ((961618427U) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_18 [i_4] [i_5] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_15)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_9))))))));
                            var_19 = ((/* implicit */_Bool) 9223372036854775807LL);
                            arr_19 [i_2] [i_2] [i_5] [i_5] = (_Bool)0;
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5))))))) != (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
        } 
    } 
}
