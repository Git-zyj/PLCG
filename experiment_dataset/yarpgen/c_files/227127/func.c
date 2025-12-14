/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227127
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
    var_17 = ((/* implicit */signed char) (~(844424930131968LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 &= ((((/* implicit */_Bool) min((16383U), (((/* implicit */unsigned int) arr_0 [i_0 + 1] [(signed char)8]))))) ? (((arr_0 [i_0 + 1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))) : (arr_1 [(short)0]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)32767)) + (((/* implicit */int) (unsigned char)19))))));
                arr_5 [(_Bool)1] [i_0] [i_0 - 1] = ((/* implicit */int) (short)-7);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) (((-((+(var_5))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [(unsigned short)11])) + (2147483647))) << (((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 8345289259533073984ULL))))))))));
                                var_20 = ((/* implicit */int) (~((((!(((/* implicit */_Bool) (unsigned short)1)))) ? (((/* implicit */long long int) ((int) arr_3 [i_0] [i_3] [i_2]))) : (arr_1 [i_0 + 1])))));
                                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_3] [i_4 + 2])) ? (((/* implicit */int) arr_12 [i_4 - 2] [5LL] [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)56))))) ? (min((((/* implicit */int) (unsigned char)200)), (max((-319769412), (((/* implicit */int) (short)127)))))) : (((((/* implicit */_Bool) (unsigned short)42969)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_2 [i_0 + 1])))));
                            }
                        } 
                    } 
                } 
                var_22 *= ((/* implicit */short) ((((/* implicit */int) (short)30696)) + (((/* implicit */int) (unsigned short)60523))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (short)126);
}
