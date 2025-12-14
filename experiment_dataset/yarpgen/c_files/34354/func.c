/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34354
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_8)))))))))));
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (var_3)))) ? (var_9) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)40263))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -562154714))))) ? (((((/* implicit */_Bool) (short)-30868)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((signed char) var_0)))))) ? (max((((/* implicit */unsigned long long int) max(((unsigned short)25273), (((/* implicit */unsigned short) (_Bool)1))))), (min((arr_0 [10]), (arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_3 [i_1])))), ((-(((/* implicit */int) arr_3 [i_1])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned long long int) ((long long int) var_0));
                                arr_15 [i_1] [(short)6] [i_1] [i_3] [(unsigned char)5] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_13 [i_1]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2] [10LL] [i_2])) ? (((/* implicit */int) (short)8145)) : (((/* implicit */int) var_6)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        arr_20 [i_6 - 1] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_5])) ? (((/* implicit */int) arr_9 [i_1])) : (((((/* implicit */int) arr_9 [i_1])) | (((/* implicit */int) (short)2044))))));
                        arr_21 [i_6] [8] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_1] [i_5] [i_1] [i_1] [i_0] [i_0]))) : (var_9)))));
                        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6 + 1] [i_5 + 2] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_13 [i_6]))));
                    }
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_13 [(unsigned char)14])) : (((/* implicit */int) arr_8 [i_5 - 3] [12LL] [12LL] [i_0 + 1]))));
                }
                /* LoopSeq 3 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    arr_25 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_22 [i_1] [i_1] [i_0 + 1] [i_7])), (min((var_4), (((/* implicit */long long int) (unsigned short)6384))))))), (((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_1]) ? (((/* implicit */int) (unsigned short)15260)) : (((/* implicit */int) arr_9 [i_1]))))) : (min((var_5), (((/* implicit */unsigned long long int) arr_8 [i_7] [i_1] [i_1] [i_0]))))))));
                    arr_26 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) arr_24 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))));
                }
                /* vectorizable */
                for (signed char i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    arr_29 [i_0 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2543768221030200097ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))) ? (var_1) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-14231)))))));
                    arr_30 [i_1] = (-(((/* implicit */int) ((_Bool) var_6))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) min(((unsigned char)135), (((/* implicit */unsigned char) arr_3 [i_1]))))), (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_9] [i_1] [i_1]))))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((unsigned char) min((8406041840110213464LL), (((/* implicit */long long int) (unsigned short)27275)))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [(unsigned short)6])) : (((/* implicit */int) arr_23 [i_1] [i_1] [i_0] [i_0])))))))));
                }
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_31 [i_1] [i_0] [i_1]))), (((/* implicit */unsigned long long int) arr_22 [i_0 + 1] [i_0] [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) + (((/* implicit */int) var_10)))), (((((/* implicit */int) (unsigned short)14342)) + (((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) var_6)), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) arr_6 [i_1] [i_0] [(unsigned short)2] [i_1])) : (((/* implicit */int) arr_24 [i_0 + 1] [i_0 + 1] [i_1] [i_1])))))))));
            }
        } 
    } 
}
