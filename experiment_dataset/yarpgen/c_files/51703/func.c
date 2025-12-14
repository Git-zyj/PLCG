/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51703
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
    var_16 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((max(((+(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2511834639U)) ? (1783132654U) : (arr_5 [(signed char)10] [i_0] [i_0])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ ((+(7631950828840402133ULL)))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((((/* implicit */_Bool) 7631950828840402133ULL)) ? (7631950828840402133ULL) : (((/* implicit */unsigned long long int) -707391333)))))))));
                                arr_14 [i_0] [6U] [i_0] [i_0] [(short)12] [i_0] [i_0] |= ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) 5134491407908919153ULL)) ? (((/* implicit */unsigned long long int) 599607784U)) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2])) ^ (var_8))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) (+(707391332)))) ^ (((((/* implicit */_Bool) var_13)) ? (7631950828840402133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
    var_20 = ((/* implicit */unsigned int) var_4);
}
