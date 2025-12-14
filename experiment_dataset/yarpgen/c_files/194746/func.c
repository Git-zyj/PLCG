/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194746
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
    var_11 = var_6;
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3] [i_3])) ? (((/* implicit */int) arr_8 [i_2 - 1] [1U] [i_3])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_3] [i_3]))))));
                            arr_11 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */int) (-(var_10)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_6 [i_0] [i_0 + 1])) & (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 3]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        {
                            arr_19 [i_5] [i_4] [i_4 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((int) ((unsigned int) var_3)));
                            var_13 = ((/* implicit */unsigned char) (+((-(var_10)))));
                            arr_20 [i_4] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_4] [i_1] [i_0 - 2]);
                        }
                    } 
                } 
                arr_21 [i_0 + 1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((953471440U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))))))) ? ((((!(((/* implicit */_Bool) arr_9 [7U] [i_1] [i_0] [i_0])))) ? (9166128769589542373ULL) : ((-(arr_2 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_17 [i_0]))))))))));
            }
        } 
    } 
}
