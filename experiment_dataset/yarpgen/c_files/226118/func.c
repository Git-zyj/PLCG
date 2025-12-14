/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226118
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
    var_10 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62))) % (max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (unsigned short)25126)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25134))) % (var_1))))))) | (((/* implicit */int) (short)0))));
                                arr_15 [i_3] [i_1] [i_1] [(unsigned char)3] = ((/* implicit */_Bool) var_6);
                                arr_16 [i_0] [i_1] [i_3] [i_3 - 1] [i_4] [i_2] = ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) (signed char)-64))))) ? (((((/* implicit */int) (unsigned char)4)) % (((/* implicit */int) (short)-9574)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)4)), ((short)-32535)))));
                                arr_17 [10LL] [i_1] [i_2] [i_3 + 1] [(signed char)5] [i_4] = var_4;
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_3))))));
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */int) var_3)), (var_9))) >> (((max((((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_6) + (718988353))))), (((/* implicit */int) arr_0 [i_1])))) - (1048554)))));
                    var_11 -= ((/* implicit */short) var_5);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_2);
}
