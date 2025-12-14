/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207064
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_17 = (+(((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)12748)) : (((/* implicit */int) var_9)))) / (((/* implicit */int) arr_3 [i_0 - 3])))));
        var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (unsigned short)55572))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            var_19 -= ((/* implicit */unsigned char) arr_4 [i_2]);
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                {
                    var_20 *= ((/* implicit */unsigned short) arr_8 [i_1] [i_2 - 1] [i_3]);
                    var_21 = ((((/* implicit */_Bool) (unsigned char)161)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)52796)) : (((/* implicit */int) arr_6 [16U])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(unsigned char)3] [(unsigned char)3])) && (((/* implicit */_Bool) 9223372036854775807LL))))));
                    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4209272165U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_3] [(_Bool)1] [i_1])))))) ? (((((/* implicit */_Bool) arr_11 [i_1] [(_Bool)1] [(short)2] [i_4])) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (short)29699))));
                }
                for (long long int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_3] [i_2] [i_3] [i_3] [i_3])) - (((/* implicit */int) (unsigned char)254))))) + (var_6)))));
                    var_24 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)95))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_2] [i_2 + 3] [i_2] [i_3] [i_3])) < (((/* implicit */int) arr_14 [i_1] [i_2 + 3] [(unsigned char)8] [i_3] [i_5]))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))) ? (arr_9 [i_3] [i_5] [i_3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44)))));
                }
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_9))));
                var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65519))));
            }
            var_29 *= ((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1] [(short)8]);
            var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))));
        }
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned char)128))));
        arr_15 [(_Bool)1] [i_1] = arr_13 [i_1] [(short)7];
    }
    var_32 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-44))))), (((unsigned int) (unsigned char)46)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_2)))))));
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)57)))) / (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
    var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)186)) / (((/* implicit */int) (unsigned char)202)))) / (((/* implicit */int) var_2))));
}
