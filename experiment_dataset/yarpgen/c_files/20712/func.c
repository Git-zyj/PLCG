/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20712
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
    var_12 = ((/* implicit */unsigned short) ((short) var_9));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((var_2), (var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) var_10);
        var_15 = ((/* implicit */long long int) var_3);
    }
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((arr_4 [i_1] [i_1]), (var_10)))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_8))))))));
        arr_5 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */short) var_1)), (arr_4 [i_1] [i_1])));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((int) var_10));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    arr_16 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((int) var_7));
                        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                        arr_20 [i_5] [i_5] = ((/* implicit */int) ((short) var_1));
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */long long int) ((unsigned char) arr_17 [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4 + 2]));
                        var_21 = ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_4 - 1]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) var_9);
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_5))));
                        var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4 + 2]))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((arr_11 [i_3] [i_2 + 1]) ^ (arr_11 [i_2] [i_2])));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) ((((int) var_1)) * (((/* implicit */int) var_5))));
        arr_25 [i_2] = (-(var_4));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2067905905)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) arr_18 [i_2 - 3] [i_2 - 3] [i_9] [i_8] [i_8]))))))));
                    var_28 = ((/* implicit */signed char) (-(-964703394)));
                    var_29 += ((/* implicit */int) arr_27 [i_8] [i_9]);
                    arr_32 [i_2] [i_2] [i_8] [i_2] = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 3) 
    {
        var_30 = ((/* implicit */unsigned char) var_10);
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) var_11);
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_38 [i_11]), (((/* implicit */unsigned long long int) var_9))))) ? (max((var_4), (arr_36 [i_10] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (((/* implicit */long long int) var_11))));
                        var_33 = ((/* implicit */short) max((var_2), (((/* implicit */unsigned int) min((var_5), (((/* implicit */short) var_1)))))));
                        var_34 = ((/* implicit */unsigned long long int) max(((~(arr_39 [i_10 + 2] [i_10 + 1] [i_10 + 2]))), (var_2)));
                        var_35 = ((/* implicit */unsigned char) arr_33 [i_10]);
                        var_36 = ((/* implicit */unsigned char) (~((~(2542276097U)))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */signed char) min((((/* implicit */short) var_6)), (var_10)));
                        arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 66846720U)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_41 [i_10] [i_10] [i_10] [i_10]))))) ? (((((/* implicit */unsigned long long int) arr_41 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 - 1])) % (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (1752691199U))))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_35 [i_10 + 2] [i_10 + 2]), (arr_35 [i_10 - 1] [i_10 + 2])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_10] [i_10 + 2] [i_10 + 2] [i_10]))) : (var_7))) : (((/* implicit */long long int) ((int) ((arr_39 [i_10 + 2] [i_14] [i_14]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        var_39 = ((/* implicit */short) (+((+(((((/* implicit */_Bool) arr_44 [i_10] [i_10] [i_10] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (1752691223U)))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_49 [i_10] [i_10] [i_10]), (arr_39 [i_10 + 2] [i_10 + 1] [i_10 + 2])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_9)))))))), (arr_43 [i_10 - 1] [i_10 - 1] [i_12] [i_12] [i_10 - 1])));
                        arr_51 [i_10] [i_10 - 1] [i_10 - 1] [i_10] = ((/* implicit */unsigned short) ((short) min((var_3), (((/* implicit */unsigned long long int) arr_39 [i_10 - 1] [i_10 + 2] [i_10 + 2])))));
                        /* LoopSeq 1 */
                        for (short i_16 = 3; i_16 < 20; i_16 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) var_3)));
                            var_42 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_50 [i_10] [i_10 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : ((-(arr_44 [i_10] [i_10] [i_10] [i_10]))))), (((long long int) ((short) var_11)))));
                            var_43 = ((/* implicit */short) 1752691219U);
                            var_44 = ((/* implicit */int) max((min((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (811849487U))))), (((/* implicit */unsigned int) var_1))));
                            var_45 += ((/* implicit */short) max((min((((/* implicit */long long int) arr_34 [(unsigned char)14])), (var_4))), (((/* implicit */long long int) max((arr_34 [14U]), (arr_34 [2ULL]))))));
                        }
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned long long int) -1);
                        var_47 *= ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) var_9)), (arr_38 [i_10 + 2])))));
                        arr_57 [i_10] [i_10] [i_12] = ((/* implicit */long long int) max((((/* implicit */unsigned int) -2067905901)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_2)))) ? (arr_49 [i_10] [i_12] [i_17]) : (((/* implicit */unsigned int) ((22608257) ^ (((/* implicit */int) var_5)))))))));
                        var_48 = ((/* implicit */signed char) var_3);
                        arr_58 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_11] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10])) ? (((/* implicit */int) var_9)) : (arr_46 [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((long long int) 3998870906840081766ULL))))) : (((((/* implicit */_Bool) var_8)) ? (((long long int) var_8)) : (((/* implicit */long long int) var_8))))));
                    }
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (max((var_7), (((/* implicit */long long int) var_11))))));
    }
    var_50 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (16)))) ? (((/* implicit */int) var_6)) : ((~((~(((/* implicit */int) (short)29418)))))));
}
