/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211518
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
    var_12 = ((/* implicit */int) var_7);
    var_13 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10))) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    var_14 ^= ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(max((((unsigned int) (short)16383)), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_9)), (var_4)))))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)7))));
            }
        } 
    } 
}
