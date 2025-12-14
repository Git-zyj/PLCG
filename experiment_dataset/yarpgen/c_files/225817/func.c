/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225817
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 11271305835789192935ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_9))));
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)92)) - (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (var_0) : (7175438237920358666ULL))) : (((/* implicit */unsigned long long int) ((arr_13 [i_4] [i_3] [i_3] [6ULL] [i_1] [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (arr_13 [i_0] [i_1] [i_2 + 2] [i_0] [i_4] [i_4] [i_0])))) % (arr_3 [i_2 + 2])));
                            var_17 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_12))))) & (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                            var_18 = ((/* implicit */int) (~(var_3)));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_18 [i_0] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) 11271305835789192933ULL)))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_21 [i_0] = ((/* implicit */_Bool) arr_15 [(short)0] [i_6]);
                arr_22 [i_6] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (7175438237920358677ULL)));
                var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_0 [i_5]))))));
                arr_23 [i_0] [(unsigned char)8] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_16 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_5] [i_6] [i_6])))));
            }
            arr_24 [i_0] [i_5] = ((((/* implicit */int) arr_15 [i_0] [i_5])) << (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_19 [i_0] [i_5] [(unsigned short)6] [i_0])) : (((/* implicit */int) var_7)))));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (var_13)));
        }
        arr_26 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) var_1)))));
        arr_27 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [(_Bool)1]))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            var_21 = ((((/* implicit */_Bool) arr_32 [i_7] [i_8])) ? (((/* implicit */int) arr_32 [i_7] [11U])) : (((/* implicit */int) arr_32 [i_7] [(signed char)6])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (short i_10 = 2; i_10 < 14; i_10 += 1) 
                {
                    {
                        arr_38 [i_9] = ((/* implicit */_Bool) arr_35 [i_10 + 2] [i_10] [i_10 + 1] [i_10] [i_10]);
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_35 [i_7] [(unsigned short)15] [i_7] [i_7] [(unsigned char)7])) : (((/* implicit */int) arr_35 [i_7] [i_8] [i_9] [i_10] [i_10])))))));
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (arr_31 [8] [i_8] [i_8])))) ? (((/* implicit */int) arr_37 [10U] [i_7] [i_7] [(short)12])) : (((/* implicit */int) (_Bool)1))));
                        arr_39 [i_7] [i_8] [i_9] = ((/* implicit */_Bool) var_9);
                    }
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_24 -= ((/* implicit */unsigned int) (_Bool)1);
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) arr_34 [i_13] [i_13] [i_13]);
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11271305835789192923ULL)) ? (11271305835789192937ULL) : (((/* implicit */unsigned long long int) var_3)))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_7] [i_11])) || (((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_11] [i_7]))));
            var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11] [3U]))) : (8668386089594654537LL)));
        }
        for (unsigned int i_15 = 3; i_15 < 15; i_15 += 2) 
        {
            arr_54 [i_15] [i_15] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_32 [i_7] [i_7])) >> (((-1570362481) + (1570362481))))) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_14)))))));
            var_29 = ((/* implicit */unsigned int) (_Bool)1);
        }
        /* LoopSeq 3 */
        for (signed char i_16 = 1; i_16 < 15; i_16 += 4) 
        {
            arr_58 [i_7] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_7] [i_16] [i_16 + 1])) / (((/* implicit */int) var_4))))) + (((var_0) & (((/* implicit */unsigned long long int) var_3))))));
            arr_59 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_43 [(_Bool)1] [i_16] [(_Bool)1] [(_Bool)1])) - (((((/* implicit */_Bool) 7175438237920358671ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2672452520U)))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_64 [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-1893)) + (((/* implicit */int) var_15)))))));
            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_28 [i_17] [i_7])) - (var_0))))));
            /* LoopNest 2 */
            for (unsigned char i_18 = 1; i_18 < 12; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        arr_71 [i_19] [i_19] [i_18] [i_7] [4] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_33 [i_7] [i_19] [i_18 + 4]))));
                        arr_72 [i_7] [i_18 + 1] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_18 + 2] [i_18 + 3] [i_18 + 3])) > (((/* implicit */int) (short)32758))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((short) ((unsigned short) var_7))))));
                        arr_73 [i_17] [i_7] = ((/* implicit */short) ((arr_48 [i_18] [i_18] [i_18 + 2] [i_18 + 2] [i_18 + 3]) >> (((arr_48 [i_18 - 1] [i_18] [i_18 + 3] [i_18 - 1] [i_18]) - (18353069525095924547ULL)))));
                        var_32 -= ((/* implicit */unsigned char) ((arr_45 [i_7] [i_18 - 1] [i_18] [i_18] [i_18 + 2] [i_18 + 2]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_7] [i_7] [(unsigned short)7]))))))));
                    }
                } 
            } 
            arr_74 [i_17] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_7] [i_7])) ? (((/* implicit */int) arr_29 [(_Bool)1] [i_7])) : (((/* implicit */int) var_4))));
        }
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            var_33 = ((/* implicit */int) min((var_33), (((((1215109653) / (((/* implicit */int) (unsigned short)1086)))) / (((/* implicit */int) (_Bool)1))))));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((int) 3115122237U))) : (((7175438237920358677ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_7] [i_7])))))));
            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_29 [i_20 + 1] [i_20 + 1]))));
        }
        /* LoopNest 3 */
        for (short i_21 = 0; i_21 < 16; i_21 += 1) 
        {
            for (long long int i_22 = 3; i_22 < 13; i_22 += 4) 
            {
                for (short i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    {
                        arr_85 [i_7] [i_21] [i_7] [(unsigned char)14] = (!(((/* implicit */_Bool) arr_52 [i_22 - 1] [i_22 + 2] [i_22])));
                        arr_86 [2] [i_21] [i_21] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_75 [i_22] [i_21]))))))));
                        arr_87 [i_7] [i_21] [i_21] = ((/* implicit */short) (_Bool)1);
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_77 [i_21]))) ? (((((/* implicit */int) (short)476)) & (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_53 [i_7] [i_22 - 1] [i_21]))));
                    }
                } 
            } 
        } 
        arr_88 [i_7] = ((/* implicit */int) ((((/* implicit */int) arr_29 [i_7] [i_7])) == (((/* implicit */int) var_15))));
        arr_89 [i_7] |= ((/* implicit */unsigned short) ((-916527115) != (((/* implicit */int) arr_82 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
    }
    var_37 = ((/* implicit */short) var_1);
    var_38 *= ((/* implicit */unsigned long long int) ((((var_9) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)174)) && (((/* implicit */_Bool) 7175438237920358677ULL))))))) | (((/* implicit */int) var_2))));
    var_39 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3686924811U))))) : (((/* implicit */int) var_13)))) <= ((((_Bool)0) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) (signed char)-76)) | (((/* implicit */int) var_14))))))));
}
