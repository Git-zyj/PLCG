/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197748
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) max((((min((((/* implicit */unsigned long long int) (unsigned short)59151)), (2231593334408684691ULL))) & (max((16215150739300866924ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min(((((!(((/* implicit */_Bool) var_8)))) ? (8153440193716958671LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_1 - 2] [i_0 + 2]))))), (((/* implicit */long long int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] [i_2] &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_12 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) (unsigned short)49457)))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_2] = ((/* implicit */_Bool) ((unsigned int) ((int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_7 [i_2] [i_1] [i_2])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */short) ((long long int) var_8));
                            arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = min(((-(1395526783064744600LL))), (((/* implicit */long long int) ((unsigned short) (unsigned char)234))));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)95)))))));
                            arr_24 [i_2] [i_5] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) (_Bool)1)), (623471414U))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1LL)))) && ((!(((/* implicit */_Bool) var_12)))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(14561922033164245997ULL))))));
                            arr_27 [i_2] [i_1] [i_5] [i_7] = ((/* implicit */unsigned short) (~(arr_4 [i_5] [i_1] [i_0])));
                        }
                    }
                    for (int i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_8] [i_8] [i_2] = ((/* implicit */signed char) (unsigned char)38);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-((+(((/* implicit */int) var_0)))))))));
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned long long int) (~(var_6)));
                            arr_36 [i_0] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */signed char) (_Bool)0);
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((unsigned int) ((int) 1659669019U))))));
                        }
                        for (short i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            arr_39 [i_0] [i_1] [i_2] [i_8] [i_10] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (((((/* implicit */_Bool) ((unsigned char) var_9))) ? (3787692435U) : (max((((/* implicit */unsigned int) (signed char)-63)), (3787692435U)))))));
                            arr_40 [i_10] [i_10] [i_8] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (~((~(-812629231)))))), (((unsigned int) ((((/* implicit */_Bool) -837741175)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                        {
                            arr_44 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 16215150739300866925ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_2] [i_2] [i_8]))) : (min((arr_34 [i_0] [i_1] [i_2] [i_2] [i_8] [i_11]), (((/* implicit */long long int) (_Bool)1)))))) / (min((((((/* implicit */_Bool) var_16)) ? (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)27719))))), (((/* implicit */long long int) (_Bool)0))))));
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (774819698U)));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_21 [i_0] [i_1] [i_2] [i_8] [i_11]), ((signed char)72)))))))));
                            var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_11] [i_2] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-18))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (signed char)-118)))))));
                        }
                        var_28 = ((/* implicit */long long int) min(((~(490377678U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13642937221259998900ULL)) ? (((/* implicit */int) (unsigned short)40951)) : (((/* implicit */int) (unsigned short)17643))))))))));
                    }
                    for (int i_12 = 1; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        arr_49 [i_0] [i_1] [i_2] [i_2] [i_12] [i_12] = ((long long int) (!(((/* implicit */_Bool) var_12))));
                        arr_50 [i_2] [i_1] [i_2] [i_12] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)19252))))), (((((((((/* implicit */_Bool) var_8)) ? (-854808521643373718LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-67)) + (114)))))));
                        var_29 = ((/* implicit */_Bool) arr_29 [i_2] [i_1] [i_2]);
                        arr_51 [i_0] [i_2] [i_2] |= min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-53)), ((unsigned char)239)))), ((unsigned short)18494));
                    }
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
    {
        for (short i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    for (long long int i_16 = 4; i_16 < 9; i_16 += 1) 
                    {
                        {
                            arr_63 [i_16] [i_16] [i_15] [i_16] [i_13] = (~(((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */int) arr_13 [i_13] [i_14] [i_15] [i_16] [i_16 - 1])))));
                            var_31 += ((/* implicit */unsigned long long int) arr_5 [i_15]);
                            arr_64 [i_13] [i_13] [i_14] [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_13] [i_16])) || (((/* implicit */_Bool) (unsigned char)151))))))), ((~(((/* implicit */int) arr_28 [i_16 - 2] [i_15]))))));
                            arr_65 [i_16] [i_16] [i_16] [i_14] [i_13] = ((/* implicit */signed char) (((~(((long long int) var_11)))) / (((/* implicit */long long int) max((((int) var_11)), (((/* implicit */int) (signed char)0)))))));
                            var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 7099556474984652760LL)) ? (((/* implicit */unsigned long long int) 2033296992U)) : (12093103247756223352ULL))), (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40951))) | (3858725462U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_60 [i_13] [i_13] [i_13] [i_13] [i_13]))))))))));
                        }
                    } 
                } 
                arr_66 [i_13] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6))))))), (((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-40)) : (-1149929234))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)16074)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)62470)))))))) ? (min((((unsigned long long int) (signed char)118)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1098387931)) ? (1708139886U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned long long int) var_4))));
}
