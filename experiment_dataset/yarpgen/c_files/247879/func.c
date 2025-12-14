/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247879
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1196889887)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32756))) : (1587731963U)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3 + 1] [i_3])) ? (((((/* implicit */_Bool) 1587731963U)) ? (((/* implicit */long long int) arr_3 [i_0])) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_2])))))));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) arr_8 [i_3] [(unsigned char)11] [i_3] [i_3 - 1] [i_3 - 1])) != (arr_5 [i_3] [i_3] [i_3] [i_3]))), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) > (min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_6 [i_0] [i_2] [i_4])))))));
                            }
                        } 
                    } 
                } 
                arr_15 [16U] = ((/* implicit */unsigned char) arr_12 [i_1] [i_1] [(unsigned short)2] [i_1] [13ULL] [i_0] [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */short) var_0))));
}
