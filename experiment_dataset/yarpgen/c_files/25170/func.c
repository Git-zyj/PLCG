/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25170
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
                {
                    var_17 = ((min((arr_0 [i_0]), (((/* implicit */long long int) arr_4 [16U] [i_1] [i_2])))) * (((/* implicit */long long int) arr_1 [i_0] [17ULL])));
                    var_18 *= arr_3 [i_2] [i_1] [i_0];
                }
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_14 [i_0] = arr_8 [i_1] [i_1] [i_0];
                        var_19 = ((/* implicit */unsigned char) arr_1 [i_0] [(signed char)10]);
                        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                    }
                    arr_16 [i_0] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [15] [i_3] [i_3] [i_3])) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0]))) / (min((((/* implicit */unsigned long long int) var_7)), (var_4)))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)21435)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [8] [2ULL] [8] [4ULL]))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_6] [(unsigned char)1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_0 [(unsigned short)12])))))) == (7719903281681314950ULL))))));
                                var_21 = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
                            }
                        } 
                    } 
                    arr_24 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [17ULL] [(unsigned char)10] [i_3])) : (((/* implicit */int) arr_2 [i_0])))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                {
                    arr_27 [i_0] [i_0] [(signed char)8] [11U] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) arr_26 [i_0] [i_1] [i_7] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_7] [i_0]);
                                arr_33 [i_0] [i_1] [i_0] [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    arr_37 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))), (((/* implicit */unsigned int) ((20U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10] [(_Bool)1] [(_Bool)1]))))))));
                    arr_38 [(unsigned char)8] [i_0] [i_1] [i_10] = ((/* implicit */unsigned int) ((short) ((((((/* implicit */int) (unsigned char)231)) == (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10] [2U] [11LL] [i_1] [i_1] [i_0]))) : (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_15))))));
                    var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_14))))), (arr_13 [i_0] [i_1] [i_10] [i_10] [(unsigned char)5]))))));
                    var_23 |= arr_11 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_10] [i_10];
                    var_24 = ((unsigned char) var_4);
                }
                arr_39 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) max((arr_5 [i_0] [i_0] [i_0] [(unsigned char)3]), (arr_5 [(_Bool)1] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((unsigned long long int) var_8));
}
