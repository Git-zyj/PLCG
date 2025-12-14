/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198442
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                arr_5 [i_1] [(unsigned short)11] [6U] = max((((/* implicit */int) arr_0 [i_1] [i_0])), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : ((~(max((var_2), (((/* implicit */unsigned int) (short)30027)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned long long int) var_14);
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) max((arr_8 [i_2]), (arr_8 [i_5])))) * (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_19 [i_6] [i_2] [i_4] [i_2] [i_2])) : (((((/* implicit */int) arr_6 [i_2])) / (((/* implicit */int) var_6)))))))))));
                                arr_20 [i_2] [i_2] [13ULL] [i_3] [19] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_12 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6])))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_19 [i_2] [i_3] [i_3] [i_5] [i_3]))))))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_3] [i_4]))))) ? (max((arr_9 [i_2] [i_2]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_4])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4))));
}
