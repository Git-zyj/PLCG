/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24957
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (~(-137438953472LL)))))) == (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (137438953453LL))));
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (137438953471LL)));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) -6686449768324577341LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
        {
            arr_12 [i_2] [i_2] [14LL] &= ((/* implicit */_Bool) (~(arr_7 [i_2] [i_3])));
            var_23 = ((/* implicit */long long int) arr_10 [i_2 - 1]);
            arr_13 [i_2] = ((/* implicit */unsigned long long int) (((+(137438953463LL))) == (((((/* implicit */_Bool) 137438953485LL)) ? (-137438953472LL) : (137438953486LL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
        {
            arr_17 [(unsigned char)4] [i_2] [i_2] = ((/* implicit */short) ((_Bool) arr_7 [i_4] [i_4]));
            var_24 = ((/* implicit */unsigned short) arr_16 [i_2]);
            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) : (-137438953470LL))))));
        }
        var_26 = ((/* implicit */signed char) (~(((137438953491LL) - (((/* implicit */long long int) arr_16 [i_2]))))));
        arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)64)))), ((-((+(((/* implicit */int) arr_6 [i_2 + 2] [i_2]))))))));
        var_27 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)0)), (11912666693801277705ULL)));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_28 -= ((/* implicit */short) min((((((/* implicit */_Bool) -6233498076361522286LL)) ? (11912666693801277709ULL) : (((/* implicit */unsigned long long int) -137438953468LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)1)))))));
        var_29 = ((/* implicit */short) (+((+(((/* implicit */int) var_13))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        arr_28 [i_7] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_11 [i_6]), (arr_11 [i_7])))) <= (((((/* implicit */_Bool) ((unsigned char) 6534077379908273910ULL))) ? ((-(2147483647))) : (((/* implicit */int) ((_Bool) var_15)))))));
                        arr_29 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (~(11912666693801277705ULL)))) ? (((max((var_18), (var_10))) << (((((/* implicit */int) ((((/* implicit */int) (signed char)-56)) <= (((/* implicit */int) (unsigned char)116))))) - (1))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_17)) + (2147483647))) << (((((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_4))))) - (6847))))))));
                        arr_30 [i_8] [i_7] [i_7] [i_5] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_5] [i_6]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        arr_33 [i_6] [i_7] [i_6] [i_9] = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) var_3)))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (-(arr_7 [i_9] [i_9 + 2]))))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 12; i_10 += 3) /* same iter space */
                    {
                        arr_37 [i_5] [i_7] [i_7] [i_10] = ((((/* implicit */int) var_8)) << ((((+(min((((/* implicit */long long int) var_8)), (arr_7 [i_6] [i_6]))))) - (225LL))));
                        arr_38 [3LL] [i_7] [i_7] [i_7] [i_7] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)0))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_20 [i_10 - 1]), (((/* implicit */long long int) (_Bool)1))))) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))))));
                    }
                    arr_39 [i_6] [i_7] = (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 91890076954253786LL)), (1782560898948239250ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_5]))) : (32505856ULL))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
    {
        var_32 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1063081988U)) | (((32505856ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238)))))));
        arr_42 [i_11] = ((/* implicit */signed char) var_3);
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((unsigned char) var_12)))));
        var_34 = ((/* implicit */unsigned short) (-(arr_35 [i_11] [i_11] [i_11])));
    }
    var_35 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)-14349)), ((+(((((/* implicit */int) (unsigned char)1)) / (((/* implicit */int) (signed char)53))))))));
    /* LoopSeq 1 */
    for (int i_12 = 1; i_12 < 21; i_12 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 11912666693801277705ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_12] [i_12 + 1])) ? (((/* implicit */int) arr_44 [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) var_13))))) : (-137438953483LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_13 = 2; i_13 < 20; i_13 += 2) 
        {
            arr_49 [i_13] [i_12] [i_12] = ((/* implicit */unsigned int) ((unsigned long long int) var_18));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), ((_Bool)1)));
                        arr_56 [i_12] [i_12] [i_12] [i_15] [i_15] = (~(144110790029344768ULL));
                        var_38 = ((/* implicit */short) ((144115153716117504ULL) ^ (13331900834391707012ULL)));
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_17 = 3; i_17 < 18; i_17 += 4) 
            {
                var_39 = ((/* implicit */unsigned char) (-(arr_48 [i_12])));
                var_40 = var_17;
                var_41 = ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_12] [i_16] [i_12 + 1] [i_12]))) : (137438953482LL));
            }
            for (signed char i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned int i_20 = 2; i_20 < 20; i_20 += 3) 
                    {
                        {
                            arr_68 [7] [8ULL] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) max((157313579143766153ULL), (((/* implicit */unsigned long long int) 137438953471LL))))))));
                            var_42 |= ((/* implicit */unsigned int) (-((+(((((/* implicit */int) (unsigned char)235)) * (((/* implicit */int) arr_59 [i_19] [i_20]))))))));
                            arr_69 [i_20] [i_19] [i_12] [i_12] [i_16] [i_12] = ((/* implicit */unsigned short) min((min(((-(((/* implicit */int) arr_61 [i_12] [i_12])))), ((-(((/* implicit */int) var_1)))))), (((/* implicit */int) ((signed char) var_15)))));
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((unsigned char) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_21 = 2; i_21 < 21; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) var_16))));
                            arr_74 [i_12] [i_12] [i_18] [i_12] [i_18] = ((/* implicit */signed char) -137438953479LL);
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) arr_50 [i_12] [i_12] [i_12]))));
                        }
                    } 
                } 
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                arr_77 [i_12] [i_16] [i_12] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-120))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_12] [i_12] [i_23])) || (((/* implicit */_Bool) min((var_15), (arr_70 [(signed char)9] [(short)1] [(short)1] [(short)1]))))))) : ((-(((/* implicit */int) var_13)))));
                var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (~(137438953472LL))))) ? (((((_Bool) 137438953474LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)1))))))) : (((/* implicit */int) min((((((/* implicit */int) arr_73 [i_23] [i_23] [i_23] [i_12] [i_23] [i_23])) >= (var_0))), (arr_50 [i_12] [i_12] [i_12]))))));
                /* LoopSeq 1 */
                for (signed char i_24 = 0; i_24 < 22; i_24 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_25 = 2; i_25 < 21; i_25 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned long long int) (-(((arr_54 [i_12] [i_25 - 2] [i_25 + 1] [1LL]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_44 [i_12 + 1] [i_25 - 2]))))));
                        arr_85 [i_12] [i_12] [i_16] [i_23] [i_16] [i_24] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_46 [i_12 - 1] [i_12]), (arr_46 [i_12 - 1] [i_12])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_64 [i_12] [i_16] [i_25]))));
                        var_48 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (17578798490323805918ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_67 [8ULL] [i_25 - 1] [i_12 + 1] [i_24])), (137438953471LL))))));
                    }
                    for (unsigned short i_26 = 0; i_26 < 22; i_26 += 4) 
                    {
                        var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) max((((/* implicit */long long int) min((var_4), (arr_81 [i_12 + 1])))), (((((/* implicit */long long int) ((/* implicit */int) arr_81 [i_12 - 1]))) - (var_10))))))));
                        arr_90 [i_12] [i_16] [(unsigned short)18] [i_12] [i_26] = ((/* implicit */unsigned char) min(((signed char)-120), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)9222)) < (((/* implicit */int) (signed char)104)))))));
                        arr_91 [i_16] [i_12] [i_24] [i_23] [i_16] [i_12] [i_12] = ((/* implicit */unsigned short) max(((~(2542506643891082766ULL))), (11912666693801277705ULL)));
                    }
                    var_50 = ((/* implicit */unsigned long long int) min((var_50), ((-(min((max((((/* implicit */unsigned long long int) (signed char)111)), (18446744073709551600ULL))), (((/* implicit */unsigned long long int) var_19))))))));
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) var_19))), ((~(var_10)))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_8))))))));
                    arr_92 [i_12 - 1] [i_12 - 1] [i_12] = var_11;
                }
            }
            arr_93 [(unsigned short)17] [(unsigned short)17] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_4), ((short)11301))))));
            arr_94 [i_12] = ((/* implicit */short) (!((((((_Bool)1) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) != (((/* implicit */long long int) ((/* implicit */int) arr_81 [i_12 - 1])))))));
        }
    }
    var_52 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (2987784442500758532ULL)));
}
