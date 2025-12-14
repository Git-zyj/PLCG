/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32614
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
    var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21155))) : (var_9)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
                arr_7 [i_0] = ((/* implicit */signed char) 17974380216961280570ULL);
            }
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2] [i_3])) ? (arr_2 [i_0] [i_0 + 1] [i_3]) : (arr_2 [i_0] [i_0 - 2] [i_1]))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_5 [(unsigned short)14] [i_0 - 3] [i_0])) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 3] [i_0]))));
                arr_10 [i_0] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_0] [i_3]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_15 [i_0] = ((/* implicit */long long int) arr_4 [i_1] [i_0] [i_1]);
                        var_24 = ((/* implicit */unsigned short) 4294959104ULL);
                        var_25 *= ((/* implicit */signed char) (unsigned char)66);
                        var_26 = ((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [i_0] [16U] [(unsigned char)19] [i_0 - 3])));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0] [i_0 + 1])) ? (arr_14 [i_0 + 1] [i_0] [i_0 + 1]) : (arr_14 [i_0 + 2] [i_0] [i_0 + 1])));
                    }
                    for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)48966)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_6 - 1] [i_6] [i_0 + 2] [i_4] [(short)17]))) : (arr_6 [i_6 - 1] [i_0 - 1] [i_0 + 2])));
                        var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_12 [i_0] [6ULL] [i_3] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (unsigned short)48954)))))));
                        var_30 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_6 + 1] [i_0 + 2]))));
                        var_31 += ((/* implicit */unsigned long long int) var_5);
                    }
                    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)-12))))) ? (408421338529455485LL) : (((/* implicit */long long int) 1678458671U))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_3] [i_7 + 1] [i_7 + 1] [i_7])) ? (408421338529455496LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57)))));
                    }
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (short)-12))) ? ((-(arr_18 [i_3] [(_Bool)1] [i_3] [i_3] [6]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)12))))))))));
                    arr_20 [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))) ^ (((((/* implicit */_Bool) 408421338529455485LL)) ? (((/* implicit */unsigned long long int) arr_14 [i_4] [i_1] [(unsigned short)0])) : (arr_1 [i_0])))));
                    var_35 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                    arr_21 [i_0] [i_1] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) -408421338529455491LL))));
                }
                for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
                {
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)190))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2616249558U)))))) : (785208183361175965ULL)));
                    var_37 = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16559))) % (arr_14 [(short)9] [i_0] [i_3])))));
                    var_38 = ((/* implicit */unsigned long long int) arr_17 [i_0 - 3] [i_1] [3ULL] [i_3] [i_8] [i_8]);
                }
            }
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_39 *= ((/* implicit */short) arr_11 [i_0] [i_0] [(signed char)6] [i_0] [i_9] [i_9]);
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 5030383200973987529LL)))))));
                            var_41 = ((/* implicit */unsigned char) (-(-408421338529455485LL)));
                        }
                    } 
                } 
            }
            for (int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0 + 1] [i_0] [i_0]))));
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) arr_24 [i_0] [i_0] [i_0 + 2] [i_0]))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (unsigned char i_15 = 1; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_14] [i_0 - 2])) >> (((4503599627369984ULL) - (4503599627369961ULL)))))));
                            arr_41 [i_0] = ((/* implicit */unsigned long long int) var_0);
                            var_45 &= ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1] [i_1])) ? (arr_29 [i_15] [i_14] [(signed char)4] [i_1] [i_0]) : (arr_18 [i_1] [i_1] [i_13] [i_1] [i_1]))))));
                        }
                    } 
                } 
            } 
        }
        var_46 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-12))))) || (((/* implicit */_Bool) (~(777404051007317700ULL))))))), (((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0 + 2] [4LL] [i_0])) ? (arr_26 [i_0] [i_0] [i_0] [17ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2] [i_0])))))))));
    }
    for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_17 = 1; i_17 < 20; i_17 += 2) 
        {
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)53608))))))) ? (((((/* implicit */_Bool) ((arr_34 [i_16]) ^ (arr_11 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16559))) : (var_15))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_24 [(unsigned short)15] [i_16] [(unsigned short)15] [(unsigned short)15]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54)))));
            arr_48 [i_17] [i_17] = ((/* implicit */unsigned char) (short)12);
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                var_48 = 9223372036854775807LL;
                var_49 = ((/* implicit */unsigned int) arr_2 [i_16] [i_16 + 2] [i_17]);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 3) 
        {
            arr_57 [i_16] [i_19] [i_19] = ((arr_34 [i_16]) * (((((/* implicit */_Bool) arr_16 [i_16] [i_19] [i_16] [i_19] [i_19] [i_16] [i_16])) ? (var_19) : (((/* implicit */unsigned long long int) arr_56 [i_19] [i_19])))));
            var_50 = ((/* implicit */unsigned long long int) max((var_50), ((+(2679087480766438173ULL)))));
            arr_58 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)28)))))) ? (((((/* implicit */_Bool) arr_33 [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_23 [i_19] [i_19 + 4] [i_16] [i_19]))) : (((/* implicit */unsigned long long int) arr_14 [i_16] [i_19] [i_16]))));
            var_51 = (+(17U));
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_1 [i_16 - 3])))))));
            arr_61 [i_16] = ((/* implicit */signed char) ((5309903013879847LL) >> (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
        }
        /* vectorizable */
        for (unsigned char i_21 = 0; i_21 < 22; i_21 += 1) 
        {
            var_53 = ((/* implicit */unsigned long long int) arr_56 [i_16] [i_21]);
            arr_64 [i_21] [i_21] = ((/* implicit */unsigned short) var_18);
        }
        /* LoopNest 2 */
        for (unsigned int i_22 = 0; i_22 < 22; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 2; i_23 < 19; i_23 += 4) 
            {
                {
                    var_54 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -408421338529455486LL))) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned short)48976))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_14)) ? (1106633281U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100)))))))) : (min((((unsigned long long int) arr_23 [i_16] [i_16] [i_16] [i_23])), (((/* implicit */unsigned long long int) var_1))))));
                    arr_71 [14ULL] [i_22] [i_22] [i_22] = ((/* implicit */_Bool) (+(3864907074168997305ULL)));
                }
            } 
        } 
        var_55 = ((/* implicit */long long int) (((~((~(((/* implicit */int) arr_42 [i_16] [i_16])))))) << (((((/* implicit */int) arr_22 [i_16] [i_16] [i_16] [i_16])) - (9900)))));
    }
}
