/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42975
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) (short)23141)) : (((/* implicit */int) (short)23155)));
                    arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_2 - 1])) ? ((+(arr_7 [i_1 + 1] [i_2] [i_2 + 3]))) : (max((((/* implicit */long long int) arr_3 [i_1 + 1])), (arr_7 [i_1 + 1] [i_2 + 2] [i_2 - 1])))));
                    var_10 -= ((/* implicit */_Bool) ((int) ((((-1223435775) > (((/* implicit */int) arr_1 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16864))) : (((((/* implicit */_Bool) 1110735541)) ? (arr_6 [i_0] [i_0] [9] [(short)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    arr_18 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) arr_11 [i_3])) : (arr_16 [i_5] [i_4] [i_3])))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)12357))))) || (((/* implicit */_Bool) (short)12357)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_5] [i_4]))) : (var_4)));
                                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_14 [i_3] [i_7])), ((unsigned short)54350)))) ? (((/* implicit */int) arr_14 [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_4] [i_6])))))));
                                arr_23 [i_6] [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (short)-23142);
                                var_13 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1303151350)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-2592772970824577488LL)))) ^ (max((((/* implicit */unsigned long long int) (short)16780)), (arr_16 [i_5] [i_6] [15U]))))) % (((((unsigned long long int) (unsigned short)6411)) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
