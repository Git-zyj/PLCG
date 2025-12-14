/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51621
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_13 = ((/* implicit */short) min((min(((~(9612551806839373459ULL))), (min((0ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)28810)), (-1))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */long long int) ((arr_4 [i_1] [i_1]) ^ (arr_4 [i_3] [i_1])));
                        arr_12 [5ULL] [(_Bool)1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_2])) > (arr_5 [i_0] [i_1] [i_3])));
                        var_15 = ((/* implicit */long long int) ((short) (-(var_0))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_16 *= ((/* implicit */unsigned short) min((((((/* implicit */long long int) 2147483647)) / (var_2))), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [10LL] [i_0] [4LL])) << (((var_2) + (2940685441719698272LL))))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_7)))))) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) var_9))))) ? (max((var_11), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_5])))) : ((~(var_0))))))));
                            var_18 = ((/* implicit */short) (-(((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (9223372036854775807LL))))))));
                            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_9)))));
                            var_20 = var_0;
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_21 [i_6] [i_4] [i_2] [i_1] [0LL] = ((/* implicit */long long int) (short)2916);
                            arr_22 [i_6] = ((/* implicit */unsigned short) 8834192266870178174ULL);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_4] [i_4] = 701169155077112534ULL;
                            arr_26 [i_4] [i_0] [i_2] = ((/* implicit */long long int) var_12);
                        }
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((unsigned short) ((unsigned short) arr_17 [i_0] [i_1] [i_2] [i_4]));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) ((var_10) < (arr_4 [i_0] [i_4])))), (-1184541664)))))));
                    }
                }
                for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    arr_30 [5ULL] [i_0] [i_0] = ((/* implicit */int) ((var_4) - (((/* implicit */long long int) ((int) (-(2672150130987568265LL)))))));
                    var_22 = ((/* implicit */short) (((+(((/* implicit */int) (short)-7092)))) > (((/* implicit */int) ((short) arr_23 [21LL] [i_1] [i_0] [i_8] [i_1])))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    arr_34 [i_0] &= ((/* implicit */short) min((((/* implicit */long long int) ((unsigned char) min((6778800967524744174ULL), (((/* implicit */unsigned long long int) (short)-1)))))), (((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    arr_35 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((1048575ULL), (((((/* implicit */_Bool) 13269771055983858373ULL)) ? ((+(11445217139777969711ULL))) : (min((13269771055983858363ULL), (((/* implicit */unsigned long long int) var_3))))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_39 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((-(1730635035U)))));
                    arr_40 [i_10] [i_10] [i_1] [(unsigned short)11] = ((/* implicit */int) arr_18 [i_1] [i_1] [i_10] [i_1]);
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) (-(7001526933931581905ULL)));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_11] [i_1] [9U] [i_0]))) & (var_11)));
                }
                for (signed char i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    arr_48 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (short)-2934)), (((int) 2))));
                    var_25 ^= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 4194304)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1)))));
                    arr_49 [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_1] [i_12]);
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    arr_54 [i_0] [13ULL] = ((/* implicit */short) var_0);
                    arr_55 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -356225469)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45290))) : (0ULL)));
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                arr_62 [i_14] [i_14] [3LL] [i_1] [23LL] &= ((((/* implicit */_Bool) (unsigned short)57727)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31744))) : (5779903962926144115ULL));
                                var_26 = ((/* implicit */unsigned long long int) 122128159818771577LL);
                                arr_63 [12LL] [12LL] [i_14] [(short)8] = ((((((/* implicit */_Bool) 7LL)) ? (((/* implicit */long long int) -1)) : (var_11))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))));
                                var_27 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_8)) ? (7001526933931581922ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_13] [i_14] [i_14]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */int) var_5);
                    /* LoopSeq 1 */
                    for (long long int i_16 = 2; i_16 < 23; i_16 += 2) 
                    {
                        arr_67 [i_0] = ((/* implicit */short) 4316067763227509713LL);
                        arr_68 [i_0] [i_1] [i_1] [i_16] = ((/* implicit */long long int) ((unsigned long long int) -356225464));
                        var_29 = ((/* implicit */long long int) (((~(14088766685477759895ULL))) % ((~(14867100918134319063ULL)))));
                        var_30 = ((/* implicit */short) (-(arr_43 [i_1] [i_1])));
                    }
                }
                arr_69 [i_0] = ((/* implicit */long long int) arr_66 [i_0] [8] [i_1]);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))));
}
