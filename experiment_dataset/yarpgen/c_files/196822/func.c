/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196822
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
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) (+(175003113U)));
        var_14 = ((/* implicit */unsigned short) min((var_14), (var_1)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                var_15 -= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_4)))));
                var_16 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_8)))) & (((((/* implicit */int) (short)6556)) ^ (((/* implicit */int) var_7))))))) & (4119964165U)));
                arr_11 [i_0] [(unsigned short)11] [i_2] [i_0] = ((/* implicit */unsigned long long int) 4119964182U);
            }
            /* vectorizable */
            for (int i_3 = 2; i_3 < 14; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_3 + 4] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) ((short) arr_8 [i_1] [(signed char)16] [i_3 + 4]));
                    var_17 += ((/* implicit */signed char) ((((/* implicit */int) (short)6583)) - (((/* implicit */int) var_4))));
                }
                arr_17 [i_3] [i_1] = ((/* implicit */signed char) 4119964182U);
                var_18 = ((/* implicit */unsigned int) arr_4 [i_3] [i_1] [i_0]);
                arr_18 [i_0] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)23376))));
            }
            var_19 ^= ((/* implicit */_Bool) min((10U), (((/* implicit */unsigned int) (short)6556))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11501127900227930530ULL)) ? (1529025600) : (((/* implicit */int) (signed char)-62))))) ? (min((((/* implicit */unsigned int) arr_3 [i_0])), (max((((/* implicit */unsigned int) 1477802997)), (4119964189U))))) : (((0U) / (((/* implicit */unsigned int) (-(arr_4 [i_0] [i_1] [(unsigned short)0]))))))))));
            arr_19 [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4119964182U)) ? (175003114U) : (4119964161U)))) ? (((/* implicit */int) (short)6556)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1091813321))))))))));
        }
    }
    for (signed char i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        arr_24 [i_5] = ((/* implicit */signed char) ((unsigned int) ((long long int) ((((/* implicit */_Bool) arr_14 [(signed char)0] [i_5] [(short)2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))));
        var_21 |= ((/* implicit */long long int) (unsigned short)57942);
    }
    var_22 = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_0)) : (var_10)))))));
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((((/* implicit */int) ((short) 1394741442U))) ^ ((~(((/* implicit */int) var_7)))))))))));
}
