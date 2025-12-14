/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31717
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1] [(short)9] [i_2])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((/* implicit */int) var_0)))))), (((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12108719419978851362ULL)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (signed char)21))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))));
                                arr_14 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) var_2);
                                arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_9)))) : (((arr_10 [i_0] [i_2] [(unsigned char)2] [i_0]) - ((-(((/* implicit */int) var_5))))))));
                                arr_16 [i_1] [(short)3] [(short)3] [(short)3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3536848640U), (((/* implicit */unsigned int) (signed char)11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) : (min((((/* implicit */long long int) var_3)), (arr_7 [i_0] [i_0] [i_2] [i_2])))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4])) : (((/* implicit */int) var_0))))) ? (arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) >> (((((/* implicit */int) var_10)) - (20951)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 32767U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (4294967280U)));
}
