/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26548
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
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 += ((max((((/* implicit */int) (short)-19635)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_12)) : (62))))) ^ ((~(62))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */short) 70);
                        var_21 = ((/* implicit */int) max((var_21), ((-(((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1])) ? (71) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                        arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 15231328521116285192ULL)) ? (-719058715) : (((((/* implicit */_Bool) -719058715)) ? ((+(((/* implicit */int) var_1)))) : (min((-719058715), (((/* implicit */int) (_Bool)0))))))));
                    }
                    arr_12 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)30))))))))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    for (signed char i_4 = 3; i_4 < 9; i_4 += 3) /* same iter space */
    {
        var_23 = max(((~(-70))), (((((/* implicit */_Bool) 15231328521116285161ULL)) ? (((/* implicit */int) ((((/* implicit */int) (short)-6598)) < (((/* implicit */int) (unsigned char)128))))) : (1148899616))));
        arr_17 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_13) != (((/* implicit */int) arr_8 [i_4] [i_4 + 4] [(unsigned char)2] [3]))))), (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 62)) : (15231328521116285173ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                arr_22 [i_4] = ((/* implicit */unsigned long long int) var_18);
                arr_23 [8ULL] [i_5] [(short)4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) -719058715))));
                arr_24 [i_4] [i_4] [i_6] = ((/* implicit */short) var_6);
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_7 [i_4 - 1] [i_5]))));
            }
            var_25 = ((/* implicit */int) 3215415552593266443ULL);
        }
        arr_25 [i_4] = ((/* implicit */int) max(((~(15231328521116285173ULL))), (((/* implicit */unsigned long long int) arr_4 [i_4] [14ULL]))));
    }
    for (signed char i_7 = 3; i_7 < 9; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 1) 
        {
            arr_30 [i_7] [9ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (15231328521116285192ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((15231328521116285173ULL), (((/* implicit */unsigned long long int) var_11))))))));
            arr_31 [i_7] [i_7 - 3] [i_8] = ((/* implicit */unsigned long long int) var_4);
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_36 [i_7 - 2] [1ULL] [i_9] [i_7] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (19ULL))), (((/* implicit */unsigned long long int) ((arr_33 [i_8 - 1] [i_8 - 2] [i_8 - 2]) > (((/* implicit */int) (short)-26942))))));
                arr_37 [3] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (~(15231328521116285173ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1846273850) / (569121947)))) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)226)) == (((/* implicit */int) arr_14 [i_9])))))))) : (((((/* implicit */_Bool) (~(arr_2 [i_9] [i_8] [9])))) ? (((((/* implicit */_Bool) var_5)) ? (arr_16 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_7] [(signed char)0] [i_8 - 2] [(signed char)9])), (arr_0 [2] [i_8])))))))));
                var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((-569121948), (min((((/* implicit */int) var_12)), (569121977)))))), (min((3616317289124576946ULL), (max((arr_21 [(short)4] [0ULL] [0ULL] [(signed char)8]), (((/* implicit */unsigned long long int) arr_15 [12ULL] [i_8]))))))));
                var_27 = ((/* implicit */signed char) (short)10890);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_42 [i_10] [i_10] = ((/* implicit */int) (signed char)-64);
                var_28 = ((/* implicit */unsigned char) 18446744073709551615ULL);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_45 [(short)12] [11] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */int) max((max(((signed char)-101), (arr_8 [(short)4] [i_7] [(_Bool)1] [i_11]))), ((signed char)-64)))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_8] [i_7 - 1])), (133693440)))) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                arr_46 [i_7] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_26 [i_7 - 1]), (((/* implicit */signed char) var_16)))))) == (max((min((arr_34 [i_7] [i_8]), (((/* implicit */unsigned long long int) (signed char)63)))), ((~(14830426784584974669ULL)))))));
                arr_47 [(short)2] [i_8 - 1] [i_11] = ((/* implicit */short) (+(min((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) arr_32 [i_7] [i_8] [i_11])) : (((/* implicit */int) (short)-29308)))), (70)))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        {
                            arr_53 [3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-29308)) : (((/* implicit */int) (short)29307))));
                            arr_54 [i_13] [(_Bool)1] [(signed char)10] = (short)24841;
                            arr_55 [(signed char)3] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_8);
                        }
                    } 
                } 
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_58 [3] [7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_7 - 1] [i_7 - 3])) ? (-1204048304) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [4] [4])) && (((/* implicit */_Bool) (signed char)64)))))));
                arr_59 [7] = ((/* implicit */short) (unsigned char)0);
                arr_60 [(signed char)2] [7] [(signed char)8] = ((/* implicit */unsigned char) arr_5 [(short)4]);
                arr_61 [i_7 + 2] [i_7] [i_8] [(_Bool)1] = ((/* implicit */int) arr_50 [8ULL] [(short)9] [i_7] [i_8 - 1] [i_14] [(short)9] [i_14]);
            }
        }
        arr_62 [i_7] [i_7] = ((/* implicit */_Bool) ((max((15231328521116285173ULL), (((/* implicit */unsigned long long int) var_0)))) * (arr_35 [i_7 + 1] [i_7 - 1] [i_7 - 2])));
        arr_63 [(signed char)2] &= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))));
    }
}
