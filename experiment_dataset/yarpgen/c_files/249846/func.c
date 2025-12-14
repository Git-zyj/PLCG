/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249846
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [2LL] [2LL] = max((((/* implicit */unsigned long long int) ((arr_1 [(short)6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_1 [(signed char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16325)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [(short)7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)233), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */short) arr_6 [i_2 + 1] [i_2 + 1] [i_0])), ((short)0)))) : ((+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-91))))))));
                    arr_10 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (signed char)-4)))))));
                }
            } 
        } 
        arr_11 [(_Bool)1] = ((/* implicit */_Bool) (-(0LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            arr_24 [i_0] [(signed char)8] [i_0] [(short)6] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_5 [i_5] [i_0])) : (((/* implicit */int) arr_22 [(short)8] [i_6] [i_4] [i_5] [i_6]))))));
                            arr_25 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) ((unsigned short) arr_8 [i_0] [(_Bool)1] [5LL] [i_6])))));
                            arr_26 [i_0] [i_0] [i_0] [(_Bool)1] [i_5] [i_3 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_3 + 1] [i_0] [i_4] [i_5] [i_6]))))) ? (((/* implicit */int) arr_4 [i_0] [i_4 - 1])) : ((+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [5ULL] [4LL] [i_6]))))));
                            arr_27 [i_3] [i_3 - 2] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) / (((/* implicit */int) (_Bool)1))))) ? (arr_15 [i_5] [i_4] [i_3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2))))));
                        }
                    } 
                } 
            } 
            arr_28 [i_0] [(signed char)2] [i_3] = (-(arr_19 [i_0] [i_0] [i_0] [(signed char)0]));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_34 [i_0] [i_3] [i_0] [i_8] [i_3] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [(unsigned short)5])) ? (var_5) : (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [(signed char)7] [i_7] [i_8])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_8] [i_3] [i_0])))));
                        arr_35 [i_0] [i_0] = ((/* implicit */short) ((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [i_8]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            arr_38 [(short)6] [(short)6] [i_7] [i_0] [(short)9] = ((/* implicit */unsigned long long int) arr_7 [i_0]);
                            arr_39 [i_7] [i_0] [2U] [2U] [i_9] [i_7] = ((/* implicit */short) 2ULL);
                            arr_40 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)4);
                            arr_41 [i_9] [(unsigned char)6] [(unsigned char)6] [i_3 - 3] |= ((/* implicit */unsigned short) arr_6 [i_3 + 1] [i_3 + 1] [(signed char)8]);
                        }
                        for (long long int i_10 = 1; i_10 < 7; i_10 += 1) 
                        {
                            arr_44 [4ULL] [i_8] [i_8] [i_7] [i_3] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [i_3] [i_7] [i_8])) : (((/* implicit */int) var_4))));
                            arr_45 [i_0] [i_3 - 1] [(_Bool)1] [(_Bool)1] [0U] = ((/* implicit */short) var_5);
                            arr_46 [i_0] [(signed char)4] [i_0] [9LL] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) 14883822859703837455ULL))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_11 = 2; i_11 < 7; i_11 += 3) 
            {
                for (unsigned char i_12 = 2; i_12 < 8; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
                    {
                        {
                            arr_53 [(short)2] [i_12 - 1] [(short)2] [(short)2] [i_0] [(signed char)8] |= ((/* implicit */signed char) arr_15 [i_3 - 1] [(_Bool)1] [i_12] [i_13 + 1]);
                            arr_54 [i_0] [i_0] [(unsigned short)6] [i_0] [i_12] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_43 [i_0] [i_3] [i_0] [i_12 - 2] [i_13])) : (((/* implicit */int) (signed char)127))));
                            arr_55 [i_13 + 1] [i_3] [i_11] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_13] [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)57)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_11])))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_59 [i_14] = ((/* implicit */short) var_7);
        arr_60 [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_51 [i_14] [(signed char)8] [i_14] [i_14] [(signed char)0])))));
        arr_61 [(signed char)7] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), ((~((-(((/* implicit */int) arr_20 [i_14] [i_14] [i_14]))))))));
        arr_62 [i_14] = ((/* implicit */long long int) var_10);
    }
    for (short i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        arr_65 [i_15] |= ((/* implicit */short) arr_64 [i_15]);
        arr_66 [i_15] = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_63 [i_15]))))) < (7393731811493547459ULL));
        /* LoopSeq 1 */
        for (unsigned short i_16 = 4; i_16 < 22; i_16 += 3) 
        {
            arr_71 [i_15] [(short)19] [i_15] &= ((/* implicit */signed char) min(((-(((/* implicit */int) arr_69 [i_16 + 1] [i_16 + 1] [i_16 - 4])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_16] [i_16] [i_16 - 3])))))));
            arr_72 [(unsigned short)6] [i_16 - 2] [1ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_67 [i_15]) > (11053012262216004157ULL))))) : ((((_Bool)0) ? (arr_67 [i_15]) : (arr_67 [i_15]))))) - ((((-(1ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_63 [i_16 - 4])))))))));
        }
    }
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))), (7752721921646984223ULL)));
}
