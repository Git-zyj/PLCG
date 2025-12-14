/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208249
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
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 3] = ((/* implicit */short) max(((-(arr_5 [i_0] [i_0]))), ((~(max((-1135482965), (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29509)))))))) && ((!(arr_0 [i_0] [i_1])))));
                        var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                        arr_12 [i_0] [(unsigned short)2] [i_3] [i_0] [i_1] [i_1] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1 + 2] [i_0] [i_2 + 2]))))), ((+((+(((/* implicit */int) arr_4 [10] [i_1] [10])))))));
                        var_12 = ((/* implicit */short) (!(arr_0 [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_4] [(short)0] [i_0]))) : (((arr_7 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(short)8] [(_Bool)1] [i_1 + 1] [(short)8] [(short)8] [(short)8] [i_5])))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_0])) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_2 [(unsigned short)8] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [(unsigned short)4] [i_0] [i_1] [(unsigned short)4] [(_Bool)1] [(_Bool)1] [11LL])) << (((4294967293U) - (4294967291U)))))) : ((~(-1LL)))))));
                                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18525)) ^ (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) -1020152769);
                    arr_18 [i_2 - 1] [i_0] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(short)11] [(short)0] [i_0] [i_0] [i_0]))))) > (((/* implicit */int) arr_13 [i_2] [i_0] [(unsigned short)12] [i_0] [(_Bool)1]))))) <= (min((((((/* implicit */_Bool) 1699691699U)) ? (((/* implicit */int) arr_13 [i_2] [i_0] [i_1 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_2] [(unsigned char)7])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [0] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 9; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 4) 
        {
            {
                arr_25 [i_6] [i_6 + 2] [(unsigned char)0] = ((/* implicit */unsigned long long int) 1020152759);
                arr_26 [i_6] [i_7] [i_7] = ((/* implicit */short) -1020152760);
                var_16 ^= ((/* implicit */_Bool) arr_2 [i_6] [16LL]);
            }
        } 
    } 
}
