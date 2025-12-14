/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217068
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(min((9223372036854775793LL), (((/* implicit */long long int) var_0))))));
            arr_6 [i_0] = arr_3 [16LL] [i_0];
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((arr_4 [i_0 - 1] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_0]))))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((unsigned int) ((long long int) var_2))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        {
                            arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 9223372036854775793LL);
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0 + 1] [i_0] [i_0])) ? (arr_17 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (arr_17 [(unsigned char)14] [i_0 + 1] [(unsigned char)14] [i_0])));
                        }
                    } 
                } 
                arr_20 [i_0] &= ((/* implicit */short) ((((/* implicit */int) arr_1 [11U] [i_0 - 1])) + (-1016661371)));
            }
            var_14 = ((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 1]);
            var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_27 [i_6] [i_6] [i_6] [i_6] = ((((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_0 - 1] [i_0 + 2])) || (((/* implicit */_Bool) arr_2 [i_7 + 2] [i_0 + 2] [i_0 - 1])))) && (((/* implicit */_Bool) ((int) ((unsigned int) arr_11 [i_0] [i_6] [i_6])))));
                    var_16 = ((/* implicit */long long int) var_6);
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned short) arr_22 [i_8]);
        arr_31 [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_5)), (arr_0 [(short)13])));
        arr_32 [i_8] = ((/* implicit */long long int) var_5);
    }
    var_17 = ((/* implicit */short) ((var_6) & (var_8)));
    var_18 = ((/* implicit */_Bool) var_9);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? ((-(((/* implicit */int) (_Bool)0)))) : (-696931266)))))));
    var_20 = ((/* implicit */_Bool) var_6);
}
