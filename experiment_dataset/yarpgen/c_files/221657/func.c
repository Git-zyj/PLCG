/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221657
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
    var_15 = ((/* implicit */unsigned long long int) (unsigned short)42890);
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)42890)), (-455756134)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)42890)) : (arr_2 [i_3] [i_3])));
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) 455756133)) != (4294967292U))) ? (((/* implicit */unsigned long long int) ((234881024) - (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (arr_12 [i_3] [i_0]) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) max((1778428522), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) 2521024418U)) : (-1LL)))));
                var_19 = ((/* implicit */long long int) arr_12 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (unsigned short)65535);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 89366315))));
                }
            } 
        } 
        arr_22 [i_4] = ((/* implicit */short) (+((+(var_12)))));
    }
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_29 [i_7] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_8 + 3] [i_8])) ? (arr_0 [i_8] [i_8 - 1]) : (arr_5 [i_8 - 3] [i_8 + 2]))), (((/* implicit */long long int) arr_6 [i_9] [i_8 + 1] [i_8] [i_8 + 2]))));
                    var_22 += ((/* implicit */unsigned int) max((max((arr_11 [i_9] [i_8] [i_8 + 3] [i_8 - 3] [i_8 - 2]), (-455756116))), (((((/* implicit */_Bool) -2125488064)) ? (((/* implicit */int) (unsigned short)30347)) : (arr_11 [i_9] [i_8] [i_8 - 2] [i_8 - 1] [i_8 + 3])))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -89366315)) ? (((/* implicit */int) (unsigned short)65522)) : (var_10)))), (((((/* implicit */_Bool) (unsigned short)34655)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) : (var_2)))))) ? (min((633388269455597277LL), (((/* implicit */long long int) (unsigned short)29799)))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        /* LoopSeq 3 */
        for (int i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    for (unsigned int i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        {
                            arr_42 [i_11] [i_11] [i_11 + 2] [i_11] [i_10] = ((/* implicit */short) (~((+(((((/* implicit */_Bool) var_0)) ? (arr_11 [i_7] [i_10] [i_11 + 3] [i_12] [i_13]) : (455756116)))))));
                            arr_43 [i_7] [i_10 + 1] [i_11 + 1] [i_10] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)4088))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) max((max((arr_36 [i_10 - 1] [i_11 + 1]), (arr_36 [i_10 + 1] [i_11 - 1]))), (((((/* implicit */_Bool) arr_37 [i_11 + 2] [i_10 - 1])) ? (((/* implicit */int) (unsigned short)30881)) : (((/* implicit */int) (unsigned short)24442))))));
                arr_44 [i_10] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (signed char)101)), (-2027312335)))));
            }
            /* vectorizable */
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                var_25 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25815))))) ? (455756130) : ((~(((/* implicit */int) (_Bool)1))))));
                var_26 = ((/* implicit */long long int) (-(-1075532100)));
            }
            for (int i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                var_27 = ((((/* implicit */_Bool) 455756097)) ? (((/* implicit */unsigned long long int) -89366335)) : (7017881853748864805ULL));
                var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_10 - 1] [i_10 + 1]))) ? (((/* implicit */int) (short)4488)) : (((/* implicit */int) (short)32767))));
                var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11428862219960686810ULL)) ? (((/* implicit */int) (unsigned short)30868)) : (((/* implicit */int) (short)-4502))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) -1544509235)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34658))) : (var_9))));
                var_30 = ((/* implicit */_Bool) -448775805989133794LL);
            }
            arr_52 [i_10] = ((/* implicit */unsigned short) ((89366346) / (89366338)));
        }
        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 14; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 16; i_19 += 1) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned short) arr_6 [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 1]);
                            arr_63 [i_7] [i_18] [i_17] [i_18] [i_19] = ((((/* implicit */_Bool) (unsigned short)30877)) ? (var_2) : (((/* implicit */unsigned long long int) 89366350)));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) var_6);
            }
            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) min((((/* implicit */long long int) (~(541625486)))), (min((3066022551177628161LL), (((/* implicit */long long int) 89366344)))))))));
        }
        for (long long int i_20 = 0; i_20 < 16; i_20 += 2) 
        {
            var_34 = ((/* implicit */unsigned short) arr_26 [i_20] [i_7] [i_7]);
            arr_68 [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) arr_7 [i_7] [i_7]))))) ? (-89366339) : ((-(((int) 89366380))))));
            /* LoopNest 2 */
            for (int i_21 = 2; i_21 < 13; i_21 += 2) 
            {
                for (signed char i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    {
                        arr_73 [i_22] [i_21] [i_20] [i_7] = ((/* implicit */short) ((((((-541625487) + (2147483647))) >> (((((/* implicit */int) (short)4488)) - (4460))))) + ((~(455756130)))));
                        arr_74 [i_7] [i_20] [i_20] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-20776))))), (10428700852280880435ULL)));
                        var_35 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 9223372036854775807LL))))));
                        var_36 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_61 [i_20] [i_22] [i_21 + 1] [i_20])) ? (((/* implicit */unsigned int) arr_65 [i_21 - 2])) : (arr_61 [i_20] [i_21] [i_21 - 2] [i_20])))));
                        arr_75 [i_22] [i_22] [i_21 + 1] [i_20] [i_7] [i_7] = ((/* implicit */unsigned short) (-(arr_71 [i_21 + 3] [i_21 - 2] [i_21 - 2] [i_21 - 1] [i_21 + 1])));
                    }
                } 
            } 
            arr_76 [i_7] [i_7] [i_20] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)20775)), ((unsigned short)0)))) && (((/* implicit */_Bool) -541625487)))))) >= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 89366315)) : (7923453359983888846ULL)))));
        }
        var_37 = ((/* implicit */unsigned short) var_1);
        arr_77 [i_7] |= ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
