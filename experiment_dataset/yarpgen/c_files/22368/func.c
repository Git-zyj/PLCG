/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22368
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)(-32767 - 1))))) >= ((~(((/* implicit */int) (short)-32760))))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (short)17785))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */int) ((unsigned char) arr_9 [i_3]));
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            arr_13 [i_4] = ((/* implicit */unsigned short) arr_8 [i_3] [i_4 + 2]);
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (unsigned short i_7 = 4; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (short)(-32767 - 1));
                            arr_22 [i_3] [i_4] [i_3] [i_5] [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) - (((/* implicit */int) (short)(-32767 - 1))))))));
                        }
                    } 
                } 
            } 
            arr_23 [i_3] [i_4] = ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) arr_14 [i_3] [(unsigned char)16])))));
            arr_24 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [1ULL] [1ULL])) ^ (((/* implicit */int) (signed char)-64))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7)))))));
        }
        arr_25 [15LL] = ((/* implicit */unsigned char) arr_9 [i_3]);
    }
    var_14 -= ((/* implicit */unsigned int) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_32 [i_8] [i_8] = ((/* implicit */short) arr_30 [i_8] [i_9] [i_8]);
            arr_33 [i_8] [i_8] = ((/* implicit */unsigned char) ((_Bool) arr_30 [i_8] [i_9] [i_9]));
        }
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned int) 8388608LL)))));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
            {
                for (unsigned int i_13 = 3; i_13 < 17; i_13 += 4) 
                {
                    {
                        var_16 += ((/* implicit */long long int) ((((((/* implicit */_Bool) min((arr_31 [i_13]), (((/* implicit */short) var_3))))) ? (arr_40 [(_Bool)1] [i_10 - 1] [i_13] [i_13 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32760))))) << ((((+(5129554632915918691LL))) - (5129554632915918673LL)))));
                        arr_43 [i_10] [i_11] [i_12] [i_13] = ((/* implicit */long long int) arr_16 [i_10 - 1] [i_10 - 1] [i_13 + 1] [i_13]);
                    }
                } 
            } 
        } 
        arr_44 [i_10] [i_10] = ((/* implicit */int) ((_Bool) (short)-32760));
        arr_45 [1ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_5) / (((/* implicit */long long int) arr_40 [i_10] [i_10] [i_10 - 1] [i_10 - 1])))))));
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))));
                        arr_53 [i_10] [i_14] [i_10] [i_16] = ((/* implicit */unsigned int) (_Bool)0);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                for (int i_18 = 1; i_18 < 19; i_18 += 1) 
                {
                    {
                        arr_61 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46555)) || (((/* implicit */_Bool) (unsigned short)44896))));
                        arr_62 [i_17] [i_14] [i_17] [i_18] = ((/* implicit */long long int) ((short) (unsigned char)156));
                    }
                } 
            } 
            var_18 &= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44898))))) ? (((/* implicit */int) ((unsigned short) -8388609LL))) : (((/* implicit */int) max((arr_31 [i_10 - 1]), (((/* implicit */short) arr_15 [i_10 - 1] [i_10 - 1] [i_10 - 1]))))));
            var_19 += ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    {
                        arr_68 [i_10] [(_Bool)1] [i_19] [(unsigned short)14] = ((/* implicit */unsigned short) max((((var_5) + (((/* implicit */long long int) arr_20 [i_10 - 1] [i_14] [i_19] [(unsigned char)15] [i_10 - 1])))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10]))) >= (3162570490935397517LL))))));
                        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_20]))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 1) 
        {
            arr_72 [i_10] [i_21] = ((/* implicit */unsigned short) min(((_Bool)0), (((_Bool) (signed char)-15))));
            /* LoopNest 3 */
            for (unsigned short i_22 = 0; i_22 < 20; i_22 += 1) 
            {
                for (unsigned short i_23 = 0; i_23 < 20; i_23 += 2) 
                {
                    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        {
                            arr_80 [i_10 - 1] [i_10 - 1] [10LL] [i_10 - 1] [i_10] = ((/* implicit */short) arr_48 [i_10] [i_10 - 1]);
                            var_21 = ((short) ((((/* implicit */_Bool) min((arr_48 [i_22] [i_24]), (((/* implicit */unsigned long long int) arr_11 [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) : (min((((/* implicit */long long int) var_1)), (var_5)))));
                            arr_81 [i_22] [i_21] [i_22] [i_22] [i_22] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)44552)), ((-(((((/* implicit */unsigned long long int) var_10)) / (72057594037927935ULL)))))));
                            arr_82 [i_10] [i_10] [i_22] [i_23] [i_24] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (arr_74 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))) ^ (((/* implicit */int) ((unsigned short) -8987041351665119006LL)))));
                            arr_83 [i_21] [i_22] = ((/* implicit */short) arr_38 [i_10] [i_21] [i_21]);
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_25 = 3; i_25 < 11; i_25 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)52702))))))) ? (max((((unsigned long long int) arr_40 [i_25 - 3] [i_25] [i_25 + 3] [16])), (((/* implicit */unsigned long long int) arr_69 [i_25 + 3])))) : (((/* implicit */unsigned long long int) ((arr_75 [i_25] [i_25 + 1] [i_25] [i_25]) << (((/* implicit */int) arr_78 [i_25 + 3] [i_25 + 3] [i_25 + 3] [i_25 + 2] [i_25])))))));
        /* LoopNest 3 */
        for (long long int i_26 = 2; i_26 < 11; i_26 += 1) 
        {
            for (short i_27 = 0; i_27 < 14; i_27 += 2) 
            {
                for (short i_28 = 0; i_28 < 14; i_28 += 1) 
                {
                    {
                        arr_96 [i_26] [11] = ((/* implicit */unsigned int) ((short) -1LL));
                        var_23 &= ((/* implicit */int) (((-(max((3902218828U), (((/* implicit */unsigned int) (signed char)-119)))))) >> (((/* implicit */int) var_3))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_29 = 3; i_29 < 11; i_29 += 1) /* same iter space */
    {
        arr_101 [(_Bool)1] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)144))))));
        arr_102 [i_29] [i_29 - 1] = ((/* implicit */unsigned short) var_6);
    }
    /* LoopSeq 1 */
    for (signed char i_30 = 0; i_30 < 21; i_30 += 2) 
    {
        /* LoopNest 3 */
        for (short i_31 = 0; i_31 < 21; i_31 += 2) 
        {
            for (short i_32 = 0; i_32 < 21; i_32 += 4) 
            {
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    {
                        arr_114 [i_30] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 840894144U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (37448018U)));
                        arr_115 [(signed char)5] [i_32] [i_33] [(unsigned char)20] [i_31] [i_31] &= ((/* implicit */long long int) (~((+(arr_104 [i_30])))));
                    }
                } 
            } 
        } 
        arr_116 [17] = var_7;
        var_24 = ((/* implicit */short) arr_103 [i_30]);
        arr_117 [i_30] = ((/* implicit */signed char) arr_30 [i_30] [i_30] [i_30]);
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(var_10))), (((((/* implicit */_Bool) arr_105 [i_30] [i_30])) ? (((/* implicit */long long int) ((/* implicit */int) arr_109 [i_30] [i_30] [i_30] [i_30]))) : (0LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_30] [i_30] [i_30])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_30])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((-1LL) - (((/* implicit */long long int) ((/* implicit */int) arr_28 [22LL] [i_30] [i_30]))))) : (((/* implicit */long long int) arr_110 [(_Bool)1] [7] [i_30] [(_Bool)1]))))));
    }
}
