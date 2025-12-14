/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4155
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                arr_7 [6] [i_0] = ((_Bool) arr_5 [i_0]);
                var_17 = ((/* implicit */int) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_2] [i_2 + 2] [i_2 + 2])) & (((/* implicit */int) arr_5 [i_2])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) ((int) arr_3 [i_2]));
                        var_20 = ((/* implicit */long long int) ((_Bool) arr_14 [(unsigned char)7] [i_3] [i_3]));
                    }
                    for (unsigned char i_6 = 3; i_6 < 14; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((arr_12 [i_6] [6LL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_1 [i_2 - 3]))));
                        var_23 -= ((((unsigned int) arr_12 [i_2 - 1] [i_4])) | (((/* implicit */unsigned int) ((int) ((arr_15 [i_2] [i_4] [11U]) & (arr_3 [(unsigned char)15]))))));
                        var_24 = ((((/* implicit */_Bool) arr_8 [i_2])) && (arr_5 [(unsigned char)6]));
                        var_25 = arr_11 [(unsigned short)9] [i_3 + 3] [i_4];
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [9])) || (((/* implicit */_Bool) arr_8 [i_2]))))) >= (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2 + 2]))))) & (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_13 [2LL] [2LL] [i_2 + 1] [i_2]))) >= (((/* implicit */int) arr_5 [6])))))));
        var_27 = ((/* implicit */unsigned char) arr_0 [18ULL]);
    }
}
