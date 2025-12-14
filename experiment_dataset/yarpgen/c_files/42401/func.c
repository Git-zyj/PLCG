/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42401
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((((/* implicit */int) var_11)) - (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) & (-1558006766)))));
        arr_5 [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (var_3) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
        var_14 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_1)) : ((((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)253)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)5))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((arr_8 [i_1]) ? (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])))) : (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) var_8))))));
                    arr_15 [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [14U])) & (arr_10 [i_3])))) & (((((/* implicit */unsigned long long int) arr_7 [i_1])) & (18446744073709551609ULL))))) : (((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) arr_1 [i_3])))))));
                    var_15 += min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [(_Bool)1])) * (((/* implicit */int) (unsigned char)233)))) * (((((/* implicit */int) (unsigned short)10589)) / (arr_6 [i_1])))))), ((+(((((/* implicit */unsigned long long int) arr_10 [i_2])) / (var_5))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_25 [i_1] [0U] [0U] [0U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4 - 2])) ? (((/* implicit */int) arr_2 [i_4 - 2])) : (((/* implicit */int) arr_19 [i_5 - 1] [i_4] [i_4 + 1] [i_4 + 1]))))) : (11U)));
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 16; i_7 += 1) 
                        {
                            arr_29 [i_1] [i_4 + 1] [i_1] = ((/* implicit */long long int) ((947801851U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (var_4) : ((~(((/* implicit */int) arr_2 [i_5])))))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1] [i_4 - 1] [i_4] [i_5 + 1] [i_5 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_13 [(unsigned char)2])) : ((((((~(((/* implicit */int) arr_2 [i_1])))) + (2147483647))) << (((((/* implicit */int) arr_1 [i_6])) - (93)))))));
                            var_17 = ((/* implicit */_Bool) (-(((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 2] [i_5 + 1] [i_7 + 1])))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            arr_34 [i_8] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)1028);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            arr_43 [i_1] [i_8] [i_1] [i_10] [14U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_38 [i_9])) : (((/* implicit */int) (unsigned short)10575))))) ? (((((/* implicit */_Bool) arr_38 [i_9])) ? (((/* implicit */int) (unsigned short)64482)) : (((/* implicit */int) arr_38 [i_1])))) : (((((/* implicit */int) arr_38 [i_1])) * (((/* implicit */int) arr_38 [i_8]))))));
                            arr_44 [i_1] [i_10] [10U] [i_1] = ((/* implicit */signed char) arr_18 [i_10]);
                        }
                    } 
                } 
            } 
            arr_45 [(unsigned short)0] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)222);
            var_18 *= ((/* implicit */unsigned short) var_1);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_19 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_12)))) ? (((((/* implicit */unsigned long long int) 4294967287U)) + (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1] [(signed char)6] [i_1] [i_1] [i_12] [i_12]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [(short)16]))) | (15192438093195424382ULL)))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)64506)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33451))) + (7453974225700725566ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [(_Bool)1])) : (((/* implicit */int) var_8))))) : ((+(arr_22 [i_1] [i_1] [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_17 [i_1] [i_12])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1]))) : (3005950160U))))))));
        }
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_8 [i_1]))))) ? (((/* implicit */int) arr_8 [i_1])) : (((arr_8 [i_1]) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) arr_8 [i_1]))))));
        arr_49 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1006)) * (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((arr_26 [i_1] [i_1]) / (arr_26 [i_1] [i_1])))) : (((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0))))) / (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) (unsigned char)167)))))) * (((((/* implicit */int) var_7)) & (((((/* implicit */int) (unsigned short)1031)) | (((/* implicit */int) var_8))))))));
    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-1635664244) : (((/* implicit */int) (unsigned char)111))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)))))) ? (var_10) : (((/* implicit */int) var_6)));
}
