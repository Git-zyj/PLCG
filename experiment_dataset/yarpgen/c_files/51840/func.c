/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51840
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
    var_17 = ((/* implicit */short) ((int) var_11));
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((-2147483647 - 1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483636))))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)128)), ((short)20439))))))), (((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (var_5))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) -1591548211708443180LL);
                        arr_13 [i_0] [i_1] [i_0] [(_Bool)1] [(unsigned char)4] = ((/* implicit */unsigned char) ((unsigned int) arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_3]));
                        arr_14 [i_0] [i_1] [i_0] [i_0] [(unsigned short)9] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) arr_3 [i_2] [i_0] [i_0])) : (((/* implicit */int) ((signed char) arr_2 [i_2 + 1])))));
                        arr_15 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (short)28785);
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned int) var_5);
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) arr_17 [i_4] [i_4]);
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            for (int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                for (short i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    {
                        arr_26 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_0))) * (((/* implicit */int) ((short) arr_25 [i_5 - 1])))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_19 [i_4]), (arr_21 [i_4] [i_4] [i_6] [i_5])))) / ((-(var_7)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 2; i_9 < 14; i_9 += 3) 
            {
                {
                    var_22 = (unsigned char)112;
                    arr_31 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL))))), (((((/* implicit */_Bool) arr_21 [i_9 + 4] [i_4] [i_4] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-16651))))))) : (arr_29 [5ULL] [i_9 + 4] [i_9 + 3] [10])))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 1; i_10 < 16; i_10 += 1) 
                    {
                        arr_36 [i_4] [i_8] [i_9 + 1] [i_4] [i_9 + 1] = ((/* implicit */long long int) max((((/* implicit */int) var_9)), (var_0)));
                        arr_37 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned long long int) arr_33 [i_4] [i_8] [i_9])), (var_1))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_33 [i_8] [i_8] [i_10])), (arr_27 [i_4] [i_8] [i_4])))))), (min((((/* implicit */unsigned long long int) max((var_2), (arr_27 [i_4] [i_8] [i_10])))), (max((((/* implicit */unsigned long long int) var_13)), (1784869370975401825ULL)))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_23 = ((max((((/* implicit */int) arr_28 [i_9 + 4] [i_9 - 2] [i_9])), (var_5))) <= ((+(((/* implicit */int) arr_28 [i_9 + 4] [i_9 - 2] [i_9])))));
                        arr_41 [i_4] [12U] [(unsigned char)15] [i_11] = ((/* implicit */signed char) max((((/* implicit */int) arr_25 [i_9 + 3])), ((+(((/* implicit */int) (unsigned short)16054))))));
                    }
                    var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)21622)), (var_5)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_27 [i_4] [i_8] [i_9]) : (((/* implicit */unsigned int) arr_33 [i_4] [(unsigned short)17] [i_9 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9 + 2] [i_4]))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_21 [i_9 + 1] [i_4] [i_4] [i_8])), (var_5))))));
                    arr_42 [i_4] [i_4] = ((/* implicit */signed char) ((unsigned short) var_10));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_12 = 2; i_12 < 20; i_12 += 1) 
    {
        for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                {
                    arr_52 [i_12] [i_12] [i_12] = (~(min(((~(-621529824))), (((/* implicit */int) var_16)))));
                    arr_53 [i_12] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_44 [i_12])) ? (((/* implicit */int) arr_45 [i_12] [i_12] [i_12 - 2])) : (((/* implicit */int) arr_43 [i_12])))) | (min((((/* implicit */int) arr_45 [i_12 - 2] [i_12] [i_12 + 2])), (407714278)))));
                    arr_54 [i_12] [i_12] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_51 [i_12 - 2] [i_13] [i_14] [i_14])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_47 [i_14])) : (18446744073709551614ULL)))) ? (min((((/* implicit */unsigned int) arr_44 [i_12])), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7936)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [(signed char)23]))) : (2850285113U))) % (((/* implicit */unsigned int) var_3))))), (max((((/* implicit */long long int) min((arr_55 [i_15]), ((signed char)115)))), (var_4)))));
        /* LoopSeq 3 */
        for (short i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                arr_64 [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */long long int) var_5)) >= (-512LL)));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_15 - 1])) ? (((/* implicit */int) var_16)) : (arr_61 [i_15 - 1])));
                arr_65 [i_15] [i_16] [i_15] = ((/* implicit */unsigned int) ((unsigned short) (signed char)115));
                var_27 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_62 [i_17] [(unsigned short)13] [i_16] [i_15])) || (((/* implicit */_Bool) (unsigned char)167)))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                arr_69 [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)163))) ? (((((/* implicit */_Bool) arr_55 [(unsigned char)9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_15]))) : (var_4))) : (var_15))))));
                var_28 = ((/* implicit */unsigned int) arr_58 [1ULL]);
                arr_70 [i_16] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_67 [i_15 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_15] [i_15 - 1] [i_15])) && (((/* implicit */_Bool) arr_66 [i_15] [i_15 - 1] [i_15])))))) : (((((/* implicit */_Bool) arr_59 [i_15 - 1] [i_16])) ? (arr_66 [i_15] [i_15 - 1] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_15 - 1])))))));
            }
            arr_71 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_63 [i_15 - 1] [i_15] [i_15 - 1] [i_15]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_16]))))), (min((var_2), (((/* implicit */unsigned int) arr_67 [i_15]))))))) ? (min((((/* implicit */unsigned int) (unsigned char)195)), (1323258184U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((var_7) + (((/* implicit */int) arr_68 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5])))))))));
        }
        for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_56 [i_15 - 1]), (((unsigned short) var_12))))), (min((((/* implicit */long long int) max((var_16), (arr_67 [i_19])))), (((((/* implicit */_Bool) arr_57 [i_15] [i_15])) ? (var_15) : (((/* implicit */long long int) var_7))))))));
            arr_74 [i_15] = ((/* implicit */unsigned long long int) (unsigned short)7945);
        }
        for (signed char i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                arr_81 [i_15] [i_15] = ((/* implicit */int) ((_Bool) ((unsigned int) var_6)));
                arr_82 [i_15] = max((((/* implicit */unsigned int) ((int) var_13))), (((max((((/* implicit */unsigned int) var_14)), (arr_63 [i_15 - 1] [i_20] [i_20] [i_21]))) >> (0ULL))));
                var_30 = ((/* implicit */short) max((arr_75 [i_15] [i_15 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)87)), (1261638863U)))) ? (var_14) : (((/* implicit */int) min(((short)-5867), (arr_60 [i_20])))))))));
            }
            for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
            {
                var_31 = ((/* implicit */long long int) ((min((arr_59 [i_15 - 1] [i_15 - 1]), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_59 [i_15 - 1] [i_15 - 1]))))));
                arr_85 [i_22] [i_15] [i_15] [i_15] = arr_66 [i_15] [i_15 - 1] [(_Bool)1];
                var_32 = (~(((/* implicit */int) ((unsigned char) arr_78 [i_15]))));
                arr_86 [i_15] [i_20] [i_15] [i_15] = ((/* implicit */short) (+(var_15)));
                arr_87 [i_15 - 1] [i_20] [i_22] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */unsigned long long int) (+(var_15)))) : (((unsigned long long int) var_7)))) >= (((min((arr_66 [i_15] [i_20] [i_22]), (((/* implicit */unsigned long long int) var_14)))) / (((/* implicit */unsigned long long int) var_4))))));
            }
            arr_88 [i_15] [i_20] [i_15 - 1] = ((/* implicit */unsigned int) min((min((arr_75 [i_15] [i_15 - 1]), (arr_75 [i_20] [i_15 - 1]))), (((arr_75 [i_20] [i_15 - 1]) & (arr_75 [i_15 - 1] [i_15 - 1])))));
        }
    }
}
