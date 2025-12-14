/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242734
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
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 &= (unsigned short)19731;
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (max((((/* implicit */unsigned long long int) -5558508738154887232LL)), (7596260495087440812ULL))))) / (((/* implicit */unsigned long long int) var_6)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_19 = ((/* implicit */short) arr_4 [i_0] [i_1] [i_2]);
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [(unsigned short)14])) << (((/* implicit */int) arr_7 [i_0] [(_Bool)0]))))), (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))))))))));
                var_21 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) var_4))), (((((arr_2 [i_0]) + (9223372036854775807LL))) >> (((max((((/* implicit */unsigned int) var_14)), (var_6))) - (4037135083U)))))))) : (((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) var_4))), (((((((arr_2 [i_0]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((max((((/* implicit */unsigned int) var_14)), (var_6))) - (4037135083U))))))));
            }
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                var_22 = ((/* implicit */int) (short)-21108);
                var_23 ^= ((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_3]);
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned long long int) arr_5 [i_0] [i_1] [i_3])))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)46508)) : (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [(unsigned char)14] [i_1]))))));
            }
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5614))) : (arr_6 [i_4] [i_4] [i_1] [i_0]))))));
                arr_14 [i_4] [i_4] [i_4] [i_0] &= (unsigned char)255;
                var_27 = ((/* implicit */unsigned short) (unsigned char)217);
                arr_15 [i_0] = ((/* implicit */long long int) ((short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                arr_16 [(unsigned short)9] [(short)9] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0])))), (((/* implicit */int) ((_Bool) (unsigned char)255)))))) ? (max((((unsigned int) var_9)), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-11187))))))) : (((/* implicit */unsigned int) var_5))));
            }
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                arr_19 [i_0] [i_0] [i_1] [(unsigned char)18] = arr_7 [i_0] [i_0];
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_11)), (var_9)))))) ? ((~(((((/* implicit */_Bool) var_2)) ? (var_10) : (var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29968)) ? (max((((/* implicit */long long int) (short)-11187)), (arr_2 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                var_29 = ((/* implicit */int) min((min((max((18378166012765835612ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))))))));
                var_30 = ((/* implicit */unsigned long long int) var_2);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_0] = ((/* implicit */signed char) (-(max(((+(((/* implicit */int) (unsigned char)223)))), (((/* implicit */int) min((arr_11 [i_0] [i_1] [i_1] [i_1]), (var_15))))))));
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_6] [i_6])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(short)12] [i_0] [i_1] [i_6]))))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_32 *= 2302798027042736380ULL;
                var_33 = ((/* implicit */int) (unsigned short)29992);
                arr_25 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_23 [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */int) arr_12 [i_0] [11] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)75)))))))) : (var_6)));
                var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11187)) ? (arr_21 [17ULL] [(short)17] [i_0] [(short)22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17247))))))));
            }
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) max((((/* implicit */int) (short)17247)), ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_3)))))))))));
        }
    }
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        arr_29 [0ULL] = var_5;
        var_36 *= ((/* implicit */short) (-((((-(((/* implicit */int) arr_5 [i_8] [i_8] [(unsigned short)13])))) & (max((((/* implicit */int) var_13)), (var_14)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (unsigned short i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_9] [(unsigned char)19] [i_12])))))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17200)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))))) : (var_4)));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */long long int) arr_5 [i_9] [i_9] [i_9]);
        /* LoopSeq 3 */
        for (unsigned char i_13 = 1; i_13 < 6; i_13 += 4) 
        {
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (0ULL)));
            arr_42 [i_13] = ((/* implicit */unsigned char) var_3);
        }
        for (int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
        {
            var_42 |= ((/* implicit */_Bool) (short)-17247);
            arr_46 [i_9] [i_14] = ((/* implicit */unsigned long long int) (+(var_5)));
            var_43 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_7 [i_9] [i_9])))));
        }
        for (int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
        {
            arr_50 [i_15] [(unsigned short)8] [i_15] = ((/* implicit */int) (((_Bool)1) ? (arr_49 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_15] [i_9] [i_9])) || (((/* implicit */_Bool) (signed char)16))))))));
            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7995)) ? (3401082292888839470ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_39 [i_9] [9ULL])) : (((/* implicit */int) var_1)))))));
        }
    }
    for (short i_16 = 0; i_16 < 15; i_16 += 3) 
    {
        arr_55 [i_16] = ((/* implicit */unsigned short) min((((short) var_4)), (((/* implicit */short) (unsigned char)170))));
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (unsigned short)53902))));
                    arr_62 [i_16] [i_16] [i_18] [i_19] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) & (arr_53 [i_18])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)65535))))));
                    arr_63 [i_16] [i_16] [i_17] [i_18] [i_18] = ((/* implicit */unsigned short) (~(arr_21 [i_16] [i_17] [i_18] [i_19])));
                    arr_64 [i_16] [i_16] [1] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) 0ULL))));
                    var_46 = ((/* implicit */_Bool) arr_10 [i_16] [i_18] [i_16]);
                }
                arr_65 [(unsigned char)7] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_16] [(unsigned short)7] [i_18]))) < (18446744073709551615ULL)))) / (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_16] [i_17] [i_18])) : (((/* implicit */int) arr_20 [i_16])))), (((/* implicit */int) (unsigned short)29968))))));
                var_47 = ((/* implicit */unsigned short) arr_9 [i_16] [i_16] [i_16]);
                var_48 = (+(((/* implicit */int) var_2)));
            }
            var_49 = ((/* implicit */unsigned char) var_7);
            var_50 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_15)), (arr_58 [i_16])))));
        }
    }
}
