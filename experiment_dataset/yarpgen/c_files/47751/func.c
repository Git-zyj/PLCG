/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47751
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
    var_15 = ((/* implicit */short) var_4);
    var_16 |= ((/* implicit */unsigned long long int) (~(((unsigned int) var_6))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_17 *= ((/* implicit */_Bool) (-(((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13542))) : (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_2 + 1]))));
                var_18 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_2 - 3]))));
            }
            var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))), (((3325385083U) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
            arr_9 [i_1] [i_0] &= ((/* implicit */unsigned int) arr_0 [(signed char)15]);
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(unsigned char)15] [(unsigned char)15]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_3] [i_3] [i_5]))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_0] [i_5] [i_6] [i_0])) ? (((/* implicit */unsigned int) arr_10 [i_3] [i_4] [22ULL])) : (1954698157U)))))));
                            var_21 = ((/* implicit */unsigned char) ((unsigned int) var_9));
                            var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0]))))), (max((((arr_16 [i_5] [(unsigned short)12] [i_5] [i_4] [(unsigned short)12] [(unsigned short)12]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)18] [(unsigned char)18]))))), ((~(arr_1 [i_4])))))));
                            arr_18 [19] [19] [19] [19] [i_6] [19] [19] = ((/* implicit */unsigned long long int) arr_0 [i_3]);
                        }
                    } 
                } 
            } 
            arr_19 [i_0] = (+((+((~(((/* implicit */int) arr_13 [i_0] [i_3] [i_0] [i_0])))))));
        }
        arr_20 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) arr_12 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)21])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_8)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    var_23 = ((_Bool) var_12);
}
