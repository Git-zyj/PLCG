/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39136
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
    var_20 = ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_21 = ((/* implicit */signed char) ((long long int) var_0));
    var_22 = ((unsigned char) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) arr_3 [i_4 + 1]);
                                var_24 = ((/* implicit */int) 4294967295U);
                                var_25 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))) : (((/* implicit */int) min(((unsigned short)65514), ((unsigned short)21))))))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((_Bool) (signed char)106)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [i_1] [i_1] [(unsigned char)20] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_2]))))) && (((/* implicit */_Bool) ((int) -501313865)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) var_13);
                                arr_21 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
