/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242462
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_20 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((short) arr_1 [i_0]))), (max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_3])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_1])))))))));
                        var_21 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-9527))))), (arr_10 [i_2] [i_3] [i_0] [i_0] [(_Bool)1] [i_2]));
                        var_22 -= ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0]);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_7 [(unsigned short)3] [i_1] [i_2] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_2] [i_1] [i_1] [i_3]))))) : (((/* implicit */int) arr_12 [i_2] [i_0])))))));
                        var_24 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [i_3])), (min((arr_4 [i_3]), (((/* implicit */unsigned long long int) arr_3 [i_2]))))));
                    }
                    var_25 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) arr_10 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6]);
                    /* LoopSeq 1 */
                    for (int i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        arr_26 [i_4] [i_5] [8] [i_7 - 1] [i_5] [i_6] = ((/* implicit */int) (-(max((10778572166762887952ULL), (((/* implicit */unsigned long long int) (short)-9515))))));
                        var_27 = min((min((((/* implicit */int) arr_7 [i_5] [i_5] [i_7 + 1] [i_7 + 1])), ((+(((/* implicit */int) arr_14 [(unsigned char)0] [i_5])))))), (((/* implicit */int) min((arr_6 [11U] [i_6 - 3] [9]), (arr_12 [i_4] [i_6 - 3])))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            for (signed char i_9 = 3; i_9 < 9; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        arr_33 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_9 - 3] [i_9 - 2] [i_9 - 2])) & (((/* implicit */int) arr_6 [i_9 - 2] [i_9 - 2] [i_9 - 1]))));
                        arr_34 [i_4] [i_10] = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_4] [i_4] [(short)13] [i_10] [i_10] [i_10]));
                    }
                    var_28 = ((/* implicit */_Bool) arr_32 [4] [2]);
                }
            } 
        } 
    }
}
