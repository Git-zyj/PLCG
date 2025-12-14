/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28247
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
    var_17 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_8)))))), (var_2));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)2092)) || (((/* implicit */_Bool) 713958140671252270LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_18 ^= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (signed char)92)))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_19 = ((/* implicit */short) arr_1 [i_0]);
            var_20 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
            arr_7 [i_0] = ((/* implicit */unsigned short) (unsigned char)85);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) * (((/* implicit */int) var_3)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                arr_13 [i_0] [i_2] [i_3] = ((/* implicit */short) (-(((((/* implicit */int) arr_10 [i_0])) + (((/* implicit */int) (unsigned short)65535))))));
                arr_14 [i_0] = ((/* implicit */short) arr_10 [i_0]);
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(10201470982467346222ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0]))));
            }
            var_23 = ((/* implicit */unsigned char) 5371362583429705437ULL);
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_0])) : (((/* implicit */int) var_6))));
                arr_17 [i_0] [i_0] = ((/* implicit */short) arr_5 [i_4] [i_2] [i_0]);
                var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0])) == (((/* implicit */int) var_3))));
            }
            var_26 = ((/* implicit */unsigned long long int) 713958140671252270LL);
        }
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? ((~(((/* implicit */int) (short)(-32767 - 1))))) : ((+(((/* implicit */int) (signed char)89))))));
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) arr_5 [i_0] [4ULL] [(unsigned short)13]);
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_15 [i_0] [i_5] [i_0]))));
                var_30 ^= ((/* implicit */short) ((var_2) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)101)) << (((((/* implicit */int) var_10)) - (3527))))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                arr_26 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-93)) * (((((/* implicit */_Bool) arr_19 [i_7] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)47843))))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_7])) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                    var_32 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_15)) ^ (((/* implicit */int) (short)21714)))) / ((~(((/* implicit */int) arr_22 [i_5] [i_5]))))));
                    var_33 ^= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)511))));
                }
                for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_0 + 2] [i_0] [i_5 - 1] [i_5 - 1])) != (((/* implicit */int) (unsigned short)65408))));
                    arr_33 [i_0] = (-(((/* implicit */int) arr_12 [i_5 + 1] [i_5 + 1] [i_0 - 1])));
                }
                var_35 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)50341))));
            }
            for (unsigned short i_10 = 2; i_10 < 13; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_39 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_23 [i_11] [i_10] [i_0 + 2] [i_0 + 2]));
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (unsigned char)87))));
                    var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [(short)2] [i_5])) && (((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_10 + 3])))))));
                }
                var_38 = ((/* implicit */signed char) ((_Bool) arr_12 [i_5 + 1] [i_5 - 1] [i_5 + 1]));
            }
        }
        var_39 = ((/* implicit */unsigned short) var_1);
    }
    /* LoopNest 3 */
    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        for (unsigned short i_13 = 2; i_13 < 16; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                {
                    var_40 = max((((/* implicit */unsigned short) arr_40 [(short)6])), (min((var_8), (((/* implicit */unsigned short) arr_44 [i_13] [i_12])))));
                    var_41 = ((/* implicit */signed char) ((min((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_5))))), ((~(((/* implicit */int) (unsigned short)0)))))) | (min(((+(((/* implicit */int) var_8)))), (var_11)))));
                }
            } 
        } 
    } 
}
