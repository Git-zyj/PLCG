/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249603
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_4))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) max((var_3), (var_3)))))) << (((/* implicit */int) ((unsigned char) var_1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_0] = (-(2739863160U));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned char)242))) ? (((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
                arr_6 [i_0 + 1] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), ((~(min((arr_2 [i_0]), (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) 2739863160U);
                                var_14 = ((/* implicit */signed char) var_9);
                                var_15 = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                } 
                var_16 ^= (-(min((2739863184U), (((/* implicit */unsigned int) (unsigned char)105)))));
                arr_22 [i_2] [i_2] = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46186)) || (((/* implicit */_Bool) (unsigned char)242)))))));
            }
        } 
    } 
}
