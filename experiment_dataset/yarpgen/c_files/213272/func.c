/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213272
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4 + 3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-113));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (6U) : (var_1))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [(signed char)4] = ((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_1 - 2] [(unsigned short)2]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (short)-32766)), (var_10)))))) ? (var_14) : (((/* implicit */int) var_16))));
}
