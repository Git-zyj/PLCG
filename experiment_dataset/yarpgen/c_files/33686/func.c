/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33686
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34788)) ? (5772973172267548445ULL) : (5772973172267548423ULL)));
        arr_3 [i_0] [i_0] = ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (short)-1))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (var_6)));
    /* LoopNest 2 */
    for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
    {
        for (unsigned short i_2 = 4; i_2 < 20; i_2 += 3) 
        {
            {
                arr_8 [i_1 - 3] [i_1] [i_2] = ((/* implicit */signed char) arr_5 [i_2]);
                /* LoopSeq 4 */
                for (unsigned short i_3 = 3; i_3 < 19; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_3 + 2] [i_2] [i_2 - 4] [i_1] = ((/* implicit */unsigned short) ((arr_9 [i_3] [i_2] [i_2 + 2] [i_1 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_20 = arr_10 [i_3 + 2] [i_4];
                                var_21 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_4 [i_2 - 2])) ^ (((((/* implicit */_Bool) arr_14 [i_5 + 4] [i_4] [i_3] [i_2] [i_1] [i_1 - 3])) ? (3021746715U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4329757736095202883LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (var_13)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (var_15))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-99)), (var_3))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_2] [i_3 + 1] [i_3 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -17084447019982725LL)) ? (((/* implicit */int) (unsigned short)64887)) : (arr_14 [i_1 + 2] [i_2 - 3] [i_2] [i_2 - 1] [i_3] [i_3 + 1])))) ? (((/* implicit */int) arr_13 [i_3 + 3] [i_2 - 3] [i_1 + 1] [i_1])) : (((/* implicit */int) ((unsigned char) max((var_15), (((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_2] [i_2] [i_1 + 2] [i_1 + 2]))))))));
                    var_22 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)54808)) ? (var_18) : (((/* implicit */unsigned long long int) arr_17 [i_1 - 3] [i_2 + 1] [i_3 - 1] [i_2 - 1] [i_2] [i_3 + 2])))));
                }
                for (unsigned short i_6 = 3; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        for (int i_8 = 3; i_8 < 21; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_29 [i_1] [i_6 + 1] [i_7 + 1] [i_8 - 2]), (((/* implicit */long long int) (unsigned short)64424)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (var_15))))))) : (((/* implicit */int) var_6))));
                                arr_30 [i_8 - 3] [i_7] [i_6] [i_2 - 2] [i_1] = ((/* implicit */unsigned int) max((4213433116163903992ULL), (max(((~(var_18))), (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (5772973172267548445ULL)))))));
                                var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)114))));
                                var_25 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned short)65535))))) ? (arr_6 [i_6 - 2] [i_2 - 2]) : (arr_4 [i_8])));
                            }
                        } 
                    } 
                    arr_31 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (max((var_10), (((/* implicit */int) (signed char)-68)))) : (max((732144096), (var_8)))))) % (arr_9 [i_6 + 1] [i_2] [i_1 + 1] [i_1 + 1])));
                }
                for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 3) 
                {
                    var_26 -= ((/* implicit */unsigned long long int) var_12);
                    arr_34 [i_9 + 3] [i_2] [i_2 - 4] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-32612)), ((~(max((var_9), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_2] [i_9 + 2]))))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max(((-(max((arr_33 [i_9] [i_2] [i_1] [i_1 - 1]), (((/* implicit */unsigned long long int) (short)1221)))))), (max((max((((/* implicit */unsigned long long int) var_10)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_9] [i_2] [i_2 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1])) != ((-2147483647 - 1))))))))))));
                }
                for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    arr_38 [i_1 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((/* implicit */long long int) ((int) -2147483621))) : (min((((/* implicit */long long int) var_10)), (arr_20 [i_10] [i_2 + 2] [i_1 - 2])))));
                    var_28 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                }
                arr_39 [i_2 + 2] [i_2 - 2] [i_1 - 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (max((arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 4] [i_1 - 2]), (((/* implicit */unsigned long long int) var_1)))) : ((-(max((var_18), (((/* implicit */unsigned long long int) arr_29 [i_1 - 3] [i_2] [i_1 - 4] [i_2 - 4]))))))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) 0))))) ? (((/* implicit */long long int) 983586627)) : (((((/* implicit */_Bool) 3397011873209771461LL)) ? (((/* implicit */long long int) max((-1186256874), (((/* implicit */int) (short)-26957))))) : (((((/* implicit */_Bool) (unsigned short)4)) ? (var_13) : (((/* implicit */long long int) -383211972))))))));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) max((2146435072), (2147483647)));
                        var_31 = ((/* implicit */int) 1146215668U);
                        arr_46 [i_1] [i_2 + 1] [i_11] [i_12] = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1] [i_12] [i_11] [i_12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_1 + 1]))))) ? (((long long int) -8183568136410321472LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1 + 1] [i_2 - 3] [i_11] [i_12]))))))));
                    }
                    for (int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_1 - 3]) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_13] [i_13] [i_11] [i_2] [i_2] [i_1])))))) : (max((((/* implicit */unsigned long long int) var_3)), (var_15))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_44 [i_13] [i_13] [i_11] [i_1 - 1]))))))))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -8835566881415337134LL)) : (((unsigned long long int) arr_28 [i_1] [i_1] [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_2 + 2])))))));
                        arr_50 [i_1] [i_2 + 1] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)155)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_17 [i_2 - 4] [i_2] [i_11] [i_13] [i_11] [i_13])) : (4294967288LL)))));
                    }
                    arr_51 [i_11] [i_2] [i_11] = ((/* implicit */unsigned long long int) arr_20 [i_1] [i_2 - 3] [i_11]);
                }
                for (long long int i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    arr_54 [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_3))))) ? ((+(arr_36 [i_14] [i_2 - 2] [i_1] [i_1 - 3]))) : ((~(arr_36 [i_1 + 2] [i_2] [i_14] [i_2 - 1])))));
                    arr_55 [i_14] [i_14] = ((/* implicit */int) arr_45 [i_14] [i_14] [i_2] [i_2] [i_1 - 4] [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_34 -= ((/* implicit */unsigned int) var_10);
                        var_35 = ((/* implicit */unsigned char) var_0);
                    }
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned long long int) 1200517459781317504LL))))) ? (((((/* implicit */_Bool) var_11)) ? (15U) : (((/* implicit */unsigned int) var_14)))) : (max((((/* implicit */unsigned int) var_10)), (var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-1200517459781317504LL) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_1 + 2])))))) : (min((((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned short) var_7))))), ((+(var_15)))))));
                }
            }
        } 
    } 
}
