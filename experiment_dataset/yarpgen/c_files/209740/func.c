/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209740
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = (_Bool)0;
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((long long int) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) var_13))))) ? (var_0) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_5] [i_5] = ((/* implicit */short) arr_14 [i_5] [i_5] [i_2] [i_2]);
                                arr_19 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(226836739)))) ? (((/* implicit */int) ((short) (-(arr_8 [i_2] [i_1] [i_2] [i_1]))))) : (((var_13) ? (((/* implicit */int) arr_3 [i_6 + 2])) : (var_9)))));
                                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) ((((((/* implicit */_Bool) (short)2141)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_12 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 2])))))));
                                arr_20 [i_6] [i_6] [i_1] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_4)) % (arr_1 [i_5] [i_5]))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [i_1] [i_0] = ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
    var_19 = (((((~(((/* implicit */int) (unsigned short)30648)))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)147)) % (((/* implicit */int) (unsigned short)43260))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (short)27617)))) - (25))));
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (0U))));
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_11)))) ? (((/* implicit */long long int) ((var_0) / (((/* implicit */int) var_4))))) : (max((var_8), (((/* implicit */long long int) var_7))))))));
}
