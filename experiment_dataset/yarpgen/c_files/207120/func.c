/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207120
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) (signed char)127);
                var_14 = (i_0 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-33)))), (((/* implicit */int) min(((unsigned short)33758), (((/* implicit */unsigned short) arr_0 [10LL])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_6))))) >> (((((/* implicit */int) arr_2 [i_0])) - (29988)))))) : (arr_4 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-33)))), (((/* implicit */int) min(((unsigned short)33758), (((/* implicit */unsigned short) arr_0 [10LL])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_6))))) >> (((((((/* implicit */int) arr_2 [i_0])) - (29988))) + (18983)))))) : (arr_4 [i_0]))));
                var_15 |= ((/* implicit */int) ((((/* implicit */int) (unsigned short)22912)) > (((/* implicit */int) (signed char)16))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29549)) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) (unsigned short)42624))))) : (1768223258)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26296))) : (134217727LL)))) ? (((unsigned int) -3154803457743907357LL)) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_2])), (arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_4 - 1]))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min(((-(arr_8 [i_4 - 2] [i_0 + 1]))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22930))))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0 + 1] [i_0 + 1]));
                    var_20 -= ((unsigned char) (-((+(arr_3 [i_1] [i_1] [i_1])))));
                    var_21 = arr_9 [i_0] [11] [i_0] [i_1] [12U] [i_2];
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) (signed char)46)))) == (1252410261)));
    var_23 = ((/* implicit */unsigned short) var_7);
}
