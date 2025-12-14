/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246543
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
    var_10 = ((/* implicit */short) var_6);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)20103), (((/* implicit */unsigned short) arr_5 [i_1])))))))) <= (min((((/* implicit */long long int) arr_2 [i_0])), (var_0)))));
            var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) != (((/* implicit */int) arr_3 [i_1])))))));
        }
        for (long long int i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] [i_2] = ((((/* implicit */int) arr_5 [i_2])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
            arr_10 [i_2] = var_4;
            var_12 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) arr_4 [i_2])), (510019251U)))));
        }
        for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((/* implicit */int) arr_2 [i_3 - 2])) : (((/* implicit */int) arr_2 [i_3 - 2]))))) || (((((((/* implicit */_Bool) arr_8 [i_3])) ? (var_0) : (1235482374863004218LL))) > (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))));
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_14 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1]))));
                var_15 = ((/* implicit */unsigned char) max((arr_8 [i_3 + 1]), ((+((-(var_2)))))));
                var_16 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_16 [i_3] [i_3] [i_3 - 1])))) ^ ((+(((/* implicit */int) arr_13 [i_4]))))));
            }
            for (short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                arr_19 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((unsigned long long int) (unsigned char)7))));
                var_17 = ((/* implicit */short) ((max((((/* implicit */int) min(((unsigned short)20538), (var_4)))), ((+(((/* implicit */int) var_5)))))) != (((/* implicit */int) (!(((((/* implicit */int) (signed char)127)) > (((/* implicit */int) var_5)))))))));
                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_3]))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_22 [i_0] [i_3] [i_3] [i_6] = (-(((/* implicit */int) var_4)));
                var_19 = ((/* implicit */int) arr_20 [i_0] [i_6]);
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) var_3)), (arr_14 [i_0] [i_3] [i_3] [i_3 - 2])))) > (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_7 [i_0])))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                var_21 = (!(((/* implicit */_Bool) (-(9223372036854775807LL)))));
                var_22 = ((/* implicit */long long int) (~(arr_8 [i_0])));
                var_23 = ((/* implicit */unsigned int) (signed char)-1);
                /* LoopSeq 1 */
                for (unsigned short i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    var_24 -= ((/* implicit */_Bool) ((var_2) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))));
                    var_25 ^= ((((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_7] [i_3] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)132)) * (((/* implicit */int) arr_1 [i_0]))))) : (((long long int) (_Bool)1)));
                }
                arr_30 [i_0] [i_3] [i_7] |= ((/* implicit */_Bool) arr_4 [i_3]);
            }
            arr_31 [i_0] [i_3] = ((/* implicit */short) min((((((/* implicit */int) arr_18 [i_3 + 1] [i_3 + 1])) & (((/* implicit */int) arr_28 [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3])))), (var_7)));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                arr_40 [i_0] [i_9] [i_10] = ((/* implicit */long long int) var_7);
                arr_41 [i_0] [i_9] [i_10] = ((/* implicit */unsigned int) (unsigned char)135);
                var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) != (arr_17 [i_0] [i_9] [i_10])))) * (((/* implicit */int) arr_13 [i_10 - 1]))));
                var_27 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_33 [i_10] [i_9] [i_10])) >> (((var_7) - (583587556)))))));
                arr_42 [i_0] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (unsigned char)124))));
            }
            arr_43 [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) arr_16 [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) (unsigned char)145)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_9])))))));
        }
        var_28 ^= ((/* implicit */signed char) ((var_7) >> (((((/* implicit */int) arr_2 [i_0])) - (583)))));
        var_29 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_23 [i_0] [i_0] [i_0])))))) : (((arr_36 [i_0] [i_0]) | (arr_36 [i_0] [i_0])))));
        var_30 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)77)) | (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_18 [i_0] [i_0])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    for (unsigned short i_11 = 3; i_11 < 20; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) 9223372036854775801LL);
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                var_32 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) max((var_9), (((/* implicit */unsigned short) (signed char)98))))));
                arr_53 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_45 [i_11] [i_11])) : (((/* implicit */int) (_Bool)1))))))))) & (((((/* implicit */_Bool) arr_51 [i_11] [i_12] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_4))))) : (max((((/* implicit */long long int) arr_47 [i_11])), (3474969475837795851LL)))))));
                arr_54 [i_13] [i_11] [i_11] = ((/* implicit */_Bool) (unsigned char)243);
            }
            arr_55 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_44 [i_11])), (arr_47 [i_11]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_11 - 1] [i_12]))) : ((((-(var_1))) - (((/* implicit */long long int) ((/* implicit */int) ((short) var_7))))))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 4; i_14 < 20; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        {
                            arr_63 [i_11] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_49 [i_11 - 1] [i_14 - 1])) < (((/* implicit */int) arr_50 [i_11] [i_14 - 1] [i_14 - 2]))))) <= (((/* implicit */int) var_5))));
                            arr_64 [i_16] [i_11] [i_14] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_11])) | (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) : (min((((/* implicit */long long int) (unsigned short)29571)), (arr_46 [i_11])))));
                            var_33 ^= ((/* implicit */short) max((((signed char) arr_50 [i_15] [i_12] [i_12])), (((/* implicit */signed char) ((((/* implicit */int) arr_52 [i_11 + 1] [i_12] [i_14] [i_15])) > (((/* implicit */int) arr_52 [i_14 - 1] [i_11] [i_11 - 2] [i_11])))))));
                        }
                    } 
                } 
            } 
        }
        arr_65 [i_11] [i_11] = ((/* implicit */unsigned char) arr_48 [i_11] [i_11]);
        var_34 = ((/* implicit */unsigned short) max((max((((/* implicit */signed char) arr_61 [i_11 - 2])), ((signed char)127))), (((/* implicit */signed char) arr_61 [i_11 - 2]))));
    }
    for (signed char i_17 = 2; i_17 < 10; i_17 += 2) 
    {
        var_35 = ((/* implicit */_Bool) (short)-10784);
        /* LoopSeq 1 */
        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            arr_71 [i_18] [i_18] [i_18] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [i_17]))))) ? (-1527344206) : (((((/* implicit */_Bool) (unsigned short)63155)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))))), (((/* implicit */int) arr_21 [i_18] [i_17] [i_17] [i_17]))));
            /* LoopSeq 1 */
            for (long long int i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_5 [i_17]))));
                    arr_76 [i_17] [i_18] = ((/* implicit */unsigned short) ((arr_73 [i_18] [i_19] [i_20]) | (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (((unsigned int) arr_57 [i_17] [i_17] [i_19])))))));
                }
                arr_77 [i_17] [i_19] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned short) (unsigned char)0))) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 131071LL)))))), ((!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))))));
                var_37 = ((/* implicit */long long int) min(((unsigned short)13748), (((/* implicit */unsigned short) (_Bool)1))));
                var_38 += ((/* implicit */signed char) ((4503530907893760LL) <= (((((/* implicit */_Bool) arr_74 [i_17 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_17 + 2]))) : (var_0)))));
            }
            var_39 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_18] [i_17] [i_17]))) : (((long long int) var_2))))));
        }
        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)17)))))));
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) arr_3 [i_17]))));
    }
}
