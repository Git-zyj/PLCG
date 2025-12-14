/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27664
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
    var_17 -= ((/* implicit */long long int) var_15);
    var_18 ^= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) arr_2 [i_0 + 2])), (5398988600615088316LL)))));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (((+(arr_3 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_12)) >> (((((/* implicit */int) arr_0 [i_1])) - (161))))) != (((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */int) (unsigned char)0)))), (min((var_8), (((/* implicit */int) arr_9 [i_1] [i_1] [(signed char)9] [i_2])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (3243335459U) : (arr_1 [i_0])))))))));
                    var_21 -= ((/* implicit */unsigned char) arr_1 [15]);
                    var_22 = ((/* implicit */unsigned char) arr_2 [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_23 ^= ((/* implicit */long long int) min((var_8), (((/* implicit */int) arr_9 [i_0 + 2] [i_1] [(short)13] [i_3]))));
                        var_24 += max((((/* implicit */long long int) max((((unsigned int) arr_12 [i_0] [i_0 + 1])), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))), (max((var_6), (((/* implicit */long long int) (short)-13443)))));
                        var_25 = ((/* implicit */unsigned short) ((((unsigned int) ((_Bool) arr_11 [i_0] [i_1] [i_0] [i_3] [i_3]))) << (((((/* implicit */int) (unsigned char)168)) - (151)))));
                        var_26 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1]))))), ((+(var_16)))))) / (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [2U]))))) ? (arr_11 [(signed char)8] [i_0] [i_0] [(signed char)8] [(signed char)8]) : (((/* implicit */long long int) ((/* implicit */int) ((6620139141791402804ULL) >= (((/* implicit */unsigned long long int) arr_4 [i_0]))))))))));
                        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) > (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)48)), (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)4] [i_1] [i_2]))) : (arr_10 [i_0] [i_1] [i_3])))))));
                    }
                    arr_13 [i_1] = ((/* implicit */signed char) max((arr_11 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0 + 1] [i_2 - 1]), (((/* implicit */long long int) (((~(var_5))) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > (arr_3 [i_0]))))))))));
                }
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_28 += ((/* implicit */signed char) ((arr_11 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1]) << (((arr_11 [i_4] [i_4] [i_4] [i_4 - 1] [i_1]) - (2477885237601751024LL)))));
                    var_29 = ((((/* implicit */long long int) ((/* implicit */int) arr_9 [17] [17] [(signed char)1] [i_4 - 1]))) + (2417780356881802625LL));
                    arr_16 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-31240)) - (((/* implicit */int) (unsigned char)243))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_30 += ((/* implicit */long long int) max((((/* implicit */int) (signed char)(-127 - 1))), (((((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1])) * (((/* implicit */int) arr_14 [i_0 + 1] [i_1]))))));
                    var_31 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -1369959574)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) var_1)))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_0] [(short)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (4669667757815404547ULL))), (((((/* implicit */_Bool) 115429397419350354ULL)) ? (468328983927120193ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)11172)), (var_8)))) - ((-(arr_1 [i_0])))))) : ((-(((((/* implicit */_Bool) arr_15 [i_5] [i_1] [i_0 + 1])) ? (arr_8 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) var_1))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_1) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (136))))) * (((/* implicit */int) ((-1413397144) >= (((/* implicit */int) arr_15 [i_0] [i_1] [i_6])))))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_1]))) : (4526781286148011345LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_18 [i_1] [i_6])), (var_5)))) || (((/* implicit */_Bool) arr_18 [i_0 + 1] [i_1]))))))));
                        arr_26 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 7011626812223638488LL)) ? (((/* implicit */int) (short)-11321)) : (((/* implicit */int) (unsigned short)61557))));
                        var_33 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_17 [i_6] [i_7 - 1] [i_7 - 1] [i_7 + 1])) - (((/* implicit */int) arr_17 [i_6] [i_7 - 1] [i_7 + 1] [i_7 + 1])))), ((~(((/* implicit */int) min((arr_18 [i_0 - 1] [i_0 - 1]), ((signed char)-32))))))));
                        var_34 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) (short)28602)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24913))) ^ (max((((/* implicit */unsigned int) var_8)), (var_2)))))) : (var_6));
                        var_35 = ((/* implicit */short) var_13);
                    }
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_1] [i_1] [i_8]) * (((/* implicit */unsigned long long int) (~(var_1))))))) ? (((/* implicit */int) max(((short)421), (((/* implicit */short) (signed char)26))))) : (((/* implicit */int) var_3))));
                        var_37 -= ((/* implicit */int) max((1002501079U), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-88)) >= (((/* implicit */int) (signed char)101))))))))));
                        arr_30 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_29 [i_0] [i_0] [(_Bool)1] [i_6] [17ULL]);
                        var_38 -= ((/* implicit */signed char) var_11);
                        var_39 -= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_6])) : (var_15))) + (2147483647))) >> (((((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_0 + 1])))) + (13817)))));
                    }
                    var_40 = ((/* implicit */unsigned short) ((short) arr_21 [i_0] [i_0] [i_6] [i_1]));
                }
                /* LoopSeq 1 */
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) (signed char)-108);
                    arr_33 [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) + (var_14)))) + (16668724010527081650ULL)));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 2; i_10 < 16; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            arr_38 [i_0] [i_1] [i_9 + 1] [i_1] [i_10] = ((/* implicit */unsigned int) ((1031688160U) >= (((/* implicit */unsigned int) 16383))));
                            var_42 |= ((/* implicit */long long int) ((int) max((min((var_9), (var_16))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))));
                        }
                        var_43 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (1062999503U) : (2198039344U)));
                        var_44 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 1]))) * ((((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_9 + 3])))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)2)))))))));
                    }
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            var_45 = arr_4 [i_1];
                            arr_45 [i_0] [i_0] [i_0] [9U] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [(unsigned char)2] [i_1] [i_9 + 1] [i_1] [i_13] [i_13]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (var_16)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_46 = ((/* implicit */unsigned int) max((((var_9) <= (arr_4 [i_9 + 2]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-92)))))) > (((((/* implicit */unsigned long long int) var_0)) + (115429397419350354ULL)))))));
                            arr_46 [i_0] [(signed char)3] [i_9 + 2] [0LL] [i_13] = ((/* implicit */unsigned long long int) arr_27 [i_0] [i_1] [i_12] [i_13]);
                        }
                        var_47 ^= ((/* implicit */_Bool) ((long long int) arr_37 [i_0] [i_1] [i_9] [i_9 + 1] [i_9 - 1] [8U] [i_9]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 2) 
                        {
                            arr_49 [i_14] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) 3658869010U)))));
                            var_48 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((((/* implicit */int) arr_37 [i_0] [i_1] [i_9] [i_0] [i_0] [i_12] [i_12])) + (2147483647))) >> (((((/* implicit */int) (short)26266)) - (26263)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) > ((~(arr_11 [i_0 + 1] [14] [11U] [i_12] [i_14]))))))) : (((((/* implicit */_Bool) arr_14 [i_9 + 3] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_1] [i_9] [(signed char)10] [9ULL]))) : (5U)))));
                            var_49 ^= ((/* implicit */unsigned char) ((((unsigned int) arr_0 [i_1])) * (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_12] [i_1] [14ULL] [i_12])) : (((/* implicit */int) arr_17 [i_12] [i_12] [i_9 + 2] [i_12])))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)6)) : (var_8))))))));
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)245), (((/* implicit */unsigned char) arr_48 [i_14 + 2] [i_0] [i_9] [i_9 + 2] [i_14] [i_1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14 - 1] [i_14 - 1] [i_14] [i_9 + 3] [i_14] [i_14]))) * (3952920666U))) : (((2215486834U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14 - 1] [i_1] [i_9] [i_9 + 1] [i_9] [i_14 + 2])))))));
                        }
                        var_51 -= max((-225327661), (((/* implicit */int) (signed char)-1)));
                        var_52 = ((/* implicit */unsigned short) max((((arr_21 [i_1] [i_1] [i_0 + 2] [i_9 + 2]) | (((/* implicit */long long int) arr_1 [i_9 - 1])))), (((/* implicit */long long int) max((arr_1 [i_9 + 3]), (arr_1 [i_9 + 2]))))));
                    }
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 2) /* same iter space */
                    {
                        var_53 = ((/* implicit */int) max(((~(max((((/* implicit */long long int) var_3)), (arr_21 [(short)1] [i_1] [i_1] [i_1]))))), (((/* implicit */long long int) var_5))));
                        var_54 -= arr_29 [i_0 + 2] [i_0 + 1] [10LL] [i_9] [i_15];
                    }
                    var_55 ^= ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) arr_19 [i_0] [13LL] [i_0] [i_0])) ? (225327669) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (short)17853)) ? (((/* implicit */int) (short)-30841)) : (((/* implicit */int) (unsigned char)121))))))));
                }
            }
        } 
    } 
    var_56 += var_0;
}
