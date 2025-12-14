/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205656
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 += ((4294967290U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
                            arr_13 [i_0] = ((/* implicit */unsigned char) max((((unsigned short) arr_4 [i_1] [i_1] [i_2 - 2])), (((/* implicit */unsigned short) var_15))));
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_12 [i_2 - 2] [i_1] [i_3] [i_2 - 2] [i_0]);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1])))))) : (max((((unsigned int) (unsigned short)63939)), (((/* implicit */unsigned int) (unsigned char)235)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_11)) << (((((var_12) + (2846201611068318097LL))) - (19LL)))))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_18 [16] [16])) : (7448442827928283222LL))), (((/* implicit */long long int) arr_15 [i_4]))))) ? (max((((/* implicit */long long int) arr_17 [(short)12] [(short)12])), (min((7448442827928283219LL), (((/* implicit */long long int) (unsigned char)242)))))) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_25 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [(short)15] [(signed char)17])))))));
            var_26 |= ((/* implicit */signed char) min((min((((/* implicit */long long int) arr_17 [i_4] [8])), (arr_16 [i_5] [i_4]))), (min((((/* implicit */long long int) arr_17 [i_4] [20])), (arr_16 [i_5] [i_4])))));
        }
    }
}
