/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225733
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
    var_18 = ((/* implicit */_Bool) (((-((~(((/* implicit */int) var_12)))))) | (((((/* implicit */int) var_10)) * (min((((/* implicit */int) var_2)), (var_7)))))));
    var_19 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (max((arr_10 [i_0] [i_0] [i_0] [(short)11] [i_0]), (arr_4 [i_1]))))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((arr_10 [i_4 - 1] [i_4 - 1] [i_3] [i_0 + 1] [i_0]) % (((/* implicit */int) arr_1 [i_0])))) == (min((var_7), (((/* implicit */int) arr_1 [i_0])))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3615278103U)) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : (var_7)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((signed char) (unsigned char)32))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0] [i_0] [i_2] [i_5]) || (((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (arr_14 [i_0] [i_0] [i_1] [i_0] [i_5] [(short)11]))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0 + 1] [i_1] [i_2] [i_5]))))));
                                var_24 += ((/* implicit */signed char) arr_5 [i_6] [i_0] [i_0 - 1] [i_0]);
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((max((((/* implicit */int) ((unsigned short) arr_5 [i_6] [i_1] [i_6] [i_5]))), ((-(((/* implicit */int) var_1)))))) * (((/* implicit */int) ((arr_12 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_6] [(signed char)0])))))))))));
                            }
                        } 
                    } 
                    var_26 += ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [0U] [0U]);
                    var_27 |= ((/* implicit */short) (unsigned char)112);
                }
            } 
        } 
    } 
}
