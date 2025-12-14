/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231268
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
    var_17 = ((/* implicit */unsigned short) ((max((((((/* implicit */long long int) var_5)) / (var_1))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (16703721760230219603ULL)))))) | (((/* implicit */long long int) var_3))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (var_0)))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : ((-(max((((/* implicit */long long int) (_Bool)1)), (var_15))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_19 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)252)) & (((/* implicit */int) (unsigned char)0))))) * (((max((((/* implicit */unsigned long long int) -5673790377222599673LL)), (18011827946848695410ULL))) | (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 4] [i_0]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_20 = ((((/* implicit */int) (short)32745)) == (((/* implicit */int) (_Bool)1)));
                        var_21 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_0] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) arr_11 [i_2] [i_2])))) : ((-(var_6)))))) : (max((((/* implicit */long long int) var_6)), (max((((/* implicit */long long int) arr_7 [i_0] [(short)10])), (arr_0 [(unsigned char)6]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_5] [i_2])) ? (arr_12 [i_5] [i_4]) : (arr_12 [i_5] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2]))))))));
                            var_23 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)13]))) == (var_2)))), (max((((/* implicit */unsigned long long int) -837584511)), (9270224637111656852ULL))))) | (((/* implicit */unsigned long long int) var_1))));
                            arr_19 [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 3586823971U)) ? (((/* implicit */int) (unsigned short)5901)) : (((/* implicit */int) (unsigned short)8128)))), (((/* implicit */int) ((max((((/* implicit */long long int) var_10)), (arr_0 [i_4]))) > (min((((/* implicit */long long int) var_0)), (var_1))))))));
                        }
                        arr_20 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) ((((((12250744939320085321ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4095))))) << (((((/* implicit */int) ((short) var_3))) - (561))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5902))) | (-9223372036854775805LL)))) ? (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) (unsigned short)8128)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1])))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_2])) : (((/* implicit */int) arr_2 [i_6]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_26 [7U] [i_1] [i_2] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_9))))) == (arr_24 [i_6] [10LL] [i_6] [10LL] [i_6] [(signed char)10] [i_1 + 4])));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-((+(arr_22 [i_0] [i_2] [i_0]))))))));
                        }
                        for (signed char i_8 = 1; i_8 < 12; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1 + 3] [i_1 + 3] [i_0] [i_6] [i_8])) ? (((long long int) (unsigned short)5901)) : (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) : ((-9223372036854775807LL - 1LL)))))) < (arr_21 [i_0] [12] [i_2] [i_6] [(unsigned char)14]))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_6] [i_1])))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)27)) ? (arr_22 [i_0] [i_6] [i_6]) : (var_5)))) ? (arr_27 [i_1 - 1]) : (((/* implicit */unsigned long long int) min((arr_24 [i_0] [(short)1] [i_1] [i_2] [i_6] [i_8] [i_8 + 4]), (((/* implicit */long long int) arr_29 [i_6])))))))));
                            arr_30 [i_6] [i_6] [1ULL] [i_6] [1ULL] [i_6] = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_6])), ((unsigned short)22790)))) - (((/* implicit */int) (short)18926)));
                            var_28 = ((min((arr_14 [i_0]), (arr_14 [i_2]))) ? (var_2) : (max((3949529227735566017LL), (arr_8 [i_1 + 3] [i_1 - 1] [(unsigned short)14] [i_1 + 3]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [(unsigned short)9] [i_1 + 4] [i_1 - 1]))))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_6] = ((/* implicit */_Bool) min((max(((-(4422453616697172638LL))), (((/* implicit */long long int) arr_2 [i_6])))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_7 [i_0] [2U]))));
                            arr_36 [i_6] [i_6] [i_2] [i_6] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0] [i_1] [i_1 + 2] [i_2] [i_6] [i_9]);
                        }
                        arr_37 [i_2] [i_2] [i_6] [i_2] [5] = (i_6 % 2 == zero) ? (((/* implicit */unsigned long long int) max((((((min((((/* implicit */long long int) -1662305951)), (arr_12 [i_1 + 4] [i_6]))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_6] [i_6])) >> (((/* implicit */int) (unsigned char)21)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_0] [i_1 + 2] [i_6] [i_2] [i_6])) >> (((((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_2] [i_6])) - (27)))))) || (((/* implicit */_Bool) (unsigned char)16)))))))) : (((/* implicit */unsigned long long int) max((((((min((((/* implicit */long long int) -1662305951)), (arr_12 [i_1 + 4] [i_6]))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_6] [i_6])) >> (((/* implicit */int) (unsigned char)21)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_0] [i_1 + 2] [i_6] [i_2] [i_6])) >> (((((((/* implicit */int) arr_25 [i_0] [i_0] [i_6] [i_2] [i_6])) - (27))) - (158)))))) || (((/* implicit */_Bool) (unsigned char)16))))))));
                        var_31 = ((/* implicit */signed char) (-(var_2)));
                    }
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? ((+(((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_2] [i_1 + 1] [i_0] [i_0] [i_0]))) : (var_15))))) : (var_1))))));
                }
                for (signed char i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    arr_40 [i_10] = ((/* implicit */unsigned char) max(((((-(var_7))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [7LL] [(unsigned char)13] [7LL] [i_10])) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) arr_4 [i_10] [i_1] [i_0]))))))), (min((arr_28 [i_10]), (((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((arr_5 [i_0] [i_0] [i_0]) - (2469663102725393355ULL)))))))));
                    arr_41 [i_0] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_25 [i_1 + 4] [i_1 + 3] [i_10] [i_1 - 1] [i_1 + 4])) != (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)18)), (arr_25 [i_0] [i_0] [i_10] [i_10] [12])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27830))) : (-354608897072261207LL))) < (min((((/* implicit */long long int) arr_1 [i_1])), (var_1))))))) : (((long long int) arr_32 [6LL] [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 4] [i_10]))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    arr_44 [i_11] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11] [12]))) != (arr_21 [i_0] [8ULL] [i_0] [i_0] [8ULL]))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)22)) > (((/* implicit */int) (unsigned short)56867)))))));
                }
                var_34 += ((((/* implicit */long long int) min((min((-1235894187), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned short) arr_5 [i_1] [(unsigned char)14] [(unsigned char)14])))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(unsigned char)2] [i_1] [i_1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_1] [i_1]))))) : (max((((/* implicit */long long int) var_10)), (-5877349062105516005LL))))));
            }
        } 
    } 
}
