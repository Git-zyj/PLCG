/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1921
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (1844895967U) : (((/* implicit */unsigned int) -1415412158)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65535))) ? ((-(((/* implicit */int) var_5)))) : (((int) var_0))))) ? (((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))) : (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (1844895967U) : (((/* implicit */unsigned int) (~(-1400238746)))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) % (arr_3 [i_1] [i_1])))));
        var_14 = min((1081931463U), (((((/* implicit */_Bool) (~(var_1)))) ? (1700321916U) : (arr_3 [3U] [i_1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4065454524U)) ? (2450071314U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5305))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_5 [i_2]);
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1844896002U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [2U]))) : (882386196U)));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_17 &= -1400238725;
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            arr_20 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1844895993U)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) arr_13 [i_4 - 1] [i_6 + 1] [i_4]))))) ? ((-(var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7)))))));
                            arr_21 [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_1)), (var_9)))))) ? (((((arr_16 [i_2] [i_2] [i_6] [(unsigned short)0] [i_6] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned long long int) max((var_9), (1696369566U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_18 = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)0))), (arr_17 [i_3] [i_3] [i_3] [i_2] [i_4] [i_4 + 1]))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */int) (+(((arr_17 [i_7] [i_7] [2ULL] [2ULL] [(unsigned short)2] [i_7]) * (((/* implicit */unsigned long long int) 1844895973U))))));
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_9 = 3; i_9 < 11; i_9 += 3) 
            {
                arr_33 [i_7] [i_7] [i_7] [i_9] = max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2450071328U))))) != (((((/* implicit */_Bool) -2082391143)) ? (((/* implicit */int) arr_23 [i_7])) : (var_0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1844895979U)) ? (arr_4 [(unsigned short)7]) : (var_0)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64212)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))));
                var_19 |= min((((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (11599041147761545273ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) arr_32 [i_8])) : (((/* implicit */int) arr_8 [i_7]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [4U])) ? (((((/* implicit */_Bool) -1415412173)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_15 [(unsigned short)8] [i_8] [i_9] [i_8] [i_8]))) : (max((((/* implicit */unsigned int) var_12)), (arr_3 [i_8] [11U])))))));
                arr_34 [i_9] [8] [i_8] &= arr_19 [i_8] [i_8] [i_9];
            }
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                arr_39 [i_8] [i_8] &= ((((((/* implicit */_Bool) (~(arr_4 [i_7])))) ? (((/* implicit */int) (unsigned short)41410)) : ((+(((/* implicit */int) arr_27 [i_7] [i_7])))))) << (((var_8) - (98653056U))));
                arr_40 [i_7] [6U] [6ULL] [i_7] = ((/* implicit */unsigned short) arr_3 [i_7] [i_7]);
            }
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                var_20 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -6732644)) ? (arr_37 [i_7] [i_8] [i_8]) : (-1061410987)))))));
                arr_45 [8ULL] [i_8] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_7])) + (((/* implicit */int) (unsigned short)24124))))) ? (((/* implicit */int) arr_8 [(unsigned short)2])) : (((/* implicit */int) (unsigned short)0))));
            }
            arr_46 [i_7] = ((/* implicit */unsigned short) ((int) ((unsigned short) arr_37 [i_8] [i_7] [i_7])));
            /* LoopNest 3 */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (int i_14 = 2; i_14 < 9; i_14 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)19437))))), (var_5))))));
                            var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35105)) - (1400238745)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [6U] [i_14] [6U] [(unsigned short)10] [6U] [10U]))))) : ((~(-1415412158)))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17082)))))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4122524864U))))), (((((/* implicit */_Bool) arr_10 [i_8])) ? (arr_31 [i_7] [i_7] [i_8]) : (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) -1988495257)) % (arr_36 [i_7] [i_8] [i_8])))))));
        }
        var_24 = ((/* implicit */unsigned short) (-(((unsigned int) arr_9 [10]))));
        /* LoopSeq 2 */
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_11 [i_17] [4U]))))))));
                            var_27 = ((/* implicit */unsigned long long int) arr_15 [i_7] [i_15] [i_15] [i_17] [i_18]);
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(arr_16 [i_7] [i_16] [i_16] [i_17] [i_18] [i_17]))), (((/* implicit */unsigned long long int) ((arr_63 [i_7] [i_7] [i_7] [i_7] [i_7]) > (((/* implicit */unsigned long long int) arr_53 [i_7] [i_7] [i_7] [i_7] [(unsigned short)5] [(unsigned short)5]))))))))));
                            arr_65 [i_7] [i_7] [i_16] [i_17] [i_18] [i_18] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((int) arr_42 [i_7] [i_7] [(unsigned short)8] [i_7])), (((/* implicit */int) max(((unsigned short)24124), (var_12))))))) ? (((((/* implicit */int) min(((unsigned short)61417), (var_11)))) | (((/* implicit */int) (unsigned short)19437)))) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)54919))))))));
                        }
                    } 
                } 
            } 
            arr_66 [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_15] [i_15])) ? (arr_14 [i_15]) : (arr_0 [i_15]))))));
        }
        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 4) /* same iter space */
        {
            var_29 |= ((/* implicit */unsigned int) ((536313071U) != (((((((/* implicit */_Bool) arr_19 [i_19] [i_19] [i_19])) ? (var_9) : (110803341U))) << (((max((var_8), (((/* implicit */unsigned int) var_3)))) - (98653043U)))))));
            var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -208422213)) ? (arr_14 [i_19]) : (var_9)))) ? ((-(var_9))) : ((-(var_9))));
        }
        arr_70 [i_7] = ((/* implicit */unsigned int) ((var_8) != (min((((/* implicit */unsigned int) var_11)), (4275432318U)))));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 12; i_20 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            for (unsigned short i_22 = 0; i_22 < 12; i_22 += 3) 
            {
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_16 [i_20] [i_22] [i_22] [i_20] [i_22] [i_22])))) ? (((/* implicit */unsigned long long int) arr_4 [i_20])) : (((unsigned long long int) var_6))));
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */int) (unsigned short)44008)) << (((((((/* implicit */_Bool) (unsigned short)10589)) ? (((/* implicit */int) (unsigned short)55663)) : (((/* implicit */int) arr_75 [i_21])))) - (55650)))))));
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_20])))))));
                                var_34 = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_5)) + (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (~(arr_51 [i_20] [i_20] [3U] [i_20] [i_20]))))));
    }
    for (unsigned int i_25 = 3; i_25 < 9; i_25 += 4) 
    {
        var_36 = ((/* implicit */unsigned int) min((var_36), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_41 [i_25 - 1])) : (((/* implicit */int) arr_69 [i_25 + 1]))))) % (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_25 - 3]))) : (arr_61 [i_25 - 1] [i_25 + 1])))))));
        var_37 += ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)10616)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_29 [i_25 - 3]))))) : (((unsigned int) var_5)));
    }
}
