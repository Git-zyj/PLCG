/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194422
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
    var_15 = ((/* implicit */unsigned long long int) min(((unsigned short)15), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_13)), (17ULL))) != (((/* implicit */unsigned long long int) 907804919U)))))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-27105)))))));
    var_17 = ((/* implicit */signed char) max(((~(((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)59)))))), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) >= (((unsigned int) arr_3 [(unsigned short)12] [1] [(unsigned short)3])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)31569))));
                                var_20 = ((/* implicit */signed char) arr_4 [(unsigned short)17] [(unsigned char)14] [i_4]);
                                var_21 |= ((/* implicit */unsigned int) (unsigned char)20);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_2 - 2] [i_2 - 2] [i_2 - 1]));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_5 [9LL] [i_0])))) ? (23ULL) : (((/* implicit */unsigned long long int) 917939873U))));
        var_24 = ((signed char) arr_4 [i_0] [i_0] [6]);
    }
}
