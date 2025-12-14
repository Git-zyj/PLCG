/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238569
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) var_8))))) % (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58352))) : (2823615572620728718LL))))) % ((-(2823615572620728718LL)))));
                    var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_2] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_0] [i_0])))), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */int) max((16777215U), (((/* implicit */unsigned int) (short)8191))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~((~(9072215524004852202LL))))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) var_10)))))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_4))));
                            var_19 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_3] [i_5 + 1] [i_5 + 1])) / (((((/* implicit */_Bool) arr_10 [i_0] [(short)9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)105)))))) % (((/* implicit */int) var_1))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 16777222U))));
                        }
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            arr_21 [i_5] [6U] [i_3] [i_5] [i_3] = ((/* implicit */signed char) min((2287315546U), (2907286700U)));
                            var_21 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) min((arr_5 [i_0] [i_5] [i_0] [i_7]), (((/* implicit */signed char) arr_15 [i_4] [i_4] [i_4] [i_4] [i_5]))))), (((((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2287315527U)))))));
                        }
                        for (signed char i_8 = 1; i_8 < 21; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) min((4294967288U), (((/* implicit */unsigned int) (unsigned char)196))));
                            arr_26 [i_0] [i_0] [i_0] [i_5] [(unsigned char)5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2007651768U)) ? (((/* implicit */long long int) 830428908U)) : (6291828097377508530LL)))) ? ((~(((/* implicit */int) arr_9 [(short)20] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < ((~(4278190080U))))))));
                            arr_27 [i_8] [i_0] [i_5] [i_3] [i_0] = min((((((/* implicit */_Bool) (unsigned short)5392)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) : (7864320U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-102)))) : (((/* implicit */int) (short)511))))));
                        }
                        arr_28 [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2287315546U)))) ? (((/* implicit */int) arr_0 [i_3] [i_5])) : ((-(((/* implicit */int) var_0))))))) ? (((/* implicit */int) arr_22 [i_0] [i_4] [i_5] [i_0] [i_4] [i_0])) : (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            arr_33 [i_0] [(_Bool)1] [i_4] [i_5] [(_Bool)1] = (-(((((/* implicit */_Bool) arr_23 [i_9 - 2] [i_5 - 1] [i_5] [i_5 + 1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_23 [i_9 + 1] [i_5 + 1] [i_0] [i_5 + 2] [i_0] [21U])) : (((/* implicit */int) arr_23 [i_9 - 1] [i_5 + 3] [(unsigned char)5] [i_5 + 3] [i_4] [i_3])))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)82)), (10601514743571914113ULL)))) ? (((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) arr_24 [i_5 + 2] [i_5] [i_5 + 1] [i_5] [i_9 - 2])) : (((/* implicit */int) arr_24 [i_5 + 1] [i_5] [i_5 + 2] [i_9] [i_9 - 2])))) : (((/* implicit */int) arr_15 [(_Bool)1] [i_3] [(unsigned short)12] [(_Bool)1] [i_0])))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)-119), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (8858249547280872370ULL))))))) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_0])) : (((/* implicit */int) var_11))));
                        }
                        var_25 ^= ((min((((/* implicit */unsigned int) max(((short)8097), (((/* implicit */short) (unsigned char)5))))), (min((3252526314U), (((/* implicit */unsigned int) arr_18 [i_3] [i_0] [i_3] [i_0] [i_0])))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4] [i_0]))));
                    }
                    arr_34 [i_4] [i_3] [14ULL] = arr_23 [i_3] [i_3] [i_3] [i_0] [i_3] [i_0];
                }
            } 
        } 
        var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (-84627621)))) - (((((/* implicit */_Bool) var_6)) ? (3464538407U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        arr_35 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-14755)) < (((/* implicit */int) (unsigned char)133)))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) <= (((((((/* implicit */int) (unsigned char)26)) != (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) (_Bool)1)) << (((200758698U) - (200758668U))))) : (((/* implicit */int) (unsigned char)63))))));
    }
    for (short i_10 = 1; i_10 < 16; i_10 += 3) 
    {
        arr_38 [i_10] [i_10] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_10 [i_10] [i_10])) : (var_12)))))) ? (((/* implicit */int) arr_22 [i_10 - 1] [i_10 - 1] [i_10] [i_10] [i_10] [i_10 - 1])) : (((/* implicit */int) arr_29 [5U] [(_Bool)1])));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 2; i_11 < 14; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        arr_46 [i_13] [i_10] [i_11] [i_10] [15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [i_11] [i_10] [i_12] [i_12] [13LL] [i_11 - 1]))));
                        var_27 *= ((/* implicit */short) min((((((/* implicit */_Bool) (short)-8097)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_10 - 1] [i_11] [i_11 + 2] [i_11] [i_11] [i_11])))), (((((/* implicit */int) (short)-1)) * (((/* implicit */int) (unsigned char)3))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_28 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_14 [i_11] [i_11 - 1] [i_14] [i_15])))) ? ((((((_Bool)0) ? (2406435772627960731ULL) : (((/* implicit */unsigned long long int) var_6)))) - (((((/* implicit */unsigned long long int) 0)) - (16040308301081590884ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)6), (max((((/* implicit */unsigned char) (signed char)-109)), (var_0)))))))));
                        var_29 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_8 [i_10 - 1] [(short)13] [i_10])))) | ((-(((/* implicit */int) arr_8 [i_10 - 1] [(signed char)20] [i_14]))))));
                        arr_54 [(signed char)15] [(signed char)15] [(signed char)15] [i_10] [i_15 - 1] [i_10] = ((/* implicit */unsigned short) max((max((((/* implicit */int) (unsigned char)64)), ((~(((/* implicit */int) arr_5 [i_10] [i_10] [i_14] [i_15])))))), (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_17 = 1; i_17 < 7; i_17 += 2) 
        {
            for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_66 [i_16] [i_17 - 1] [2U] = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) (signed char)-1)))) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned short)64235)) - (((/* implicit */int) var_7)))))), ((((_Bool)1) ? ((~(-1815891417))) : (((/* implicit */int) arr_36 [i_18] [i_18]))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) 34359738112ULL))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
        {
            for (unsigned int i_21 = 1; i_21 < 8; i_21 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 16040308301081590898ULL)) ? (((/* implicit */long long int) 534773760U)) : (-1339175323413264595LL)));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_42 [i_16] [i_16])))) ? (((/* implicit */int) arr_2 [(unsigned short)8] [i_20] [(unsigned short)8])) : (((/* implicit */int) (signed char)-25)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_22 = 1; i_22 < 9; i_22 += 1) /* same iter space */
                    {
                        arr_77 [i_16] [i_16] [i_22] = ((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)75))))) ? (arr_31 [i_16] [i_22] [i_21 + 2] [i_21 + 2] [(unsigned char)16] [15U]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (signed char)-35)))))))), (((/* implicit */unsigned int) (signed char)100))));
                        var_33 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1666481381U))))), (((/* implicit */unsigned int) arr_10 [i_16] [(unsigned char)7]))));
                    }
                    for (unsigned char i_23 = 1; i_23 < 9; i_23 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((18446744039349813530ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))), ((signed char)31)));
                        arr_81 [i_23] [i_23] [i_23 + 1] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_41 [i_20] [i_20] [i_20] [i_16])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_16] [i_23 + 1] [12U])) != (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 10)) ? (14188932294168646383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    }
                }
            } 
        } 
    }
    var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) - (min((min((((/* implicit */unsigned int) (signed char)43)), (1271793494U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)235)))))))));
    var_36 |= ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_24 = 2; i_24 < 11; i_24 += 1) 
    {
        for (int i_25 = 1; i_25 < 8; i_25 += 4) 
        {
            {
                var_37 = ((/* implicit */unsigned int) max((34359738086ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_11 [i_24] [i_24] [i_24])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535)))))))));
                var_38 &= ((/* implicit */short) (+(((((/* implicit */int) arr_50 [i_25] [i_25] [(unsigned short)13] [i_25 + 2] [i_25])) + (((((/* implicit */_Bool) arr_37 [i_24] [i_24])) ? (((/* implicit */int) arr_84 [(short)4] [2] [i_25])) : (((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_39 ^= ((/* implicit */unsigned short) (+(var_6)));
}
