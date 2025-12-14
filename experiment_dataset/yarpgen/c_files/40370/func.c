/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40370
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = (-(arr_6 [i_0]));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 6917529027641081856LL);
                    var_20 -= ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0]))));
        arr_12 [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [(short)9]);
        var_21 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)128));
    }
    for (signed char i_3 = 3; i_3 < 24; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) ^ ((-((+(657941571)))))));
        arr_16 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)161))));
        /* LoopNest 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)34636)), (((((/* implicit */int) arr_24 [(unsigned char)19] [i_3 - 2] [i_3] [i_3 + 1])) - (((/* implicit */int) (unsigned short)30891))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30902)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30900)) - (2147483647)))) : (((long long int) (-(8695086950219518911LL))))));
                        arr_25 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */int) ((min((2097151ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30902))) > (137438953468LL)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_7 = 1; i_7 < 12; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            arr_32 [i_7] [i_8] = ((/* implicit */long long int) 1536);
            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (arr_31 [i_7] [i_7]))))));
            arr_33 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)230)) ? (-4772363328613979868LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
            var_25 = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (unsigned char)241)), (16114540628173591270ULL))));
        }
        for (int i_9 = 3; i_9 < 13; i_9 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_10 = 1; i_10 < 12; i_10 += 2) 
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_7 + 2]))))) ? (min((14093164712558735118ULL), (((/* implicit */unsigned long long int) (unsigned short)34637)))) : (((/* implicit */unsigned long long int) 4096))));
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 12; i_11 += 2) 
                {
                    for (int i_12 = 2; i_12 < 14; i_12 += 3) 
                    {
                        {
                            arr_47 [i_7] [i_12 - 2] = ((/* implicit */short) ((max((var_9), (((/* implicit */unsigned long long int) min((var_18), (((/* implicit */long long int) arr_4 [i_12]))))))) * (((/* implicit */unsigned long long int) -3041947039379052505LL))));
                            var_27 = var_10;
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_30 [10LL] [10LL]))));
                            arr_48 [i_7] [i_7] [i_9] [(short)3] [1] [i_10] = var_1;
                        }
                    } 
                } 
            }
            for (signed char i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                var_29 = ((/* implicit */signed char) var_12);
                var_30 = ((/* implicit */_Bool) max((var_30), ((!(((/* implicit */_Bool) (unsigned short)63736))))));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_54 [i_7] [i_9 + 2] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)14169)) ? (-1838588375) : (((/* implicit */int) (unsigned char)182)))));
                arr_55 [i_7] [i_9 - 1] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_1);
            }
            arr_56 [i_7] [i_7] = ((/* implicit */long long int) (short)-1);
            arr_57 [i_7] = ((/* implicit */int) arr_40 [i_7] [i_9 + 1] [i_9]);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            for (int i_16 = 2; i_16 < 14; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    {
                        arr_65 [i_7] [i_15] [i_16 - 2] [i_17] [i_7] [i_17] = ((/* implicit */int) var_19);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-1)), ((~(((/* implicit */int) (signed char)83))))))) : (var_9)));
                        var_32 = ((/* implicit */unsigned long long int) ((((min((arr_62 [i_16 - 1] [i_16] [i_7 + 1]), (var_1))) + (2147483647))) >> (((((((/* implicit */int) var_2)) + (((/* implicit */int) var_13)))) + (30516)))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_18 = 0; i_18 < 18; i_18 += 1) 
    {
        arr_69 [i_18] = ((/* implicit */int) arr_13 [i_18]);
        arr_70 [i_18] = ((/* implicit */unsigned short) (unsigned char)18);
        var_33 = ((((/* implicit */_Bool) (unsigned char)18)) ? (-1) : (-1536));
        var_34 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4353579361150816497ULL))))) : (((/* implicit */int) arr_24 [i_18] [i_18] [i_18] [i_18]))))));
    }
    /* LoopNest 3 */
    for (int i_19 = 0; i_19 < 24; i_19 += 4) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                {
                    arr_79 [i_21] = max(((+(((/* implicit */int) var_2)))), ((~(max((((/* implicit */int) (unsigned short)61440)), (var_12))))));
                    /* LoopNest 2 */
                    for (int i_22 = 1; i_22 < 22; i_22 += 1) 
                    {
                        for (long long int i_23 = 2; i_23 < 22; i_23 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_22 + 2] [i_21]))), (max((((/* implicit */unsigned long long int) 1535)), (14093164712558735119ULL)))));
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((arr_71 [i_19]), (((/* implicit */long long int) (signed char)22)))), (((/* implicit */long long int) arr_74 [i_19] [i_20] [i_21]))))) ? (((/* implicit */int) var_13)) : (var_14)));
                                arr_84 [i_21] [i_21] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)-126)), (14093164712558735128ULL)));
                                arr_85 [i_19] [i_20] [i_21] [i_20] [i_22 + 2] [i_22] [(_Bool)1] = ((/* implicit */unsigned int) arr_20 [i_19] [i_20] [(unsigned short)24] [i_21]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
