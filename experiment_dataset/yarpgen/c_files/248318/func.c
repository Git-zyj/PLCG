/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248318
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
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_4)));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((arr_1 [i_0 + 1]) ? (((int) ((unsigned short) arr_2 [i_1]))) : (((var_14) - (((/* implicit */int) arr_2 [i_0 + 2]))))));
            var_21 ^= ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1]))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0 - 2]))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [1U])) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) arr_9 [i_3] [5U] [i_2] [i_0]))))) > (max((((2991436389919502988ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_2 + 1] [2]))))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((var_4) * (((/* implicit */unsigned long long int) 3LL)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_0))))))) > (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))), (((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_3])) | (arr_10 [i_2 - 1] [3U] [i_3] [i_0 + 1]))) / (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_2 + 1] [i_2] [i_3])), ((unsigned char)175))))));
                    }
                    for (signed char i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) -1910329791)) ? (arr_12 [(unsigned char)7] [i_5 - 2] [i_2 + 1] [i_2 + 1] [(unsigned char)7]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) (short)992)) : (((int) (-(((/* implicit */int) var_5)))))));
                        var_26 |= ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_2 - 1] [3U] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))));
                    }
                    arr_17 [i_3] [i_2 - 1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (var_4)))) ? (arr_12 [i_0] [i_2] [i_0 - 2] [i_2 + 1] [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_19))))), (((/* implicit */long long int) max((((_Bool) arr_1 [i_0])), ((!((_Bool)1))))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_0] [i_2] [i_3] [i_3])), (arr_12 [i_3] [4] [i_3] [i_3] [i_0])))))), (((/* implicit */unsigned long long int) min((max((arr_12 [i_3] [i_3] [i_0] [(signed char)3] [i_0]), (((/* implicit */long long int) arr_10 [(unsigned char)7] [(unsigned char)7] [i_3] [i_2 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0] [i_2] [i_3] [i_3]) : (((/* implicit */int) var_1)))))))))))));
                    var_28 = ((unsigned int) ((((/* implicit */unsigned int) min((var_14), (((/* implicit */int) (unsigned short)21191))))) / (max((((/* implicit */unsigned int) var_11)), (var_7)))));
                }
            } 
        } 
        var_29 -= ((/* implicit */int) ((((_Bool) ((((/* implicit */int) (unsigned short)55930)) - (((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0 - 1] [i_0] [i_0 - 2])) : (((((/* implicit */_Bool) (unsigned char)177)) ? (16581224731237767196ULL) : (((/* implicit */unsigned long long int) 1145570532U)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */int) (unsigned short)23073)))) & (((/* implicit */int) arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 + 2] [3])))))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_30 = ((signed char) arr_19 [(unsigned short)17] [i_6]);
        var_31 = ((/* implicit */long long int) arr_19 [i_6] [i_6]);
        var_32 = max((((int) arr_18 [i_6])), (((/* implicit */int) ((_Bool) 4744007451738021717ULL))));
    }
    for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
    {
        var_33 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_14)))) ? (((arr_20 [i_7 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 + 3] [8LL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 631101750)) ? (((/* implicit */int) (short)8982)) : (((/* implicit */int) (unsigned short)44345))))))));
        arr_22 [i_7] [i_7] = ((/* implicit */unsigned int) min((arr_20 [i_7 + 3]), (arr_20 [i_7 + 1])));
    }
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            {
                arr_30 [i_9] [i_9] = ((/* implicit */int) var_3);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 21; i_10 += 1) 
                {
                    var_34 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)21191))))) : (var_18)));
                    var_35 *= ((arr_23 [i_8 - 1]) ? (((/* implicit */int) ((unsigned char) var_17))) : (((int) var_18)));
                }
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_9] [i_8 - 1] [i_9])) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) arr_21 [i_8 - 1] [(signed char)2]))), (min((((/* implicit */unsigned short) var_5)), (var_0)))))) : (((/* implicit */int) ((((var_9) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_29 [i_9] [i_9])))) != (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) arr_29 [i_8] [i_9]))))))))));
                var_37 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        for (int i_12 = 1; i_12 < 14; i_12 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 12; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        {
                            arr_47 [i_11] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) ((((arr_31 [i_13 + 2] [i_12 - 1] [i_11]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_11] [(signed char)13])) ? (((/* implicit */unsigned long long int) arr_18 [i_11])) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_11]))) : (var_7))))));
                            var_38 = ((/* implicit */unsigned int) min((arr_44 [i_14] [(_Bool)1] [15U] [i_11]), (((/* implicit */short) (unsigned char)252))));
                        }
                    } 
                } 
                var_39 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (min((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))));
                var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23073)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18457)) >> (((var_7) - (3236291426U)))))) : (max((var_2), (((/* implicit */unsigned long long int) (unsigned char)3)))))))));
                var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_45 [(short)2] [i_12] [i_12] [i_11] [i_12]))))))) - (8729049148610371834ULL)));
            }
        } 
    } 
    var_42 = ((/* implicit */long long int) var_6);
}
