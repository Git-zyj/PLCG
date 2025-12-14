/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48513
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)30538))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-25902)) : (((/* implicit */int) (signed char)115))))));
    var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((~(var_16))))))));
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (short)-18115))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((var_4), (((/* implicit */int) (signed char)-116)))))) ? (((((/* implicit */_Bool) (short)24531)) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 - 1]))) : (min((arr_1 [i_0] [i_0 + 1]), (((/* implicit */long long int) (short)16384))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min(((short)-30528), (max((arr_7 [i_0 + 2] [i_0]), (arr_7 [i_0 + 2] [(signed char)8])))));
                arr_10 [i_0] [i_0] [i_1 + 3] [i_2] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]);
            }
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 1343014111))))));
                var_22 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65521))))) != (((/* implicit */int) min((arr_11 [i_0 + 2]), (((/* implicit */unsigned short) arr_7 [i_0 + 2] [i_0 + 1])))))));
                var_23 = ((/* implicit */int) (+(min((((/* implicit */long long int) var_9)), (arr_8 [i_0 - 2] [i_1] [i_1 + 2])))));
                arr_13 [i_1 + 2] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))));
            }
            for (int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                arr_16 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)20912))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_18 [i_1 + 4] [i_1 + 3])) : (((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 1]))));
                    arr_21 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 4] [i_4]))));
                    arr_22 [i_4] [i_1] [i_1] [(unsigned short)2] [i_1] [i_1] = ((/* implicit */_Bool) (~(arr_15 [i_0] [i_1 + 4] [i_4])));
                    var_25 = ((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_14 [i_0] [i_1 + 3] [i_4] [i_5])))));
                }
                /* vectorizable */
                for (short i_6 = 3; i_6 < 11; i_6 += 3) 
                {
                    var_26 = ((arr_1 [i_1 - 1] [i_0 + 1]) ^ (arr_1 [i_1 - 1] [i_0 + 1]));
                    /* LoopSeq 2 */
                    for (int i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        var_27 = (~(((((/* implicit */_Bool) arr_11 [i_6])) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_7 - 1]))));
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 1] [i_1 + 1] [i_1 + 1]))));
                    }
                    for (int i_8 = 2; i_8 < 10; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((int) ((((/* implicit */int) arr_26 [i_0] [i_4] [i_0])) / (arr_15 [(unsigned short)11] [i_4] [i_6]))))));
                        var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) arr_19 [i_0 - 1])) : (((/* implicit */int) (short)-32765))));
                        var_31 = ((/* implicit */int) (signed char)127);
                    }
                }
                for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    arr_33 [i_9] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-103))))), (((((/* implicit */_Bool) arr_25 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30502))) : (min((4294967295U), (((/* implicit */unsigned int) arr_11 [i_0]))))))));
                    var_32 = ((/* implicit */unsigned short) ((signed char) ((long long int) arr_6 [i_0])));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_14 [i_1 + 4] [i_1] [i_1] [(unsigned short)4]))));
                    var_34 -= ((/* implicit */short) (+(arr_1 [i_0 - 2] [i_1 + 2])));
                    var_35 += ((/* implicit */_Bool) -3LL);
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        var_36 &= -1;
                        arr_39 [i_0] [i_0] [i_0] [i_0 + 2] [i_4] = ((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 + 2]);
                    }
                    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) ((unsigned short) arr_8 [i_1 - 1] [i_4] [i_10]));
                        arr_42 [i_10] &= ((/* implicit */short) (-(((/* implicit */int) arr_31 [i_0 + 2] [i_1 - 1] [i_12]))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                    {
                        arr_46 [i_0] [(unsigned short)1] [i_4] [i_4] = ((/* implicit */unsigned short) ((-1697820306) / (((/* implicit */int) arr_4 [i_1 + 2] [2LL]))));
                        arr_47 [i_0] [i_1] [i_1] [(unsigned short)4] [i_4] [i_13] = ((/* implicit */unsigned short) ((signed char) arr_36 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_4] [i_0 + 1]));
                    }
                    for (int i_14 = 2; i_14 < 11; i_14 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((unsigned short) arr_2 [i_0]))));
                        var_39 = ((((/* implicit */_Bool) (+(var_16)))) ? (((/* implicit */int) arr_14 [i_4] [5LL] [i_4] [i_4])) : (((/* implicit */int) (signed char)-103)));
                    }
                }
                var_40 = ((/* implicit */unsigned int) max((var_40), (arr_41 [i_0] [i_0] [i_0 - 2] [(unsigned char)6])));
            }
            var_41 ^= ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) max(((unsigned short)14848), (((/* implicit */unsigned short) (signed char)127))))), (((unsigned int) (_Bool)1))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        arr_54 [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned short) (signed char)121));
        arr_55 [i_15] = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_52 [(signed char)12])));
    }
    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        arr_59 [i_16] [(unsigned short)15] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_58 [i_16])))) != (((/* implicit */int) ((unsigned short) ((int) arr_53 [i_16] [i_16]))))));
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) arr_58 [i_16]))));
        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_53 [i_16] [i_16])))))))));
        arr_60 [i_16] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)231))));
    }
    var_44 ^= ((/* implicit */short) ((max((((/* implicit */unsigned int) var_15)), (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (short)8148))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
