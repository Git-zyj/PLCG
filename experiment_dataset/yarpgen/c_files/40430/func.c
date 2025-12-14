/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40430
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
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-7961)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1])))))));
                var_16 = ((/* implicit */signed char) var_6);
                var_17 ^= ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (signed char)89)))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : ((+(var_11)))));
                arr_5 [i_0] [i_1] [18ULL] = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) arr_4 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_11);
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_1))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                    var_23 |= ((/* implicit */unsigned short) var_11);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) var_6);
                                var_25 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                                var_26 = ((/* implicit */int) (unsigned char)24);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
