/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242066
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 -= ((/* implicit */_Bool) (unsigned short)65535);
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (arr_8 [4U] [4U])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15685677065036081283ULL)) && (((/* implicit */_Bool) (~(15685677065036081283ULL))))));
                            arr_12 [i_0] [i_3] [i_2] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1926355275)), (-1LL)))) ? (-3961906452889413509LL) : (((/* implicit */long long int) ((724917056U) % (((/* implicit */unsigned int) arr_7 [i_4 + 1] [i_1] [i_2] [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) var_12);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(-2147483646)));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_2 [i_0]))));
                            arr_16 [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) 3570050240U);
                        }
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_6] = arr_9 [i_1] [i_1] [i_2] [i_6] [i_0];
                        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_8))));
                            arr_22 [i_0] [i_6] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (signed char)-103)))));
                            var_22 = var_13;
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            arr_25 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((-6640511257675072316LL) <= (((/* implicit */long long int) -2147483646))));
                            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))));
                            var_24 ^= ((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] [i_2])) || (((/* implicit */_Bool) (unsigned char)252))))))), (max((arr_5 [i_6] [(unsigned char)9] [i_1]), (arr_5 [i_0] [i_0] [i_0])))));
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((-7064442626014702654LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) >= ((-(min((0LL), (((/* implicit */long long int) (signed char)31))))))));
                        }
                        for (short i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */int) min((var_26), (arr_7 [i_0] [i_1] [i_2] [i_6])));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (2761067008673470333ULL) : (((/* implicit */unsigned long long int) 635902862U))))) ? (((/* implicit */long long int) -1926355275)) : (((((/* implicit */_Bool) 8527516700128521293ULL)) ? (-1572229162129772757LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9] [i_0] [i_9] [i_9] [i_9 - 1])))))));
                            var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)19423)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_0] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_18 [i_1] [i_2] [i_6] [i_0])) : (arr_6 [i_9 - 1] [i_6] [i_2])))))))));
                            arr_29 [i_0] [i_1] [i_0] [i_6] [i_9 + 2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) min((arr_11 [i_0] [i_6] [i_2] [i_6] [i_9] [i_2] [i_6]), (arr_11 [(unsigned short)0] [i_0] [i_1] [i_2] [(_Bool)1] [i_9] [i_9]))))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            arr_32 [i_0] [i_0] [(_Bool)0] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (4461281929149844992ULL)));
                            var_29 = ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned short)17)));
                        }
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0])), (var_3)))))) || (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) || (((/* implicit */_Bool) var_5)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((var_2) <= (((/* implicit */unsigned long long int) -1LL)))) ? (var_2) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (8527516700128521313ULL)))));
                        var_32 = ((/* implicit */unsigned int) (~(arr_35 [i_0] [i_0] [i_1] [i_0])));
                        var_33 = ((((/* implicit */int) var_7)) >= (arr_18 [i_0] [i_0] [i_0] [i_0]));
                        var_34 = arr_33 [i_11] [i_2] [i_1] [i_1] [(_Bool)1] [i_0];
                        arr_36 [(_Bool)1] [i_2] [i_2] [i_2] [(unsigned char)10] [(_Bool)1] |= ((/* implicit */short) arr_9 [i_11] [(_Bool)1] [i_2] [i_1] [i_0]);
                    }
                    arr_37 [i_0] [i_0] [(unsigned char)2] |= ((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [9LL] [i_2] [i_2]);
                    var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_4))))) <= ((-((+(25LL)))))));
                    arr_38 [i_0] = ((/* implicit */short) var_7);
                }
                for (unsigned int i_12 = 3; i_12 < 11; i_12 += 4) 
                {
                    arr_42 [i_0] [i_0] [4LL] = ((/* implicit */unsigned long long int) (~(arr_33 [i_0] [i_1] [i_12 - 2] [9U] [i_0] [4LL])));
                    var_36 = ((/* implicit */_Bool) var_9);
                    arr_43 [i_0] [(signed char)1] [i_12 - 3] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                }
                arr_44 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_11 [i_0] [i_1] [i_0] [i_0] [3LL] [i_0] [i_1]), (((/* implicit */unsigned char) var_8))))) - (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)77)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_13 = 1; i_13 < 10; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
        {
            for (unsigned char i_15 = 1; i_15 < 11; i_15 += 3) 
            {
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    {
                        arr_57 [i_13] = ((/* implicit */short) (-(((/* implicit */int) arr_53 [i_13 + 1] [i_13 - 1] [i_13 + 1] [8] [i_13 + 2] [i_13 + 2]))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_13 + 2])) + (((/* implicit */int) arr_0 [i_15 + 1])))))));
                    }
                } 
            } 
        } 
        arr_58 [i_13] = ((/* implicit */int) arr_39 [(_Bool)1] [2LL] [i_13]);
        var_38 = ((((/* implicit */int) arr_9 [i_13] [i_13] [i_13] [i_13] [i_13 - 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) 14922912247511257580ULL))))));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_39 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1257605631966954749ULL)));
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((((/* implicit */_Bool) -1LL)) ? (-5226938684599511242LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) var_5))));
        /* LoopNest 3 */
        for (signed char i_18 = 0; i_18 < 12; i_18 += 3) 
        {
            for (int i_19 = 0; i_19 < 12; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    {
                        arr_67 [i_19] [i_18] [i_17] = ((/* implicit */_Bool) var_9);
                        arr_68 [i_17] [1LL] |= ((/* implicit */unsigned char) arr_52 [i_17]);
                        var_41 = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_17] [i_17] [i_17] [i_17])) ? (arr_10 [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */int) (_Bool)1))));
    }
    var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) min((((/* implicit */int) (short)-22117)), (((((/* implicit */_Bool) 15162653945717133558ULL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)29704)))))))));
}
