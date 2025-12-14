/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217682
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                            {
                                arr_11 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_4 - 2] [i_0 + 1] [i_1 - 1])))) || (((/* implicit */_Bool) (+(arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_1 + 1] [i_4 + 1] [i_4]))))));
                                arr_12 [8] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (22U) : (4294967273U)));
                                var_19 = ((/* implicit */unsigned short) ((((4294967295U) >= (((/* implicit */unsigned int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1])))))) : (((((/* implicit */_Bool) 0U)) ? (22U) : (4294967266U)))));
                                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_15)) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned long long int) var_17))))));
                            }
                            var_21 = ((/* implicit */signed char) max((4294967294U), (((/* implicit */unsigned int) (signed char)25))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1] [i_0 - 1]), ((~(arr_2 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70))))), (arr_7 [i_0 - 1] [13ULL] [13ULL] [i_1 - 1] [i_0])))) : (arr_6 [i_1 - 1] [(unsigned char)4] [i_0] [(unsigned char)4])));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((4294967286U), (4294967289U))))));
    var_24 = ((/* implicit */long long int) ((int) var_9));
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) : (0U)))) ? (428335469453755736ULL) : (((/* implicit */unsigned long long int) var_16)))))))));
}
