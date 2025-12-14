/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249207
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
    var_14 = max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (1073741823U))), (((((/* implicit */_Bool) 3221225479U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_15 = arr_0 [i_0];
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [(short)14] [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((var_0) >> (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) var_1);
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 4; i_4 < 17; i_4 += 1) 
                    {
                        var_16 = 9223372036854775807LL;
                        var_17 = ((/* implicit */unsigned char) var_6);
                    }
                    arr_14 [i_1] [(short)14] [(signed char)4] [(short)14] = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
                    arr_15 [i_1] [15U] [(short)12] [(short)12] = ((/* implicit */long long int) ((((((/* implicit */int) var_11)) - (((/* implicit */int) arr_9 [5LL] [i_2] [(unsigned char)18] [i_2] [i_2])))) + (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)7))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (var_6)));
                        arr_18 [i_0] [i_1] [(short)10] [i_2] [i_3] [i_0] |= (signed char)-15;
                        arr_19 [3ULL] [(unsigned char)12] [(unsigned char)7] [8ULL] [i_1] = ((/* implicit */signed char) ((var_8) / (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                    }
                    arr_20 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */int) ((var_13) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned char i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = ((signed char) (signed char)0);
                        var_20 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)1))));
                    }
                    var_21 += arr_1 [i_0];
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_0] [14U] [i_0] [i_1] = ((/* implicit */short) (signed char)(-127 - 1));
                        arr_31 [5LL] [5LL] [i_1] [i_6] [i_6] [17ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (unsigned char)249))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)16383))) % (4294967280U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_2])) | (((/* implicit */int) (signed char)-16)))))));
                        arr_34 [15U] [i_1] [i_2] [i_2] [i_9 + 4] = ((/* implicit */short) (unsigned short)8);
                    }
                    arr_35 [i_0] [(_Bool)1] [i_1] [(unsigned char)15] = ((/* implicit */long long int) var_11);
                }
            }
        }
        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            arr_39 [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)65535);
            arr_40 [i_0] [(_Bool)1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
            var_23 = ((/* implicit */unsigned char) arr_25 [i_0] [9LL] [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (short i_11 = 1; i_11 < 18; i_11 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_11 + 2] [i_11 + 2] [i_11 + 2])))))));
            arr_44 [i_0] [0U] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_37 [i_0] [i_0] [i_0]))) >> ((+(((/* implicit */int) var_4))))));
        }
        for (short i_12 = 1; i_12 < 18; i_12 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min(((signed char)124), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(short)9] [(short)9] [(unsigned char)11] [(unsigned char)11] [(short)9] [i_0] [i_0]))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (1073741830U)))))))))));
            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(0ULL)))) ? (max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_0]))) : (var_0))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_12] [(signed char)3] [0U] [(unsigned short)4] [(unsigned short)4] [i_12 + 2])))))));
            arr_48 [(short)11] [(signed char)0] [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) (short)16383))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            arr_53 [18U] [i_13] = ((/* implicit */signed char) arr_51 [7U] [i_13]);
            arr_54 [(signed char)4] [(signed char)4] [i_13] = ((/* implicit */unsigned char) arr_6 [i_0] [(unsigned char)8] [i_13] [i_13]);
            var_27 &= ((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) != (((/* implicit */int) (signed char)0))));
        }
    }
    var_28 = ((/* implicit */signed char) var_8);
}
