/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46448
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */short) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (short)25029)) ? (((/* implicit */int) (short)25029)) : (((/* implicit */int) (unsigned short)1))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) var_15);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_2] [i_2] [i_3 + 1] [i_2] = ((/* implicit */unsigned int) arr_4 [(signed char)0] [(signed char)0] [i_2]);
                            arr_12 [(_Bool)1] [i_1] = ((/* implicit */int) min((9534433885522634681ULL), (((/* implicit */unsigned long long int) arr_0 [i_2 + 2]))));
                        }
                    } 
                } 
                var_17 = arr_6 [i_1];
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) max(((unsigned short)54289), (((/* implicit */unsigned short) arr_0 [i_1]))))) : (((/* implicit */int) arr_7 [i_1]))));
            }
        } 
    } 
    var_18 ^= var_7;
}
