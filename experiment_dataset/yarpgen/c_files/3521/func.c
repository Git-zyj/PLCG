/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3521
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)63))))) ? (((/* implicit */int) min(((unsigned char)144), ((unsigned char)115)))) : (((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (unsigned char)120))))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 13U))))) > ((+(((/* implicit */int) var_0))))))) : (((((/* implicit */int) var_13)) * (min((((/* implicit */int) var_4)), (var_14)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (var_14)));
            var_16 = ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_1 - 1] [i_1])));
            var_17 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
            arr_6 [i_0] = ((((((/* implicit */_Bool) (short)-64)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))))) % (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)52))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (((~(arr_0 [(unsigned char)15] [i_2]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)49))));
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 2])))))));
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)183)), ((unsigned short)60295))))))), (max((min((var_5), (((/* implicit */unsigned long long int) -119644580)))), (((((/* implicit */_Bool) (short)-23419)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) : (3749670506368120983ULL)))))));
                    arr_18 [i_0] [3ULL] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)0)), (min((13631303658602217333ULL), (((/* implicit */unsigned long long int) 1554840962))))));
                    arr_19 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97)))))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        arr_23 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)60))));
        /* LoopSeq 2 */
        for (short i_6 = 3; i_6 < 7; i_6 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)173)), ((unsigned short)0)))), (min((((/* implicit */int) min((var_0), (arr_20 [(unsigned char)0])))), (max((((/* implicit */int) var_11)), (-1389650954)))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)54))) <= (2136243276U)));
                            var_23 = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)224))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_13 [i_9])) - (168)))))))))))));
                            arr_33 [i_6] [i_6 + 1] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 33488896)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-30)), (arr_24 [i_6])))) : ((-(((/* implicit */int) var_12))))))), (max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)30))))), (((((/* implicit */long long int) 1554840962)) - (arr_14 [i_5] [i_5] [i_5])))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_10 = 3; i_10 < 7; i_10 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_6)))))))));
            var_26 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) > ((+(((/* implicit */int) min(((unsigned short)2494), (((/* implicit */unsigned short) var_11)))))))));
        }
        var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)30)))))));
        var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)222))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */int) var_2))))))) : (max((((((/* implicit */_Bool) 268435455LL)) ? (9958196197568329100ULL) : (((/* implicit */unsigned long long int) 3994781337U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)27)) ^ (((/* implicit */int) (signed char)-102))))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)60284)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39675))));
    }
    for (short i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 19; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1554840979)) ? (1466284569U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60293)))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */signed char) var_11)), (arr_40 [i_12 + 2] [(_Bool)1] [i_12])))) + ((+(((/* implicit */int) (signed char)-39))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 2; i_17 < 20; i_17 += 4) 
                    {
                        for (short i_18 = 1; i_18 < 19; i_18 += 2) 
                        {
                            {
                                arr_59 [i_18] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) min(((~(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_4)))))), (((((/* implicit */_Bool) ((arr_11 [i_17]) ? (((/* implicit */int) arr_2 [i_11])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_42 [i_17 - 1] [i_17] [i_17 - 2] [i_17 - 1])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_10))))))));
                                arr_60 [i_18] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) + (max(((-(var_9))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)236)))))))));
                                arr_61 [i_11] [i_11] [i_18] [i_11] [9ULL] [(signed char)20] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-24))))) ? (((((arr_47 [i_17] [i_17]) ^ (arr_0 [i_11] [i_11]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_18] [i_15] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))))) : (max((((/* implicit */unsigned long long int) (signed char)-31)), (arr_54 [(signed char)14] [i_18] [i_18 - 1] [i_18 + 2] [i_18 - 1] [i_18])))));
                                arr_62 [7U] [i_15] [i_18] [(unsigned char)20] [i_15] [(unsigned char)16] [i_15] = ((((/* implicit */_Bool) (signed char)-9)) ? (581233447U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))));
                                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))), ((~(((((/* implicit */int) (unsigned char)66)) & (((/* implicit */int) arr_2 [i_16])))))))))));
                            }
                        } 
                    } 
                    arr_63 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_11] [(unsigned short)18] [(signed char)4] [i_11] [(unsigned short)18]))) - (arr_16 [i_11] [i_11] [i_11] [i_11]))), ((+(var_9)))))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_11] [i_11])) <= (((/* implicit */int) (unsigned short)63035)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_16] [i_16] [i_16]))))))));
                    arr_64 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned short) max(((signed char)-26), ((signed char)23)))), (var_3)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2584))) + (523143937545654021ULL)))) ? (((/* implicit */int) ((arr_45 [(unsigned char)11] [i_15]) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_16])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_16] [i_16] [i_15])))))))));
                    var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)42)), ((unsigned short)11304)))) + ((+(((/* implicit */int) arr_2 [i_11]))))))), ((-(min((3158467550U), (((/* implicit */unsigned int) (unsigned short)5257))))))));
                }
            } 
        } 
        arr_65 [i_11] = (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_55 [i_11] [i_11] [i_11]))))));
    }
    for (short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)60290))));
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_55 [i_19] [i_19] [i_19])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60260))) - (arr_55 [(_Bool)1] [i_19] [i_19]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)57237)) + (((/* implicit */int) var_8)))))));
        arr_68 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_19] [i_19])), (arr_9 [i_19])))) ? (min((((/* implicit */unsigned int) (unsigned char)99)), (2847772672U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
        arr_69 [i_19] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((((/* implicit */_Bool) arr_47 [i_19] [i_19])) && (var_11)))))), ((+(((((/* implicit */_Bool) 2080374784U)) ? (((/* implicit */int) (unsigned short)54227)) : (((/* implicit */int) (unsigned short)54232))))))));
    }
    var_36 = ((/* implicit */signed char) var_1);
}
