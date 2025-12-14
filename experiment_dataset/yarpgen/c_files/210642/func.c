/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210642
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
    var_19 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) var_0);
                                var_21 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_10 [i_3] [i_1 + 3] [i_3] [i_1 + 3] [4] [i_1])))) ? (min((((/* implicit */unsigned long long int) ((1724939315955103441LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [12LL] [i_3])))))), (min((var_4), (((/* implicit */unsigned long long int) -2907507807523478462LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4849)))));
                                var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (short)-8473))));
                                arr_15 [14U] |= ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) (unsigned char)176)) ? (3645224047U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4849))))) <= (((/* implicit */unsigned int) var_16))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] [i_0] = ((int) (+(((/* implicit */int) ((_Bool) var_15)))));
                    var_23 ^= ((/* implicit */int) max((var_17), (((/* implicit */unsigned long long int) (signed char)53))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-25410))))) ? (((/* implicit */int) ((short) -2LL))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [(short)4] [i_5] [i_7] [i_6]))) <= (var_7)))))))));
                    var_26 = ((/* implicit */long long int) (short)32765);
                }
            } 
        } 
    } 
}
