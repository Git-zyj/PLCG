/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24075
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) 3074510646903527339LL);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) 3074510646903527339LL);
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
        {
            var_10 &= ((/* implicit */short) 3074510646903527339LL);
            arr_6 [(short)5] [i_0] [(short)5] = ((/* implicit */long long int) arr_1 [i_1 + 2]);
        }
        for (long long int i_2 = 1; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_11 += ((/* implicit */short) -3074510646903527360LL);
            var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (((/* implicit */int) var_8)))))) / (264664510U)));
        }
        for (long long int i_3 = 1; i_3 < 12; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
            {
                arr_16 [i_4] [i_3] [i_4] [i_0] = var_2;
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    arr_19 [i_0] [i_4] [i_3 + 2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((arr_5 [(unsigned short)1] [i_3 - 1] [(unsigned char)13]) || (((/* implicit */_Bool) var_7))));
                    var_13 = ((/* implicit */short) ((((/* implicit */long long int) var_6)) < (3074510646903527339LL)));
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) -3074510646903527351LL))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (unsigned char)137))));
                    var_16 += ((/* implicit */_Bool) var_2);
                }
                for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (short)-8590);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-5681))));
                    }
                    for (long long int i_9 = 3; i_9 < 12; i_9 += 1) 
                    {
                        var_20 ^= ((/* implicit */_Bool) ((((var_9) ^ (((/* implicit */unsigned long long int) arr_11 [i_0] [i_3])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        var_21 = ((2384364582499216300ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5678))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_17 [i_9 + 2] [i_7] [i_7] [i_3 + 2]))));
                    }
                }
            }
            for (long long int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (2482223434U)));
                    var_24 = ((/* implicit */long long int) var_4);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-4110922115264392168LL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_6);
                        var_26 = ((907648132607906782LL) ^ (((/* implicit */long long int) 4095619926U)));
                        var_27 = ((/* implicit */unsigned int) ((-890612477610236460LL) + (4036485893030662709LL)));
                    }
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */short) (_Bool)1);
                        var_29 = ((/* implicit */unsigned int) ((arr_31 [1U] [i_3 - 1] [i_3 + 2] [9U] [i_10]) | (((/* implicit */int) arr_7 [1LL] [i_3 + 1]))));
                        arr_39 [9] [9] [11ULL] [11ULL] [(_Bool)1] [11ULL] [i_0] = ((/* implicit */unsigned int) (short)-5696);
                        var_30 = ((/* implicit */unsigned char) var_0);
                        var_31 ^= ((/* implicit */long long int) 1812743834U);
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_14 = 2; i_14 < 13; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_33 [i_0] [i_0] [i_0])))))));
                        var_33 = ((/* implicit */unsigned long long int) -356642028);
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_1))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((arr_28 [i_3 - 1] [i_14 - 2] [i_14 - 2] [i_14 - 1]) ^ (((/* implicit */long long int) arr_43 [(_Bool)1] [i_14] [i_10] [(short)3] [i_0] [(_Bool)1])))))));
                        var_36 = arr_41 [3U];
                    }
                    arr_45 [10U] [10U] [i_10] [i_0] [i_14 - 2] = ((((((/* implicit */int) (short)-28108)) | (var_7))) < (var_1));
                    arr_46 [i_0] [i_3] [i_10] [i_0] [i_14] [10LL] = ((/* implicit */long long int) arr_33 [i_0] [i_10] [i_10]);
                }
                for (int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    arr_50 [i_16] [i_10] [i_0] = arr_44 [i_0] [i_10] [(unsigned short)7];
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) arr_49 [i_0]))));
                    var_38 ^= ((/* implicit */_Bool) arr_9 [i_3] [i_3]);
                }
                var_39 = ((/* implicit */unsigned short) ((-356642021) != (((/* implicit */int) arr_29 [i_3] [i_3] [i_3 + 1] [i_3 + 1]))));
            }
            for (long long int i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
            {
                var_40 = arr_5 [i_3] [i_3 - 1] [i_3];
                /* LoopSeq 1 */
                for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    var_41 = ((/* implicit */long long int) var_8);
                    var_42 = ((/* implicit */unsigned char) var_7);
                }
                var_43 = ((/* implicit */unsigned int) arr_23 [6LL] [6LL]);
                var_44 ^= ((/* implicit */long long int) var_9);
            }
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                var_45 = ((/* implicit */unsigned int) arr_4 [i_0] [i_3 + 2]);
                var_46 = ((/* implicit */unsigned int) var_3);
                arr_59 [i_0] [i_19] [(unsigned char)8] = (i_19 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */int) var_8)) >> (((arr_58 [i_0] [i_3] [i_19]) - (3706969276108216200LL))))) / (((/* implicit */int) ((14257997296966128694ULL) >= (((/* implicit */unsigned long long int) arr_13 [i_0] [i_19])))))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_8)) >> (((arr_58 [i_0] [i_3] [i_19]) - (3706969276108216200LL))))) * (((/* implicit */int) ((14257997296966128694ULL) >= (((/* implicit */unsigned long long int) arr_13 [i_0] [i_19]))))))));
            }
            arr_60 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
        }
        var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) var_9))));
        arr_61 [(unsigned short)5] = var_3;
    }
    var_48 -= ((/* implicit */unsigned long long int) var_7);
}
