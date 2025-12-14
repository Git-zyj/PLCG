/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220215
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
    var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_1 [i_0 + 3]))) + ((((-(-1081400412))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) < (arr_1 [i_0 - 1]))))))));
                var_12 |= ((/* implicit */unsigned short) 12468871967635236952ULL);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_13 |= ((/* implicit */_Bool) ((2894033767U) << (((4398044413952LL) - (4398044413945LL)))));
                    var_14 = ((/* implicit */unsigned short) 12468871967635236952ULL);
                    arr_9 [i_0 + 2] [0ULL] [(_Bool)1] = 3;
                }
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] [9U] = ((/* implicit */short) ((unsigned long long int) min((arr_6 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */long long int) (short)(-32767 - 1))))));
                    var_15 = ((/* implicit */short) (+(12468871967635236952ULL)));
                    var_16 = ((/* implicit */short) min(((~(min((((/* implicit */long long int) arr_2 [i_0 + 2] [i_1] [i_3])), (arr_11 [10LL] [i_1] [i_3] [9U]))))), (((/* implicit */long long int) var_8))));
                }
            }
        } 
    } 
}
