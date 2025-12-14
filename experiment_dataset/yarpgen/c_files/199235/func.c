/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199235
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
    var_19 = ((/* implicit */unsigned char) var_14);
    var_20 = ((/* implicit */unsigned char) ((((long long int) ((unsigned int) (unsigned char)20))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)20))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_7 [i_0] = ((/* implicit */long long int) (signed char)(-127 - 1));
                /* LoopSeq 1 */
                for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    var_21 = (!(((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3 - 1] [i_0] [i_3 + 1] [i_3 + 3] [i_3 - 1])));
                    var_22 = ((/* implicit */short) ((signed char) (signed char)4));
                }
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_0 [i_1]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5 + 3] [i_5 - 1] [i_5 - 2] [i_6] [i_6]))))));
                            var_25 = ((/* implicit */signed char) arr_12 [i_0] [9LL] [i_0]);
                            var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_5 - 1] [i_1])) >= ((~(((/* implicit */int) (signed char)-115))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 24; i_7 += 2) 
                {
                    arr_23 [3ULL] [3ULL] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) 2016477158));
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-55)))) - (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_0]))));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (signed char)1))));
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)24] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) : (arr_5 [i_0] [i_1] [i_8] [i_1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 24; i_9 += 1) 
                {
                    var_30 ^= ((/* implicit */long long int) (signed char)73);
                    var_31 -= ((/* implicit */short) (+(arr_10 [i_9 - 1] [i_9 - 1] [i_1] [i_1] [i_9 - 2] [i_9 - 2])));
                    var_32 = ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) % (((/* implicit */long long int) ((((/* implicit */_Bool) 622485780)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-69)))))));
                    arr_30 [(short)18] [i_0] [(short)18] [i_0] = (signed char)-5;
                    arr_31 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [11LL] [i_1] [i_1])) ^ (((/* implicit */int) var_4)))) > (((((/* implicit */_Bool) 17652836602695474198ULL)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) var_8))))));
                }
            }
            var_33 = ((/* implicit */signed char) var_5);
            arr_32 [i_0] [23ULL] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [11] [i_0]);
            var_34 = ((/* implicit */long long int) (signed char)(-127 - 1));
        }
        arr_33 [i_0] = ((/* implicit */int) (-(((long long int) ((((/* implicit */int) arr_11 [i_0] [11LL] [i_0] [i_0] [11LL] [i_0])) | (arr_10 [i_0] [i_0] [i_0] [i_0] [20] [16U]))))));
        var_35 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned int) (_Bool)0)), (268435455U))));
        var_36 &= ((/* implicit */long long int) arr_26 [(short)24]);
        var_37 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [(unsigned short)14] [i_0])) - (163)))));
    }
    for (short i_10 = 3; i_10 < 13; i_10 += 2) 
    {
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((unsigned short) 268435467U)))));
        var_39 = ((/* implicit */signed char) max(((~(min((arr_8 [22U]), (((/* implicit */unsigned int) arr_29 [24ULL] [(_Bool)1] [(_Bool)1] [i_10] [(unsigned short)10] [i_10])))))), (arr_8 [1LL])));
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10]))) : (((((/* implicit */_Bool) arr_37 [i_10])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_10 - 3])))))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((arr_27 [i_10] [i_10] [i_10] [i_10] [18LL] [i_10]), (arr_25 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10]))))) / (arr_22 [i_10] [i_10] [i_10 - 1]))) : (arr_35 [i_10] [i_10 - 2])));
        arr_38 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned short)63567), (((/* implicit */unsigned short) arr_34 [i_10]))))), (((arr_26 [i_10 + 1]) / (((/* implicit */int) var_15))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27649))) : (min((arr_5 [i_10] [i_10] [12] [i_10]), (((/* implicit */unsigned long long int) var_6))))));
    }
}
