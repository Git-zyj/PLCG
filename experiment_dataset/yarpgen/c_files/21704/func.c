/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21704
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
    var_13 = var_10;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_14 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */int) arr_3 [(short)9])))))) % ((~(arr_2 [i_0]))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                {
                    var_15 += ((/* implicit */short) arr_6 [(short)2] [i_2]);
                    arr_12 [i_1] [i_1] [1U] [11U] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_8 [i_1]))))));
                    var_16 = (-(arr_9 [i_1] [i_1] [i_3 + 1]));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((arr_17 [i_1] [i_2 + 3] [4U] [i_3 - 1] [i_5] [(unsigned short)14] [i_2 + 4]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30))))))));
                                arr_19 [i_1] = ((/* implicit */unsigned char) (short)(-32767 - 1));
                                arr_20 [i_1] = ((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1]) <= (((/* implicit */int) (!(((/* implicit */_Bool) 6886051611711770134ULL)))))));
                                arr_21 [i_1] [9LL] [i_3] [i_1] [i_3] [13ULL] [0U] = ((/* implicit */unsigned long long int) (short)-943);
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_6 [i_5] [i_3 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (((-(6886051611711770137ULL))) / (((/* implicit */unsigned long long int) arr_6 [i_6] [i_6])))))));
            arr_24 [i_1] = ((/* implicit */unsigned char) arr_13 [i_1] [(short)6] [i_6] [i_6]);
        }
    }
    var_20 -= ((((/* implicit */int) var_4)) << (((262080ULL) - (262075ULL))));
}
