/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205205
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1 - 1] [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_3] [i_2] [i_0]);
                            var_14 = ((/* implicit */short) min((max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_2] [i_1] [i_0])))), (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0] [i_2]))))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_1]))))));
                            arr_11 [i_0] = ((/* implicit */unsigned int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1] [i_3]))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0] [i_3]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_23 [i_6 + 2] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((short) ((unsigned short) arr_2 [i_6 + 3] [i_1 + 2])));
                                var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_15 [i_4] [i_5] [i_6 - 2])), (arr_16 [i_4] [i_1])));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_1 + 1] [i_1]);
                var_17 -= ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 + 2] [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]))))) : (arr_0 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)188))))) ? (arr_14 [i_0] [i_0] [i_1 + 2]) : ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 1])))))))));
            }
        } 
    } 
    var_18 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (max((var_12), (((/* implicit */int) var_9)))) : (((/* implicit */int) var_4))))));
    var_19 &= ((unsigned int) (~(var_12)));
}
