/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231562
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((unsigned long long int) var_12)) / (67108863ULL)));
            var_16 = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_0 + 1] [i_0 - 1]));
            /* LoopSeq 4 */
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                arr_9 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) 12321928388233609266ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [(_Bool)1] [i_2 - 1] [i_1]));
                arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 2573373107U))));
            }
            for (short i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0))));
                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32764))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_3] [i_3])) ? (arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_3]) : (arr_12 [i_0 - 1] [i_0] [i_3] [(unsigned char)9])));
            }
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((arr_2 [i_0] [i_5] [i_4]) / (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) 11U)) ? (arr_16 [i_4]) : (((/* implicit */unsigned long long int) var_2))))));
                    var_20 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))) ^ (arr_2 [i_0] [i_1] [(_Bool)0]))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) arr_17 [i_0 - 1]));
                        arr_21 [i_0] [i_0] [(short)2] [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (((((/* implicit */_Bool) (unsigned short)41106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_16 [7U])))));
                        arr_22 [i_6] [i_6] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_4] [i_1] [i_0])) - (((/* implicit */int) arr_13 [i_0] [i_4] [i_1] [i_0]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (arr_16 [i_1])));
                        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [(unsigned short)6] [i_0] [i_0 - 1])) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((_Bool) var_10)))));
                        arr_26 [i_0] [(signed char)2] [1ULL] [i_0] [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)31)) ^ (((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) (_Bool)1))))));
                        arr_27 [i_1] [i_5] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((arr_17 [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (0ULL)));
                    }
                    arr_28 [i_0] [i_0] [i_1] [i_4] [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 1] [i_5]))));
                }
                for (short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (+(arr_6 [i_1] [i_4] [i_8] [i_9]))))));
                        var_25 = ((((/* implicit */_Bool) ((unsigned int) (signed char)-123))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0 + 1])) : (1415843004949759728ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1415843004949759735ULL)) ? (((/* implicit */int) arr_30 [i_0] [i_8] [i_0 - 1] [i_0 - 1] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)52))))));
                    }
                    var_26 = ((/* implicit */int) var_14);
                    var_27 = ((/* implicit */unsigned long long int) arr_31 [8U]);
                    arr_34 [i_8] [i_0] [i_0] [i_0] [i_0] = ((signed char) (unsigned short)29741);
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_41 [i_0] [i_11] [i_11] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (2573373107U))));
                        var_28 = ((/* implicit */unsigned char) ((unsigned int) arr_33 [i_0 + 1]));
                        arr_42 [i_0] [i_4] [i_0] = 11796703654109645979ULL;
                        var_29 = (~(var_9));
                    }
                    arr_43 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(0U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        var_30 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18631))) > (arr_2 [i_0 + 1] [i_0 + 1] [i_4])))) <= (((((/* implicit */_Bool) 2291008229U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_17 [i_1])))));
                        var_31 = ((((/* implicit */int) arr_44 [i_1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) < (arr_0 [i_0]));
                    }
                }
                for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        arr_53 [i_1] [i_0] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_49 [i_0] [i_1] [7] [i_0 - 1])));
                        var_32 = ((/* implicit */unsigned int) ((unsigned short) arr_45 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]));
                        var_33 = ((/* implicit */unsigned long long int) -627823207);
                    }
                    for (int i_15 = 2; i_15 < 9; i_15 += 4) 
                    {
                        arr_56 [(short)6] [(short)6] [(_Bool)1] [i_0] [i_15] [i_15 - 1] [i_15] = ((_Bool) arr_44 [i_15 + 1] [i_15 + 1] [i_4] [i_13] [i_15] [i_4]);
                        arr_57 [i_15] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                    }
                    arr_58 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) ((var_10) ^ (arr_6 [i_0] [i_1] [i_4] [i_0 + 1])));
                }
                var_34 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_35 = ((/* implicit */unsigned char) (_Bool)1);
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                arr_63 [i_0] [i_0] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 - 1] [(_Bool)1] [i_0] [i_0 + 1]))) % (var_2)));
                arr_64 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) var_2));
                arr_65 [i_0] [i_0] [4ULL] = ((/* implicit */_Bool) (~(arr_60 [i_0] [i_0 + 1] [i_0 - 1] [i_0])));
                arr_66 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [(_Bool)1] [i_1] [i_0 - 1] [i_0] [i_0 + 1])) + (((/* implicit */int) ((((/* implicit */int) arr_4 [5ULL] [i_16])) <= (((/* implicit */int) var_12)))))));
                var_36 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) var_11)))));
            }
            arr_67 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) (unsigned short)35821));
        }
        for (short i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            var_37 = (unsigned short)29741;
            var_38 = ((/* implicit */signed char) ((int) arr_6 [i_0] [i_0] [i_0] [i_0]));
        }
        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            arr_73 [i_0] [i_0] [i_18] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned short)49973)) > (((/* implicit */int) (short)-16185))))));
            arr_74 [i_0] = ((/* implicit */_Bool) ((arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])))));
        }
        arr_75 [i_0] = ((/* implicit */unsigned short) (+(((unsigned int) var_13))));
        /* LoopSeq 2 */
        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_23 [i_0] [i_19] [i_0] [i_19]))));
            arr_80 [i_0] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)29741)) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1]))));
        }
        for (int i_20 = 1; i_20 < 7; i_20 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                var_40 = ((/* implicit */signed char) ((arr_54 [(unsigned short)7] [i_0 - 1] [i_21] [i_0 + 1] [(unsigned short)7]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_54 [i_0] [i_0 + 1] [i_20] [i_21] [i_21]))));
                arr_87 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_19 [i_0] [i_20] [i_0] [i_0] [i_21]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-16185))) - (1721594197U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0])))));
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                arr_90 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_68 [i_20]);
                var_42 = ((/* implicit */unsigned char) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_0])))));
                var_43 = ((/* implicit */unsigned char) ((1415843004949759727ULL) - (3917745869603681087ULL)));
                arr_91 [i_0] [i_20 + 3] [i_0] [i_20 - 1] = ((/* implicit */unsigned short) 21U);
            }
            arr_92 [i_0] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_85 [i_0 - 1])) == (((/* implicit */int) arr_69 [i_0 - 1] [i_0 + 1]))));
            arr_93 [i_0] [i_20] = ((/* implicit */unsigned char) ((unsigned long long int) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))));
            arr_94 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0 - 1]))));
        }
    }
    for (int i_23 = 0; i_23 < 14; i_23 += 4) 
    {
        arr_97 [i_23] = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_95 [i_23]), (arr_95 [i_23]))))));
        arr_98 [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))) ? (((((_Bool) arr_95 [i_23])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_96 [i_23])) ? (2573373110U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((unsigned long long int) (_Bool)1)))) : (((288230376151711743ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_95 [i_23])))))));
    }
    for (signed char i_24 = 1; i_24 < 21; i_24 += 2) 
    {
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2047U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_99 [i_24] [i_24])) & (((/* implicit */int) arr_99 [i_24] [i_24 + 1])))))));
        arr_101 [i_24] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) arr_99 [i_24] [(_Bool)1])), (2531095066U))))) ^ (((arr_99 [i_24] [i_24 + 1]) ? (((arr_100 [(signed char)4] [(signed char)4]) ? (((/* implicit */int) (short)-6374)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)2))))))));
    }
    var_45 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (var_9)));
    var_46 = (~((+(var_1))));
    var_47 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1819572706U)) ? (((/* implicit */int) var_6)) : (((561618831) | (((/* implicit */int) (short)-2324)))))), (((/* implicit */int) var_12))));
}
