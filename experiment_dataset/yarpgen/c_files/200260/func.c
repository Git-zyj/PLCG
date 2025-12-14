/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200260
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
    var_17 = (~(var_4));
    var_18 = ((/* implicit */int) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 2] [i_3 - 1] [i_0 + 2] [i_3]))));
                        var_19 += ((/* implicit */unsigned short) ((short) ((unsigned int) (_Bool)1)));
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 10980819510625359856ULL)))) || (((/* implicit */_Bool) 17179869183ULL))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [8] [i_2 - 1] [i_3 - 2])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((536870911) >= (536870924)))))))));
                    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1892930051)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))));
                }
                var_22 = ((/* implicit */int) arr_1 [i_2]);
                arr_16 [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 2]))));
            }
            for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */int) arr_17 [i_5 - 1])) != (((/* implicit */int) arr_18 [i_5 + 1] [i_5 - 1] [i_0 + 1]))));
                    var_24 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_0])) < (((/* implicit */int) var_2))))) == (((((/* implicit */_Bool) 1892930052)) ? (((/* implicit */int) var_1)) : (536870911)))));
                    arr_21 [i_0 + 1] [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)30))))) ? (((/* implicit */int) ((signed char) -536870919))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 3454658445U)) ? (-536870919) : (((/* implicit */int) arr_5 [i_5 + 1] [i_5 + 1] [i_0]))))));
                    var_25 += ((/* implicit */long long int) (_Bool)1);
                }
                for (signed char i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(536870923))))));
                    arr_27 [i_0] [i_1] [i_5] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 536870911)) ? (((/* implicit */int) var_5)) : (-536870919)))));
                    /* LoopSeq 2 */
                    for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        arr_30 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0 + 1] [i_8 + 2] [i_0 + 1])) & (((/* implicit */int) arr_18 [i_8] [i_8 + 1] [i_0 + 1]))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_5)) ? (-536870919) : (-536870925))) : (-536870923))))));
                    }
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) (-(536870924)));
                        arr_35 [i_0 + 2] [i_1] [i_5] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_5 + 2] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_5] [i_5 + 1] [i_5] [i_0] [i_1] [i_1]))))) ? (arr_33 [i_0] [i_1] [i_5] [i_5 + 2] [i_7]) : (((/* implicit */int) (unsigned short)62375))));
                }
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_18 [i_5] [i_1] [i_0]))));
                var_31 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -7299139994028701870LL)) ? (131071) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) arr_17 [i_0 + 1]))));
            }
            arr_36 [i_0] = ((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]);
            arr_37 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (-536870898) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) arr_4 [i_1]))))) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2343)))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_40 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 7299139994028701870LL))));
            arr_41 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870897)) ? (((/* implicit */int) (signed char)-8)) : (536870883)))) ? ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (short)-18674))))));
        }
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            var_32 = ((/* implicit */signed char) arr_33 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 1]);
            arr_44 [i_0] [i_11] [i_11] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
    }
    for (signed char i_12 = 2; i_12 < 14; i_12 += 4) 
    {
        arr_48 [i_12] = ((/* implicit */_Bool) 536870883);
        var_33 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_12] [i_12])) ? (max((max((((/* implicit */unsigned long long int) var_4)), (14845724992608692186ULL))), (((/* implicit */unsigned long long int) ((int) arr_45 [i_12] [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -1892930051))))))));
        arr_49 [i_12] = ((/* implicit */unsigned char) arr_47 [i_12] [i_12]);
    }
    for (short i_13 = 2; i_13 < 21; i_13 += 1) 
    {
        arr_54 [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) (-((+(((/* implicit */int) arr_51 [i_13])))))));
        var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_51 [i_13])))))) & (arr_50 [i_13])));
        var_35 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (-536870875) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_50 [i_13])))) <= (var_7))))));
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 19; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 2; i_16 < 22; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */short) ((unsigned short) min((((/* implicit */unsigned long long int) arr_57 [i_16 + 1] [i_14 - 3] [i_13 + 1])), (arr_52 [i_16 - 2]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_14 + 4] [i_15] [i_17])) | (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) 1750933549U)), (14845724992608692194ULL))) : (((/* implicit */unsigned long long int) 131071)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_63 [(unsigned char)18] [i_13 + 1]))))))))));
                            arr_64 [i_16] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2136))) : (2358737626401752166LL)));
                        }
                        for (short i_18 = 0; i_18 < 23; i_18 += 2) 
                        {
                            var_38 = (~((~(((((/* implicit */_Bool) arr_51 [i_13 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))));
                            arr_67 [i_13] [i_13] [i_13] [i_16] [i_18] = ((/* implicit */unsigned char) var_7);
                        }
                        for (short i_19 = 0; i_19 < 23; i_19 += 2) 
                        {
                            arr_70 [i_16] = var_3;
                            var_39 = ((/* implicit */short) (~(((((/* implicit */_Bool) -1892930063)) ? (-7669129631722675833LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                        {
                            var_40 += ((/* implicit */int) arr_62 [i_13] [i_14 - 3] [i_15]);
                            var_41 = max((((/* implicit */int) (unsigned short)2136)), (((((/* implicit */_Bool) 536870898)) ? (-1892930051) : (((/* implicit */int) (signed char)-43)))));
                        }
                        var_42 = ((/* implicit */short) (+(((/* implicit */int) max((max((arr_61 [i_16] [i_16] [i_14] [i_15] [i_16]), (((/* implicit */unsigned short) arr_68 [i_16 + 1] [i_15] [i_14] [i_13])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-17013))))))))));
                    }
                    arr_74 [i_15] [i_15] [i_14] [i_13] = ((/* implicit */int) arr_51 [i_14 + 2]);
                }
            } 
        } 
    }
    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (min((((((/* implicit */_Bool) (short)-22131)) ? (((/* implicit */int) (short)-14975)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) (unsigned short)2136)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */short) (unsigned char)197))))))))));
    var_44 += ((/* implicit */signed char) (((_Bool)1) ? (2358737626401752166LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
