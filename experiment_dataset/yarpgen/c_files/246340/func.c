/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246340
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 3362754887U))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                arr_10 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_13 -= arr_12 [i_4];
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0])))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3339769320U)))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) 3339769320U)))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_8)))) >= (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)45)))))))));
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (955197980U) : (arr_7 [i_0] [i_0] [i_0])));
                var_17 &= ((/* implicit */unsigned int) ((134217728U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-2032)))));
            }
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                arr_22 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_18 [i_0]));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (((((_Bool)0) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) var_6)))) % (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_6])))))));
            }
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                var_19 -= var_10;
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_8 + 2] [i_7] [i_1] [i_1])) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [(unsigned char)17] [i_0])))))))));
                    var_21 = ((/* implicit */unsigned int) arr_0 [i_0]);
                    arr_27 [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) < (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) arr_26 [i_0]))));
                }
                var_22 &= ((/* implicit */short) arr_11 [i_0] [i_0] [i_7] [i_0]);
            }
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
            arr_28 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1])) | (var_12))));
            var_24 = ((/* implicit */unsigned char) 955197980U);
        }
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 21; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12)))))));
                            arr_42 [i_12] [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((955197975U) + (3820024320U)));
                            arr_43 [i_9] [i_10] [i_10] [i_0] |= ((/* implicit */short) ((932212436U) == (955197975U)));
                        }
                        arr_44 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_12 [i_0]);
                        arr_45 [i_0] [i_9] [i_0] [i_11] [i_9] = ((/* implicit */unsigned short) (-(arr_35 [i_0] [i_9] [i_10] [i_11])));
                        var_26 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_11] [i_10] [i_9] [i_0]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 23; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                for (unsigned int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                        arr_52 [i_0] [i_13] [i_0] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((unsigned char) arr_5 [i_13])))));
                        arr_53 [22U] [i_0] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3800669711U)) ? (474942975U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-378)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_15] [i_14] [i_13] [i_0]))))) : (var_12)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
        {
            arr_58 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_16] [i_16] [i_0] [i_0])) > (((/* implicit */int) arr_8 [i_0]))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) 
            {
                for (signed char i_18 = 2; i_18 < 22; i_18 += 3) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) arr_3 [i_0])))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_0] [i_16] [i_0] [i_18 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_23 [i_18] [i_0] [i_0])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (short i_19 = 0; i_19 < 23; i_19 += 4) 
            {
                arr_65 [i_0] [i_16] [i_16] [i_19] = ((/* implicit */unsigned int) arr_39 [i_19] [i_19] [i_0] [i_19] [i_19]);
                var_31 = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (unsigned short i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                var_32 = ((/* implicit */unsigned int) var_9);
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3339769301U)) ? (3339769318U) : (3339769333U)));
            }
            for (short i_21 = 2; i_21 < 22; i_21 += 1) /* same iter space */
            {
                var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1022)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (short)-13564))));
                var_35 += ((/* implicit */unsigned int) arr_15 [i_21]);
                var_36 &= ((/* implicit */unsigned int) (short)-19370);
            }
            for (short i_22 = 2; i_22 < 22; i_22 += 1) /* same iter space */
            {
                var_37 = (short)16497;
                arr_76 [i_0] [i_16] [i_16] [i_0] = ((/* implicit */unsigned int) var_7);
            }
            var_38 = ((/* implicit */signed char) (+(((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [6U]))));
        }
        for (short i_23 = 0; i_23 < 23; i_23 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned int) arr_57 [i_0] [i_0]);
            var_40 = ((/* implicit */unsigned int) (unsigned short)16055);
            /* LoopSeq 2 */
            for (unsigned int i_24 = 0; i_24 < 23; i_24 += 1) 
            {
                arr_83 [i_0] [i_0] [i_0] = arr_56 [i_0] [i_23] [i_24];
                arr_84 [i_0] [(signed char)7] [i_23] [i_0] = ((/* implicit */short) ((unsigned short) 396365122U));
            }
            for (unsigned char i_25 = 0; i_25 < 23; i_25 += 4) 
            {
                var_41 = ((/* implicit */unsigned int) min((var_41), (474942957U)));
                var_42 = ((/* implicit */short) ((unsigned int) arr_72 [i_0] [i_23] [i_25] [i_0]));
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) arr_60 [i_25] [i_0]))));
            }
            /* LoopNest 2 */
            for (unsigned int i_26 = 0; i_26 < 23; i_26 += 4) 
            {
                for (unsigned int i_27 = 0; i_27 < 23; i_27 += 1) 
                {
                    {
                        arr_92 [i_0] [i_0] [i_23] [i_26] [i_23] = ((/* implicit */unsigned long long int) (signed char)41);
                        arr_93 [i_0] [i_26] [i_0] [i_23] [i_0] = ((/* implicit */short) (~(var_10)));
                        arr_94 [i_0] [i_0] [11U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & (((/* implicit */int) (unsigned short)26283))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_28 = 1; i_28 < 21; i_28 += 1) 
    {
        arr_98 [i_28] [i_28] = ((/* implicit */unsigned int) max((((((/* implicit */int) var_11)) - (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_24 [(unsigned char)12])))))), ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
        var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_68 [i_28] [i_28] [22U] [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10)))))) * (((((((/* implicit */_Bool) 3589257069U)) || (((/* implicit */_Bool) var_9)))) ? (474942957U) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (3718074575U)))))));
        var_45 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))), (max((((/* implicit */unsigned int) max(((unsigned short)39252), (((/* implicit */unsigned short) arr_3 [i_28]))))), (((unsigned int) 18446744073709551587ULL))))));
        var_46 = ((/* implicit */unsigned short) var_12);
    }
    for (short i_29 = 2; i_29 < 15; i_29 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_30 = 0; i_30 < 17; i_30 += 3) 
        {
            for (unsigned int i_31 = 0; i_31 < 17; i_31 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_32 = 0; i_32 < 17; i_32 += 3) /* same iter space */
                    {
                        arr_112 [i_29] [i_30] [i_32] [i_32] = ((/* implicit */unsigned int) (unsigned char)245);
                        arr_113 [i_29] [i_30] [i_32] [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) * ((-(((((/* implicit */_Bool) arr_68 [10U] [i_29 - 2] [i_29] [i_32])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))));
                    }
                    for (unsigned char i_33 = 0; i_33 < 17; i_33 += 3) /* same iter space */
                    {
                        var_47 *= ((/* implicit */unsigned int) var_3);
                        var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) min((((((/* implicit */int) ((3362754913U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) / (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (3820024310U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_33] [i_30] [i_30])))))) ? (((/* implicit */int) ((unsigned char) 611419152U))) : (((((/* implicit */int) arr_17 [17U] [i_30] [i_31] [i_33])) - (((/* implicit */int) var_9)))))))))));
                        var_49 += ((/* implicit */short) (((+(arr_7 [i_29 - 1] [i_31] [i_29 - 1]))) - (max((((/* implicit */unsigned int) arr_71 [i_29] [i_29] [i_29 + 2])), (arr_50 [i_29 - 2] [i_29] [i_29 - 1] [i_29 + 2])))));
                    }
                    var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((3362754887U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_74 [i_31] [i_31] [i_31]))))), (min((var_0), (((/* implicit */unsigned int) (unsigned short)12179)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) != (29ULL))))))))))));
                }
            } 
        } 
        var_51 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_74 [i_29] [i_29 - 2] [i_29 + 1]))))), (max((((/* implicit */unsigned int) arr_74 [i_29] [i_29 + 1] [i_29])), (474942957U))));
    }
    var_52 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_10), (((/* implicit */unsigned long long int) (short)-24214)))))))));
}
