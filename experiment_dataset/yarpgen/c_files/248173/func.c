/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248173
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
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [(short)11] = ((/* implicit */unsigned long long int) (signed char)88);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned int) 1161829112)))));
                    var_21 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_22 *= ((((/* implicit */int) (!(((/* implicit */_Bool) max((18446744073709551607ULL), (((/* implicit */unsigned long long int) 1161829132)))))))) >> (((((-1161829133) / (1161829132))) + (8))));
                                arr_20 [i_4] [i_4 - 1] [(_Bool)1] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) arr_15 [i_8] [i_9]);
                                arr_26 [i_9] [i_4] [i_5 + 1] [i_5] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) 1161829135);
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_9 - 1] [i_8 - 1] [i_5 + 1])) ? (((/* implicit */int) arr_22 [i_9] [i_9 + 1] [i_8 + 1] [i_5 + 1])) : (((/* implicit */int) arr_22 [i_9 - 1] [i_9 + 1] [i_8 - 1] [i_5 - 1]))))) ? (min((((int) arr_13 [i_9] [7U] [i_4] [i_3])), (((((/* implicit */int) arr_19 [i_3] [i_4] [i_4] [i_3] [0U] [i_9])) >> (((-1161829147) + (1161829160))))))) : (((int) arr_18 [i_4] [i_4] [i_4] [i_8 - 1] [i_9] [i_9] [i_5 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (-(1161829158))))));
}
