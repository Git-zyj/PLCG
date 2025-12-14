/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232826
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
    var_20 = ((/* implicit */unsigned int) min((((int) (unsigned short)65534)), (((/* implicit */int) var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) var_17);
        arr_2 [(unsigned char)8] |= ((/* implicit */long long int) 18446744073709551615ULL);
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) ^ (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3930)) ? (((/* implicit */int) (short)-3930)) : (((/* implicit */int) (short)-32128))));
            var_24 += arr_6 [i_1];
        }
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_25 += ((/* implicit */_Bool) ((unsigned short) 2888776399U));
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                arr_12 [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)78))));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) 1406190896U))));
                arr_13 [i_0] [i_2] [5] [i_3] = (-(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    var_27 = (~((~(((/* implicit */int) (short)-26204)))));
                    arr_16 [i_0] = ((/* implicit */short) ((int) ((18446744073709551590ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned char)1] [i_0]))))));
                    arr_17 [(signed char)9] [i_0] [i_0] [i_2] [(signed char)9] [i_4 + 2] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                }
            }
        }
    }
}
