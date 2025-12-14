/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24261
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) var_16);
                                var_19 = ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((-1645268299), (((/* implicit */int) var_16))))) && (((/* implicit */_Bool) var_15))))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (~(2147483647)))), ((~(3010738849U))))) - (((/* implicit */unsigned int) ((arr_8 [i_2 + 2] [i_2 + 3] [i_2] [i_3 - 1]) ? (((/* implicit */int) (short)31675)) : (((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_2] [i_3 - 1]))))))))));
                            }
                        } 
                    } 
                } 
                var_21 = (((~(-783030421))) - ((~(((/* implicit */int) var_10)))));
                var_22 = ((/* implicit */unsigned long long int) ((arr_0 [(_Bool)1] [i_0]) <= ((~(arr_15 [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (short i_6 = 3; i_6 < 13; i_6 += 1) 
        {
            {
                arr_23 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max((max((-1645268299), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5] [(short)13]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (arr_9 [i_5] [i_5] [i_6] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24696)))))) ? (((/* implicit */int) (unsigned short)0)) : (min((2147483647), (((/* implicit */int) (unsigned short)10865))))))));
                var_24 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_5])))));
                arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_5] [4U]);
            }
        } 
    } 
}
