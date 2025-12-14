/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231000
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
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 7630900699645899219ULL)) && (((/* implicit */_Bool) (unsigned short)59963))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) < (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)32))))))))) < (4294967295ULL)));
    }
    var_18 -= ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_19 = min((((unsigned short) 1188650702)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744069414584320ULL))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) arr_8 [i_3] [i_4] [i_5])), ((+(137438953471ULL))))) - (137438953445ULL)))));
                            var_21 = ((((/* implicit */_Bool) ((short) arr_9 [i_1] [i_5] [i_3] [i_4]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 0ULL)))))))) : (arr_3 [i_3]));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) arr_10 [i_1] [4]);
        }
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((int) 13519658314316696240ULL));
                            arr_27 [i_9] [6] [i_9] [i_6] [i_9] = ((/* implicit */short) ((unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_25 [i_9] [i_9]))))));
                            var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), ((~(arr_9 [i_1] [i_1] [i_8] [i_9])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 10815843374063652397ULL))))) : (((/* implicit */int) (unsigned short)0))));
                        }
                    } 
                } 
                var_25 = var_9;
            }
            /* LoopSeq 3 */
            for (signed char i_10 = 3; i_10 < 11; i_10 += 4) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16056))) | (540431955284459520ULL))), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_10]))))) ? ((-(4294967295ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)35496)) << (((((-1492780596) + (1492780626))) - (16)))))), (((unsigned long long int) 18446744073709551615ULL))))));
                arr_32 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_26 [i_10] [3LL] [i_10] [i_10] [i_10 + 1] [i_10]))) ? ((-(1865409657U))) : (((/* implicit */unsigned int) ((arr_26 [i_10 - 3] [i_10] [3LL] [6U] [i_10 - 1] [i_10]) + (arr_26 [i_10] [i_10] [i_10] [i_10 + 1] [i_10 - 3] [i_10]))))));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    var_27 = ((/* implicit */int) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) 1604964461))));
                    arr_35 [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_10 - 2] [i_10 - 1] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_1] [i_10 - 2])) - (((/* implicit */int) var_0))))) : (arr_5 [i_10 - 3] [i_10 - 3]))))));
                }
                for (int i_12 = 2; i_12 < 11; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (((unsigned long long int) 4927085759392855375ULL)))) ? (max((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(unsigned short)7])) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(unsigned short)11] [i_6] [i_10] [i_10 - 3] [i_10 - 3] [i_12] [i_13]))))), (4927085759392855375ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) -1604964462))))))));
                        var_29 = ((/* implicit */int) (((!(((/* implicit */_Bool) -1)))) ? ((-(((((/* implicit */_Bool) arr_33 [i_12])) ? (arr_43 [i_1] [i_6] [i_12] [2ULL] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [3U] [i_10] [i_12]))))))) : (((/* implicit */unsigned long long int) -1414494409))));
                        arr_44 [i_1] [(unsigned short)0] [i_1] [i_10] [0LL] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_1)))))) == (((/* implicit */int) ((((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1] [i_6] [i_10] [i_12] [i_13])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)30040)))) <= (((/* implicit */int) arr_39 [i_1] [6LL] [i_1] [i_1])))))));
                        arr_45 [i_13] [(unsigned char)2] [i_10] [i_1] [i_10] [i_6] [i_1] = ((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) ((min((4927085759392855375ULL), (((/* implicit */unsigned long long int) (unsigned short)32767)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_13] [i_10 - 3] [i_1]))))))));
                    }
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(-145411867)))) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_13)))) : ((-(((/* implicit */int) arr_18 [i_12 - 2] [i_10 + 1] [8ULL])))))))));
                    var_31 = ((/* implicit */unsigned short) arr_34 [5ULL]);
                }
            }
            for (int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_3 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [5] [i_6] [i_6] [i_14])))))) ? (((long long int) 8727373545472LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_6] [i_14]))))) | (((/* implicit */long long int) max((max((arr_16 [i_1] [5] [i_14]), (((/* implicit */unsigned int) -1)))), (((/* implicit */unsigned int) (unsigned char)169)))))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [11ULL] [i_6] [i_6] [6U] [(unsigned char)10] [i_6])) ? (((/* implicit */int) arr_21 [6ULL] [i_1] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_21 [10ULL] [i_6] [i_14] [11ULL] [i_6] [i_14]))))) < (min((max((((/* implicit */unsigned long long int) (unsigned short)0)), (17906312118425092096ULL))), (((((/* implicit */_Bool) (signed char)-1)) ? (arr_5 [i_1] [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))))))));
                arr_48 [i_1] [(unsigned short)3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((1414494408), (((/* implicit */int) (unsigned char)238))))) < (((((((var_7) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (110))))) | (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_1] [i_6] [i_14])))))));
                arr_49 [i_1] [i_6] [i_14] [i_6] = min((((/* implicit */int) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) 3073321))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)15872)), (var_0))))))), (min((2006591240), (((/* implicit */int) (unsigned short)39914)))));
                var_34 ^= ((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_14] [(unsigned char)7] [i_14] [(unsigned char)7]);
            }
            for (int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1414494409)) ? (17138452729786257858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))))));
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    for (short i_17 = 2; i_17 < 11; i_17 += 3) 
                    {
                        {
                            arr_58 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (unsigned char)17))));
                            arr_59 [i_17 + 1] [i_16] [i_15] [i_16] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_16] [i_16] [i_16] [i_15] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6634808570830925483ULL)) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) (unsigned char)24))))) : (((((/* implicit */_Bool) var_1)) ? (((long long int) arr_57 [i_16] [i_16] [i_16] [i_16] [i_16])) : (((arr_52 [i_1] [9]) / (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_15] [i_16] [(unsigned char)10])))))))));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7393957477613508668LL)) && (((/* implicit */_Bool) arr_37 [i_6] [i_15] [i_15] [i_17 - 2] [i_17] [i_17])))))) <= (1574435337077063950LL)));
                        }
                    } 
                } 
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (max((arr_34 [i_1]), (arr_34 [i_1]))) : (((((/* implicit */int) arr_20 [i_1] [i_6])) ^ (((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)127)) - (105)))))))));
            }
            var_38 = ((/* implicit */unsigned char) arr_3 [i_6]);
        }
        var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) max((0ULL), (((/* implicit */unsigned long long int) var_4)))))) << (((((/* implicit */_Bool) arr_26 [11] [i_1] [i_1] [i_1] [(short)4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [(unsigned short)7] [i_1] [0ULL] [i_1]))) : (0ULL)))));
        arr_60 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8727373545472LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21939))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_12 [(unsigned char)5] [i_1] [(unsigned short)9] [i_1] [i_1]) : (((/* implicit */long long int) -1))))));
    }
}
