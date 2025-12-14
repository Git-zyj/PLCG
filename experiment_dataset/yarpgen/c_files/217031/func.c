/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217031
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max(((~(((/* implicit */int) (short)27773)))), (var_1))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */int) (short)-6283)), ((+(((/* implicit */int) (unsigned char)255))))))), (arr_7 [i_0] [i_1] [i_1] [i_3])));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_0])))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_1 - 1] [i_1] [i_1 - 1]), (((/* implicit */int) max(((short)2509), ((short)-2491))))))) ? ((+(var_5))) : (((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0])) >= ((+(var_8))))))));
                            var_16 = ((/* implicit */unsigned long long int) min((2157311679U), (((/* implicit */unsigned int) (short)3707))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] [i_2] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_6 [i_1 + 1] [i_0] [i_1] [i_2 - 1]))))));
                            var_17 = ((/* implicit */signed char) (short)2509);
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_1]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (3) : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 + 1] [i_0] [i_0]))) : (3406617782U))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)-2510)))))))));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)35);
                        }
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_0] [(unsigned char)0])))))))));
        var_19 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)105)))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            arr_26 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) arr_12 [i_7] [i_8] [i_7] [i_8] [i_8] [i_7])), (((9200070076636185902ULL) << (((((/* implicit */int) var_11)) - (142)))))))));
            arr_27 [i_7] [i_8] [i_8] |= ((/* implicit */unsigned long long int) arr_10 [i_7] [i_8] [i_7] [i_7] [i_8]);
        }
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_22 [i_7] [i_7]))))) : (((/* implicit */int) var_10))));
    }
    for (short i_9 = 3; i_9 < 10; i_9 += 1) 
    {
        arr_30 [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_9] [(_Bool)0]))));
        arr_31 [i_9] |= ((/* implicit */int) var_12);
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 2; i_11 < 18; i_11 += 4) 
        {
            arr_39 [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11 - 2] [i_11 - 1] [i_11 + 4])) ? (arr_36 [i_11 - 2] [i_11 - 1] [i_11 + 4]) : (arr_36 [i_11 - 2] [i_11 - 1] [i_11 + 4])))) ? (min(((+(arr_32 [i_11] [i_11]))), ((~(arr_36 [i_10] [i_10] [i_10]))))) : (max(((~(var_9))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))))));
            arr_40 [i_10] = ((/* implicit */long long int) ((((arr_32 [i_10] [i_11 - 1]) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_36 [i_10] [i_10] [i_11]))))) < (max((arr_36 [i_10] [i_11 + 3] [i_11]), (arr_36 [i_10] [i_11] [i_11])))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    {
                        arr_45 [i_13] [i_13] [i_10] [i_13] = ((/* implicit */_Bool) arr_44 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_11] [i_13]);
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_11] [i_11] [i_13])) > (((/* implicit */int) max((arr_35 [i_11] [i_10] [i_12]), (((/* implicit */unsigned short) arr_42 [i_12]))))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_44 [i_11] [i_11] [i_10] [i_10] [i_10]))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_32 [i_11] [i_11 + 2])) ? (arr_32 [i_11] [i_11 - 1]) : (arr_32 [i_11] [i_11 + 4]))))))));
        }
        for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
        {
            var_24 = ((/* implicit */long long int) (short)-2510);
            var_25 = ((/* implicit */unsigned char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_38 [i_10] [i_14]))), (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)7)))))));
        }
        /* LoopNest 2 */
        for (signed char i_15 = 2; i_15 < 21; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                {
                    var_26 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (-(arr_53 [i_15] [i_16])))) ? (((arr_52 [i_16] [i_16] [i_16]) >> (((arr_36 [i_10] [i_15] [i_16]) - (20636452055564507ULL))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)48)) - (((/* implicit */int) var_4)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        arr_56 [i_10] = ((/* implicit */unsigned char) (+(((arr_53 [i_15] [i_15 - 1]) >> (((arr_53 [i_15] [i_15 - 1]) - (1152610357U)))))));
                        arr_57 [i_10] [i_10] [i_10] [i_17] = ((((/* implicit */_Bool) (+(arr_38 [i_15 + 1] [i_15 - 1])))) ? ((+(arr_38 [i_15 - 1] [i_15 - 2]))) : (((((/* implicit */_Bool) var_0)) ? (arr_38 [i_15 + 1] [i_15 - 2]) : (arr_38 [i_15 - 1] [i_15 - 2]))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_15 - 2] [i_15 - 1] [i_15 + 1] [i_15 + 1])) && ((!(((/* implicit */_Bool) (short)-16464))))))))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                    {
                        arr_60 [i_10] [i_15] [i_16] [i_10] [i_16] [i_10] = ((/* implicit */unsigned short) ((signed char) arr_42 [i_10]));
                        var_28 = ((/* implicit */unsigned short) arr_43 [i_15] [i_15]);
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) var_7);
    var_30 = ((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) (unsigned char)204)))) - (((/* implicit */int) var_4))))));
}
