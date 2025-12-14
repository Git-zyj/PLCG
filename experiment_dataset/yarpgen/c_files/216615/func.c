/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216615
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
    var_10 = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)3)), (-685119834836513302LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0 - 1] [i_0] [i_2 + 2] = ((/* implicit */unsigned short) max((((signed char) arr_4 [i_2 + 1])), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32761)) && (((/* implicit */_Bool) (unsigned char)16)))))) <= (((((/* implicit */_Bool) (short)17397)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (var_0))))))));
                    var_11 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (+(16383)))) : ((~(var_2))))), (((/* implicit */long long int) max((arr_6 [(_Bool)1]), (arr_6 [4]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] = ((/* implicit */short) ((((((_Bool) arr_5 [i_0 + 1] [i_2 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 3] [i_1 - 2] [i_2 - 1] [i_3] [i_4 + 3]))) : ((-(var_2))))) / (max((arr_4 [i_0 + 1]), (((/* implicit */long long int) (short)3346))))));
                                arr_15 [i_0 + 1] [i_1 - 4] [i_2 - 1] [i_0] [i_2 + 3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)128))))))), (min((max((6567965815712005854LL), (3688386243923248058LL))), (((/* implicit */long long int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_0 - 1] [i_2 + 2] [i_3])))))))));
                                arr_16 [i_0 + 1] [i_1 - 3] [i_0] [i_1 - 4] [i_4 + 2] = ((/* implicit */unsigned char) (+(((((1011858745) >= (((/* implicit */int) (_Bool)0)))) ? (arr_9 [i_0 - 1] [i_0] [i_3]) : (((((/* implicit */_Bool) var_5)) ? (arr_9 [i_1 - 2] [i_0] [i_4 - 1]) : (var_2)))))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-105365305236431700LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_3 [i_5 + 3])) : (arr_18 [i_5 - 1] [(_Bool)1] [i_6 - 1]))), (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)16)), (arr_6 [(short)12])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1 - 2] [i_7] [14LL] [i_6 + 2] [i_1 - 1])))))))));
                                var_13 = var_3;
                                var_14 -= ((/* implicit */signed char) (+(min((((/* implicit */long long int) min((arr_0 [i_0 - 1] [8]), (((/* implicit */int) var_3))))), (arr_4 [i_0 - 1])))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_5 + 3] [i_1 - 3] = ((((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1 - 1] [i_5 - 1] [i_5 - 1] [i_0] [i_5 - 1])) & (((/* implicit */int) arr_21 [i_5 + 2] [i_0] [i_0] [i_0 + 1]))))) / (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_10 [i_0 + 1] [i_1 - 3] [i_1 - 2] [i_5 + 1]))))) & ((-(var_1))))));
                }
                for (short i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    var_15 = min(((~(((/* implicit */int) ((((/* implicit */_Bool) 595649300)) && (((/* implicit */_Bool) var_7))))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_29 [i_0 + 1] [i_0] [i_1 - 2] [i_8 - 1] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-685119834836513302LL))) >> (((((/* implicit */int) (unsigned char)217)) - (159)))));
                        var_16 = min((((/* implicit */long long int) (~(((/* implicit */int) (short)-17417))))), (min((min((105365305236431700LL), (105365305236431723LL))), (max((105365305236431700LL), (((/* implicit */long long int) (unsigned short)37400)))))));
                        arr_30 [i_1 - 3] [i_1 - 2] [i_8 - 1] [i_0] [i_9] = ((/* implicit */_Bool) var_1);
                        arr_31 [i_0] = ((/* implicit */long long int) ((max(((~(arr_4 [i_0 - 1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_9] [i_0] [i_0] [i_0 + 1])) | (arr_13 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1])))))) > (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0 - 1])), (((((/* implicit */int) arr_20 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])) | (((/* implicit */int) var_4)))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        arr_34 [i_0 - 1] [i_0 - 1] [i_10] [i_0 + 1] [i_0 - 1] [i_0 - 1] &= (~(((((/* implicit */_Bool) -105365305236431700LL)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (unsigned char)37)))));
                        arr_35 [i_10] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) max((min((((/* implicit */long long int) arr_18 [i_0 + 1] [i_0] [i_10])), (var_2))), (((((/* implicit */_Bool) arr_3 [i_8 + 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))) : (((var_7) - (var_8)))))));
                    }
                    arr_36 [i_0 - 1] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)53)) & (((/* implicit */int) ((unsigned char) (unsigned char)188)))));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            {
                                arr_46 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_0] [i_11 + 1] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_41 [i_1 - 2] [i_1 + 1] [i_11 + 1] [i_0]), (arr_41 [i_1 - 3] [i_12] [i_1 - 4] [i_0])))) >> (((max((((/* implicit */long long int) (unsigned char)194)), (max((var_0), (var_1))))) - (8626384517379632456LL)))));
                                arr_47 [i_0] [i_12] [i_11 + 1] [i_1 - 3] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((1233406413), (((/* implicit */int) arr_45 [i_0 + 1] [i_1 - 4] [i_11 + 1] [i_0] [i_13] [i_13]))))), (min((((/* implicit */long long int) var_9)), (((long long int) (unsigned char)0))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) var_9);
                }
                arr_48 [i_0 - 1] [i_1 - 4] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_25 [i_0] [i_0 - 1] [i_0]), (arr_25 [i_1 - 4] [i_1 - 1] [i_0]))))) >= (min((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_0 + 1] [i_1 - 4] [i_0 - 1] [i_1 - 3]))) | (var_7))), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
                var_18 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0 + 1]))))), ((~(arr_0 [i_0 + 1] [i_0])))));
            }
        } 
    } 
}
