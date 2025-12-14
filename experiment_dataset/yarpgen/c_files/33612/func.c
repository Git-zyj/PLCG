/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33612
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
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 |= ((/* implicit */unsigned char) (~(arr_3 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (-(327523771)));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_0 - 1]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)179))))) ? (((var_14) ? (((/* implicit */int) arr_0 [i_0])) : (arr_7 [i_2] [i_3 - 1]))) : (arr_7 [i_4] [i_2]))) : (arr_6 [i_0] [i_1] [i_2]))))));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0 + 2])))))) <= (((unsigned long long int) (+(((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || ((!(((/* implicit */_Bool) 0ULL))))));
    var_20 ^= ((/* implicit */int) var_14);
    var_21 = (unsigned char)77;
    var_22 = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_12)), ((~(369274348))))) & (((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) var_5)))) : (min((0), (var_13)))))));
}
