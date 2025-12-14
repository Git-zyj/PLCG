/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236617
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
    var_20 = (signed char)(-127 - 1);
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) > ((-(max((var_8), (((/* implicit */unsigned int) var_0))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~((-(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) var_9)))) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) || (((/* implicit */_Bool) arr_8 [i_1] [i_2]))))))));
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 35184371826688LL)) ? (arr_6 [i_1]) : (min((var_9), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned long long int) min((arr_6 [i_2]), (((/* implicit */unsigned int) var_16))))) : ((-(arr_7 [i_1]))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_11)) & (((/* implicit */int) arr_4 [i_3]))))))) ? (((/* implicit */long long int) var_13)) : (var_5))))));
                arr_14 [(signed char)8] [i_1] [i_1] = ((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2]);
                var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))))));
            }
            arr_15 [i_1] [i_2] = ((/* implicit */signed char) 17693777661691886975ULL);
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_19 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((var_8) * (var_9)))) * (min((0LL), (((/* implicit */long long int) arr_4 [i_4])))))), (((/* implicit */long long int) var_4))));
            arr_20 [(unsigned short)10] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29435))) + (((((/* implicit */_Bool) arr_11 [(unsigned short)2] [0LL])) ? (((/* implicit */unsigned long long int) -7696966213475431756LL)) : (((((/* implicit */_Bool) arr_18 [i_4])) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) -35184371826688LL))))))));
            var_25 = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) (short)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_6 [i_1])))))));
            arr_21 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_5 [i_4] [i_1]) : (((/* implicit */unsigned long long int) arr_16 [i_4]))))) && (arr_17 [i_4] [i_1] [i_1]))));
        }
        var_26 &= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10396758914713515258ULL))))), (((arr_7 [i_1]) + (arr_7 [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_6 [(_Bool)1]))))))));
        var_27 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 127U)), (((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)73)) & (((/* implicit */int) var_2))))) : (((unsigned long long int) var_16))))));
        arr_22 [i_1] = ((/* implicit */_Bool) (-(((long long int) min((((/* implicit */signed char) var_3)), ((signed char)18))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
        {
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) 810906128U))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_1)))) % (var_6)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_24 [10ULL] [i_1])))))) >= (arr_8 [i_1] [i_5])))));
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                arr_29 [i_6] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)77))));
                var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_24 [i_5 - 1] [i_5 + 3])))));
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_11 [8LL] [8LL])))) < ((+(((/* implicit */int) var_15)))))))) == (6964982806844893325ULL))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            arr_35 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [i_5 + 3])) ? (arr_5 [i_1] [i_5 + 4]) : (((/* implicit */unsigned long long int) arr_31 [i_1] [i_5 + 1] [i_8] [i_7])))));
                            arr_36 [i_1] [i_1] [i_6] = ((/* implicit */long long int) arr_10 [i_6] [i_7] [i_8]);
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (min((min((arr_27 [i_1] [i_5] [0U] [i_7]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((unsigned int) (signed char)11))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)81))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_39 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 869274354U);
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_4))));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) min((arr_18 [i_5 - 2]), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (var_8))) + (((arr_6 [i_1]) - (arr_13 [i_9] [i_5] [i_5] [i_1])))))))))));
                var_35 = min(((signed char)-82), (((/* implicit */signed char) ((((int) var_1)) <= (((/* implicit */int) arr_12 [i_1] [i_5 + 3] [i_9]))))));
            }
            for (signed char i_10 = 3; i_10 < 18; i_10 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_44 [i_1] [i_1] [i_5] [i_1] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) arr_31 [i_1] [i_5 + 4] [i_1] [i_5])), (arr_37 [i_5 + 2] [i_1]))));
                    var_36 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))), (var_14))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (3484061150U)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_10])) - (((/* implicit */int) (signed char)93))))) : (arr_34 [(signed char)11] [i_10] [i_5] [i_1] [i_5 + 4] [i_1])))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_48 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_46 [i_1] [i_1] [i_5]))) ? (((/* implicit */unsigned long long int) var_8)) : (max((arr_5 [i_5 + 1] [i_10 - 3]), (((/* implicit */unsigned long long int) (unsigned char)192))))));
                    /* LoopSeq 3 */
                    for (signed char i_13 = 2; i_13 < 17; i_13 += 4) 
                    {
                        arr_51 [i_13] [i_12] &= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (arr_38 [i_13])))), (var_16))))));
                        var_37 += ((/* implicit */int) min((((((/* implicit */_Bool) arr_50 [i_1] [i_5] [i_5 - 1] [i_5 + 3] [i_13 + 1] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_13] [i_13] [i_13] [i_13 - 2]))) : (arr_50 [i_1] [i_1] [i_1] [i_5 + 2] [i_13 + 2] [i_13] [i_13]))), (((((/* implicit */_Bool) arr_45 [i_13] [i_13] [i_13] [i_13 - 2])) ? (arr_50 [i_5] [i_5] [(_Bool)0] [i_5 + 2] [i_13 + 1] [i_5] [(_Bool)0]) : (-9001019008262489259LL)))));
                        var_38 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6964982806844893325ULL)) ? (var_5) : (((/* implicit */long long int) var_17)))) / (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10])))))) * (((unsigned long long int) arr_23 [i_1]))));
                        arr_52 [i_1] [i_1] [i_1] [i_10] [i_12] [i_13] [i_13 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_42 [i_1] [i_5] [i_5] [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_45 [i_13] [i_1] [i_1] [6]))))) : (((((/* implicit */_Bool) arr_18 [i_10])) ? (var_19) : (((/* implicit */unsigned long long int) 1059459952U))))))) ? (min((((((/* implicit */_Bool) arr_49 [i_10])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_12] [i_1])) ? (-1356192898) : (((/* implicit */int) arr_11 [i_12] [i_1]))))))) : (((max((arr_49 [i_10]), (((/* implicit */unsigned int) var_4)))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))));
                    }
                    for (long long int i_14 = 1; i_14 < 16; i_14 += 3) 
                    {
                        var_39 = ((/* implicit */int) 9001019008262489258LL);
                        var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_12] [i_5] [i_12] [13LL] [i_12] [17LL])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_1] [i_1] [i_10 - 3] [i_14 + 3]))))) : (arr_42 [4LL] [i_5] [i_10] [i_10])));
                        arr_56 [i_1] [i_12] [7LL] [i_5] [i_1] = ((/* implicit */signed char) var_11);
                        var_41 = ((/* implicit */short) arr_42 [i_1] [i_1] [i_1] [i_14]);
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_60 [i_15] [i_15] [18LL] [i_15] [i_15] |= ((/* implicit */long long int) var_13);
                        var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */short) (signed char)5)), (arr_33 [i_1] [i_5] [i_10] [i_12] [i_5])))))) & (((((((/* implicit */_Bool) 1952205430U)) || (((/* implicit */_Bool) var_16)))) ? (arr_49 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        arr_61 [i_10] [i_1] [i_10] [18LL] [i_15] [10LL] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_10 - 2] [i_5 + 2] [i_5 + 2] [(_Bool)0])) && (((/* implicit */_Bool) arr_28 [i_10 - 2] [i_5 + 1] [i_5 + 3] [i_1]))));
                        arr_62 [i_1] [8LL] [8LL] [i_1] [5LL] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_5 - 1]))) ^ (min((((/* implicit */long long int) (_Bool)1)), (-9001019008262489259LL)))))) < (((((((/* implicit */unsigned long long int) var_8)) / (arr_37 [i_1] [i_1]))) / (((var_19) * (((/* implicit */unsigned long long int) arr_38 [14LL])))))));
                    }
                }
                for (signed char i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    var_43 = ((/* implicit */long long int) min((var_43), (-9001019008262489247LL)));
                    arr_67 [16U] [i_5] [i_1] [i_16] [i_5] = -9001019008262489262LL;
                    var_44 = ((/* implicit */short) var_7);
                }
                var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_5 + 2] [i_10 - 2]))) >= (min((arr_58 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)194)))))))));
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) arr_26 [(unsigned short)16] [i_5] [13ULL]))));
                var_47 *= ((/* implicit */_Bool) max((min((1048575U), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)28))))))), (((/* implicit */unsigned int) var_2))));
                var_48 = (-((-(arr_63 [i_5 + 4] [i_5] [i_10 - 3] [i_10] [i_1]))));
            }
            for (unsigned int i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                arr_70 [i_1] [i_5] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_37 [i_17] [i_1]), (arr_37 [i_1] [i_1])))) ? (((arr_16 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_5])))))), (((((/* implicit */_Bool) ((arr_64 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_1] [i_1] [i_17])))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-29)), (var_9)))) : (arr_50 [i_17] [i_5 + 1] [i_5 + 1] [i_1] [2] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    for (long long int i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        {
                            arr_75 [i_1] [i_1] [i_18] [i_18] [i_5] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_5 - 1] [i_5] [i_1])))))));
                            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_7 [i_5]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) - (arr_71 [i_19] [i_18] [i_17] [i_17] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_64 [i_1]), (((/* implicit */unsigned int) (signed char)17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_17] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (var_10)))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_25 [i_19] [i_18] [i_17] [i_5])), (var_7)))) ? (((((/* implicit */_Bool) var_16)) ? (var_19) : (((/* implicit */unsigned long long int) arr_13 [6LL] [i_5] [i_17] [i_19])))) : (arr_18 [i_5 + 4])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 1; i_20 < 17; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 1; i_21 < 18; i_21 += 3) 
                    {
                        {
                            arr_81 [i_1] [17LL] [17LL] [i_17] [i_1] [17LL] = ((/* implicit */unsigned long long int) arr_68 [i_1] [i_1] [i_1]);
                            var_50 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_32 [i_1]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) : (arr_63 [i_21] [i_5 - 1] [16LL] [i_20] [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) -1105215120)) : (arr_6 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) : (((var_3) ? (((/* implicit */unsigned int) var_4)) : (arr_63 [i_17] [i_20] [i_17] [i_5 - 2] [i_17])))))));
                            var_51 = ((/* implicit */_Bool) (((~(((/* implicit */int) min((var_1), (((/* implicit */signed char) arr_73 [i_1] [i_20] [i_5] [i_1]))))))) & (((((/* implicit */_Bool) 9001019008262489258LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_1] [i_17] [i_20] [i_21])) && (((/* implicit */_Bool) var_4))))) : (var_6)))));
                        }
                    } 
                } 
                arr_82 [i_1] [i_1] = arr_5 [i_5 + 3] [i_5];
            }
        }
    }
}
