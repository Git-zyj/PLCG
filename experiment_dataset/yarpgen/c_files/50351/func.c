/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50351
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 1661451863))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)42312)) : (-1661451880))) : ((~(((/* implicit */int) arr_4 [i_0] [i_1]))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned short)23)))), (((/* implicit */int) ((arr_1 [i_0] [i_1]) != (arr_1 [i_0] [i_1]))))));
                var_14 = ((/* implicit */int) max((var_14), (((-857540055) + (((/* implicit */int) (unsigned short)19))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 4; i_2 < 14; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((arr_8 [i_2 + 3] [i_2]), (min((arr_8 [i_2 - 4] [i_2]), (arr_8 [i_2 + 3] [i_2])))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) -1661451864);
                                arr_18 [i_4] [i_4] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)504)) ? (((/* implicit */int) (unsigned short)64354)) : (((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) (unsigned short)65513)))) : (((((/* implicit */int) (signed char)127)) % (((/* implicit */int) arr_10 [i_2] [i_2])))))) % (((((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_15 [(unsigned char)11] [i_4] [6LL] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_4] [(short)1])))) + (((/* implicit */int) ((_Bool) 8U)))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned short) (unsigned short)23)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min(((~(max((8803055825939367062LL), (((/* implicit */long long int) (short)(-32767 - 1))))))), (-8803055825939367035LL)));
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)52577))));
}
