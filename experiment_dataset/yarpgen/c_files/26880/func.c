/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26880
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (var_1)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) var_7);
                    var_20 = ((((/* implicit */_Bool) max((min((((/* implicit */int) var_17)), (var_10))), (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)15929)) : (var_10))) : (((/* implicit */int) arr_3 [i_0] [i_2 + 1] [i_0])));
                    var_21 = ((/* implicit */int) arr_5 [(_Bool)1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_20 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_14 [i_5 - 1] [i_5 + 3] [i_5 + 1] [i_5 + 3]))))) | (((((/* implicit */_Bool) arr_18 [i_3] [i_4] [i_5 - 1] [i_5 + 3] [i_7])) ? (arr_18 [i_4] [i_4] [i_4] [i_5 + 2] [i_4]) : (18446744073709551615ULL)))));
                            arr_21 [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_19 [i_7] [i_6] [i_3] [i_4] [i_3]), (((/* implicit */unsigned short) (unsigned char)255))))) ^ (((/* implicit */int) ((unsigned short) var_4)))))) ? (((((((/* implicit */_Bool) var_9)) ? (arr_11 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))) / (((((/* implicit */_Bool) var_16)) ? (arr_11 [2ULL]) : (((/* implicit */unsigned long long int) arr_17 [i_7] [i_6] [i_5 - 1] [i_3] [i_3] [i_3])))))) : (min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_2)) : (var_7)))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            arr_26 [i_8] [i_8] [i_6] [i_5] [i_8] [i_8] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                            var_22 = ((/* implicit */signed char) ((int) ((unsigned short) var_0)));
                            arr_27 [i_3] [i_4] [i_4] [i_8] [i_5 + 1] [i_3] [i_8] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (arr_10 [i_8]) : (((/* implicit */unsigned long long int) var_15)))) << (((arr_25 [8ULL] [8ULL] [i_5] [i_8] [i_8]) + (955414621)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (-4082832796772201655LL) : (-8555792129150927223LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */unsigned long long int) -1)) : (1ULL))))));
                            arr_28 [i_3] [i_8] = (_Bool)0;
                        }
                        var_23 = min(((-(4275211695101342710LL))), (-8180837494756574014LL));
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_4 [11ULL]);
                        arr_31 [i_3] [i_3] [i_4] [i_4] [i_5 + 1] [i_9] = max((var_2), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)20116))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        arr_34 [i_3] [i_3] [i_3] [i_5] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1359025585904913200LL)) ? (5031352445698717709ULL) : (((/* implicit */unsigned long long int) -1359025585904913200LL)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_11 = 3; i_11 < 10; i_11 += 3) 
                        {
                            arr_38 [i_3] [i_3] [i_10] [(signed char)1] [i_10] [i_10] [8ULL] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((arr_13 [i_3] [i_3] [i_10] [i_11]) - (8214891120726681989LL)))));
                            arr_39 [i_3] [i_4] [i_10] [6LL] [i_11] = ((/* implicit */int) ((arr_37 [i_5 + 1] [i_5 - 1] [i_10] [i_5 + 3] [i_5 - 1] [i_5 + 2]) <= (((/* implicit */int) var_0))));
                            arr_40 [i_3] [i_3] [i_10] [i_5] [i_10] [i_5] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (-8158171914054342751LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4])))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_10] [i_11 - 2] [5LL])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1353649759U))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_26 = min((((/* implicit */unsigned long long int) ((348211092) != (((/* implicit */int) (unsigned short)4095))))), (((((((/* implicit */_Bool) 13503580581483949803ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_18 [i_12] [8] [i_5] [i_3] [i_3]))) + (var_7))));
                            var_27 = (!(((/* implicit */_Bool) var_6)));
                            arr_44 [i_3] [i_3] [i_10] [i_10] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(-1)))) && (((/* implicit */_Bool) ((min((4082832796772201655LL), (((/* implicit */long long int) var_5)))) >> (((13609532964899690651ULL) - (13609532964899690611ULL))))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -306851784)) && (((/* implicit */_Bool) 15311829946765194221ULL))));
                            arr_48 [0LL] [i_4] [i_5 + 3] [i_10] [i_4] &= ((/* implicit */int) 18446744073709551615ULL);
                        }
                    }
                    arr_49 [i_3] [i_3] = var_4;
                    var_29 = ((/* implicit */int) ((var_6) - (((((/* implicit */_Bool) ((arr_13 [i_5] [i_5] [i_5 - 1] [i_5]) & (arr_24 [i_3] [i_4] [i_4] [i_4] [i_5 + 1])))) ? (((arr_29 [i_3]) >> (((arr_42 [i_3] [i_4] [i_5 - 1] [i_3] [(unsigned short)4]) + (1424940702))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) arr_30 [i_3] [i_4])) - (23392))))))))));
                }
                for (long long int i_14 = 1; i_14 < 10; i_14 += 1) 
                {
                    arr_53 [i_3] [i_14] [i_14] [i_14] = (i_14 % 2 == zero) ? (((/* implicit */long long int) ((var_14) << (((((((1019225204) << (((((/* implicit */int) arr_30 [i_4] [i_14])) - (23415))))) << (((((/* implicit */int) var_9)) - (31104))))) - (2038450383)))))) : (((/* implicit */long long int) ((var_14) << (((((((((1019225204) << (((((((/* implicit */int) arr_30 [i_4] [i_14])) - (23415))) - (3815))))) << (((((/* implicit */int) var_9)) - (31104))))) - (2038450383))) + (1019225205))))));
                    /* LoopSeq 2 */
                    for (int i_15 = 4; i_15 < 11; i_15 += 3) 
                    {
                        arr_56 [i_14] [10LL] [i_14] = var_16;
                        var_30 = ((/* implicit */unsigned short) 1359025585904913197LL);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        arr_60 [i_3] [i_3] [i_3] [i_4] [i_4] &= ((/* implicit */int) var_7);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            var_31 &= ((min((((/* implicit */unsigned int) var_11)), (arr_55 [i_14 + 2] [i_14 + 1] [i_17] [i_17]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) -6391611648583486587LL)))))));
                            var_32 ^= ((/* implicit */unsigned short) 6391611648583486587LL);
                            arr_63 [i_14] [i_14] [i_17] = ((/* implicit */long long int) var_9);
                            arr_64 [i_3] [i_14] [i_3] [i_3] [i_3] [i_3] = (unsigned char)255;
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        }
                    }
                    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (_Bool)1)))));
                }
                for (unsigned short i_18 = 0; i_18 < 12; i_18 += 2) 
                {
                    var_35 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (7136601425849433285ULL) : (((arr_66 [i_3]) - (((/* implicit */unsigned long long int) arr_35 [i_18] [i_18] [i_18]))))))));
                    var_36 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_15))) && (((/* implicit */_Bool) 4082832796772201655LL))))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_19 = 1; i_19 < 11; i_19 += 3) 
                {
                    arr_70 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((549755813760LL) | (((/* implicit */long long int) -1019225205))))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_4] [i_4] [i_19])))))), (((/* implicit */int) ((_Bool) (unsigned char)12)))));
                    arr_71 [i_4] = ((/* implicit */unsigned short) 0LL);
                    var_37 = ((/* implicit */unsigned short) ((arr_11 [i_19 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_58 [i_3] [(unsigned char)10] [i_3] [i_3])) & (var_7)));
                    var_39 = ((/* implicit */int) max((max((((/* implicit */long long int) (unsigned char)3)), (arr_22 [i_20]))), (min((arr_22 [i_20]), (arr_22 [i_20])))));
                    var_40 -= ((/* implicit */int) ((_Bool) arr_24 [i_3] [(signed char)0] [i_4] [i_4] [(unsigned short)10]));
                }
                arr_76 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) min((max((((/* implicit */int) max((((/* implicit */unsigned short) arr_73 [i_3] [i_4])), (var_8)))), (((((/* implicit */int) (unsigned char)244)) - (0))))), ((-(((((/* implicit */_Bool) var_8)) ? (var_10) : (arr_25 [i_3] [i_3] [i_4] [i_4] [i_4])))))));
            }
        } 
    } 
}
