/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192985
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
    var_12 -= ((((/* implicit */int) var_8)) ^ ((-(((/* implicit */int) var_3)))));
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 - 2] [i_3 + 1] [i_2])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_3 + 2] [i_2])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_3 + 3] [i_2])))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_1 [i_3 - 2])), (var_1))))));
                                arr_12 [i_3] [(unsigned char)0] [i_3] [7U] [i_2] [i_3] = ((/* implicit */unsigned short) arr_1 [i_3]);
                            }
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1] [(unsigned short)4] [(signed char)10])) ^ (((/* implicit */int) arr_5 [(unsigned char)4] [i_1] [i_0 + 1] [(unsigned char)4])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_1])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_1])))))));
            }
        } 
    } 
}
