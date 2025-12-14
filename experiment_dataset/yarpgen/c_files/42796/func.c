/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42796
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) arr_8 [(short)2] [i_1] [i_2]);
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6244)) ? (((((/* implicit */_Bool) var_8)) ? (arr_9 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)126)), (var_11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3206818195U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) : (var_12)))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_11 [i_3] [i_3] [4LL] [i_0] [i_4])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))));
                                arr_14 [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-38)) < (((((/* implicit */_Bool) var_6)) ? (-744081304) : (((/* implicit */int) (signed char)78))))))), (((((/* implicit */_Bool) min(((short)14666), (((/* implicit */short) (signed char)78))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 2711227703U)) : (arr_9 [i_3] [i_1]))) : (((/* implicit */unsigned long long int) ((long long int) var_5)))))));
                                arr_15 [i_0] [8U] [i_2] [i_4] [(unsigned short)0] [i_0] [i_4] &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)32768)), (arr_0 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_1])), (((unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [(signed char)16] [i_0] [i_0] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (min((((((/* implicit */_Bool) var_10)) ? (var_12) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned short)32768))))))) : (2175436658U)));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)0) ? ((+(var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)62320))))))) : (((/* implicit */long long int) (+(3206818195U)))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 15; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                arr_21 [i_5] |= ((/* implicit */unsigned short) var_0);
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (+(((long long int) 4294967277U))))) : (min((((/* implicit */unsigned long long int) arr_11 [i_5] [(signed char)12] [i_5 + 2] [i_5 - 1] [i_5 + 1])), (arr_4 [i_5] [i_5] [i_5 + 2])))));
            }
        } 
    } 
}
