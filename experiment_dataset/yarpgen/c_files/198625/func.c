/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198625
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                                arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_2 + 1])), (arr_6 [i_3] [i_3] [i_3] [i_3]))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] |= ((/* implicit */unsigned short) ((int) 1917077351));
                    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_2 + 1] [i_2 - 1])), (var_3))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_0))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_7))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 2097151)) : (((((/* implicit */_Bool) (signed char)-69)) ? (var_13) : (((/* implicit */unsigned int) var_4))))));
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967293U)) ? (1292020395) : (((/* implicit */int) (unsigned char)37)))) < ((~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 4062568353356137830LL)))))))));
}
