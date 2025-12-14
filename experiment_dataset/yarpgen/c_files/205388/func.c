/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205388
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
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [(signed char)3] [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)5] [(short)9] [(short)9])) ? (arr_5 [4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32751)))))) ? (((/* implicit */long long int) min((431992758U), (3310291268U)))) : (arr_6 [i_0] [i_1 + 2] [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [(signed char)10] [2U] [i_0] [i_4] [9LL] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_4 + 1] [(_Bool)0] [i_4 + 1] [i_4] [i_0] [i_4 - 4]))))), (((long long int) var_5)));
                                arr_15 [i_0] [i_0] [5LL] [i_3] [8ULL] = ((/* implicit */long long int) arr_13 [i_0] [2ULL] [2ULL] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */short) (!(var_0)));
}
