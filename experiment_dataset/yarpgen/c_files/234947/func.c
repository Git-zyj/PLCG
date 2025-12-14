/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234947
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_4)))));
                    arr_11 [(short)0] [i_0] = ((/* implicit */short) arr_9 [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_4] [i_1] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_2] [0] [i_0]))));
                                arr_19 [i_0] [i_0] = (+((~(((((((/* implicit */int) (short)-5245)) + (2147483647))) >> (((((/* implicit */int) var_6)) + (13106))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(var_3)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_25 [i_6] [i_6] [i_0] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0] [i_0 - 1]))))) ? (((long long int) arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0 + 1] [(short)4] [i_0 + 1])) ? (((/* implicit */int) arr_22 [i_0] [i_0 - 1] [(_Bool)1] [i_0 - 1])) : (((/* implicit */int) (short)-8129)))))));
                                arr_26 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) var_0))));
    var_16 = ((((/* implicit */unsigned int) ((((_Bool) var_14)) ? (((/* implicit */int) min(((short)13536), (var_9)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (3751718069U))))))) & (var_14));
}
