/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29987
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((arr_7 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */long long int) var_9))))))) && (((/* implicit */_Bool) 131072))));
                                arr_14 [(short)13] [i_1] [(short)13] [i_3] [i_2 + 1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_10 [i_2 + 2] [i_1] [i_2] [i_3] [i_4])) != (((/* implicit */int) arr_10 [i_2 + 2] [(unsigned char)5] [i_2 + 1] [i_2 + 1] [i_1])))));
                                var_21 &= ((/* implicit */_Bool) (-(min((((((/* implicit */int) var_14)) - (((/* implicit */int) var_16)))), (131072)))));
                                var_22 = ((/* implicit */_Bool) arr_8 [(unsigned char)5] [i_3]);
                            }
                        } 
                    } 
                    arr_15 [(unsigned char)8] = ((/* implicit */unsigned short) arr_5 [(short)13] [i_1] [i_1]);
                }
                arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) min((min((((int) var_9)), (((/* implicit */int) var_7)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)569)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (((int) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) var_15)))))))))));
}
