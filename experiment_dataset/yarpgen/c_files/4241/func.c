/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4241
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
    var_20 = ((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)12972))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((0) <= (((/* implicit */int) var_14)))))) : (var_8))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_13)), (arr_2 [i_0]))))))) - (((/* implicit */int) min(((signed char)76), (((/* implicit */signed char) ((265400732421165876LL) != (((/* implicit */long long int) 1566463659U))))))))));
            var_23 = ((/* implicit */unsigned int) ((min(((-(((/* implicit */int) (unsigned char)211)))), ((+(((/* implicit */int) (_Bool)1)))))) | ((-(((/* implicit */int) arr_3 [i_0]))))));
        }
        for (int i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            arr_7 [i_2] [i_0] [i_0] = (~(((/* implicit */int) (unsigned char)181)));
            var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)29)), (((arr_3 [i_0]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)24559))))))));
        }
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) arr_0 [i_4] [14ULL]);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [2U] [0ULL]))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) -539984008)) : (0ULL)))));
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                var_27 = ((/* implicit */_Bool) ((arr_6 [i_5] [i_4] [i_3]) ? (((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_5] [i_4] [i_3])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_11 [(unsigned char)3] [i_4] [i_4]))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 0ULL))) ? (arr_2 [i_3]) : (((/* implicit */int) arr_4 [i_3] [i_3]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) ((arr_6 [i_7] [i_5] [i_3]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_6 [i_3] [i_5] [i_7]))));
                        arr_19 [i_3] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) 1485873426U);
                        var_30 = ((/* implicit */unsigned long long int) (!(arr_6 [i_7] [(_Bool)1] [i_3])));
                        var_31 = ((/* implicit */short) ((arr_6 [i_4] [i_4] [i_6]) || (((/* implicit */_Bool) arr_14 [i_7] [i_4] [i_3]))));
                    }
                    arr_20 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */int) arr_1 [i_5] [i_6]);
                }
                for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)137)) + ((~(((/* implicit */int) var_11))))));
                    var_33 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (var_12))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    arr_27 [(unsigned char)6] [i_4] [8U] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) arr_21 [i_4] [i_4] [i_5])) : (((/* implicit */int) arr_21 [i_3] [i_3] [i_3]))));
                    var_34 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_21 [i_3] [i_5] [i_9])) >= (((/* implicit */int) arr_21 [i_3] [i_3] [i_3])))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    arr_30 [i_10] [i_5] [10U] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)112))));
                    arr_31 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_6);
                    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1259301631732291703ULL)) ? (arr_28 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_17))))));
                    arr_32 [i_3] [(unsigned short)3] [i_3] [2ULL] = ((/* implicit */unsigned long long int) var_17);
                }
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                {
                    var_36 -= ((/* implicit */unsigned long long int) arr_9 [i_11]);
                    var_37 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3] [i_4] [i_3]))));
                    var_38 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [(signed char)4] [i_3]))) - (arr_13 [i_3]))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                {
                    var_39 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3] [i_12])) ? (((/* implicit */int) arr_4 [8U] [i_4])) : (((/* implicit */int) arr_4 [i_12] [i_5]))));
                    var_40 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_4]))) ? ((~(var_4))) : ((~(var_19)))));
                }
            }
            for (int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_40 [i_14 - 1] [i_14] [i_4] [i_3] [i_14] [0LL]))));
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((/* implicit */int) (_Bool)1))))) ? (arr_29 [i_15] [i_15] [1] [i_14 - 1] [(unsigned char)1] [i_14 - 1]) : (((((/* implicit */_Bool) var_5)) ? (17187442441977259894ULL) : (((/* implicit */unsigned long long int) arr_28 [12LL]))))));
                        }
                    } 
                } 
                arr_45 [(_Bool)1] [i_4] [i_4] = arr_39 [i_13] [i_4] [i_13] [i_4];
            }
            var_43 = ((/* implicit */short) arr_42 [i_3]);
            /* LoopNest 3 */
            for (unsigned char i_16 = 3; i_16 < 12; i_16 += 1) 
            {
                for (unsigned char i_17 = 4; i_17 < 10; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_17] [i_17 + 3] [i_17 + 3] [i_17 + 4] [i_18] [i_17])) >= (((((/* implicit */_Bool) arr_12 [13] [3] [i_16 + 1])) ? (((/* implicit */int) arr_12 [i_3] [i_3] [(short)6])) : (arr_2 [(signed char)5])))));
                            arr_55 [i_18] [i_18] [i_18] [i_16] [i_18] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_18] [i_18] [i_18]))))) - (((((/* implicit */_Bool) (short)24549)) ? (arr_10 [(signed char)4] [i_17]) : (var_6)))));
                            arr_56 [i_3] [i_4] [i_18] [(signed char)3] [i_17 + 2] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [11] [i_17 + 1] [i_17 + 2] [i_16 - 2]))));
                        }
                    } 
                } 
            } 
        }
        var_45 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_52 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) <= (((/* implicit */int) (_Bool)1))))), (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (var_6))))));
    }
}
