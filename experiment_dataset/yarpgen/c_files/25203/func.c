/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25203
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 |= ((/* implicit */_Bool) (-(((/* implicit */int) (short)-32750))));
                                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3 + 1] [i_1 - 2])) & (((/* implicit */int) arr_4 [i_3 + 1] [i_1 - 2]))))) && (((/* implicit */_Bool) ((arr_4 [i_3 + 1] [i_1 - 2]) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_3 + 1] [i_1 - 2])))))));
                                arr_15 [i_1] = ((/* implicit */int) var_9);
                                arr_16 [i_4] [i_3 + 1] [i_2] [i_1 - 2] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_2 + 2] [i_4] [i_4])), (arr_1 [i_3 + 1])))) + (((/* implicit */int) min((arr_1 [i_3 + 1]), (((/* implicit */unsigned short) var_5)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [13U] |= ((/* implicit */int) ((unsigned short) ((int) arr_10 [i_0] [i_0] [i_0 - 2] [i_1 - 2] [i_1] [i_1])));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_15), ((unsigned short)46418)));
}
