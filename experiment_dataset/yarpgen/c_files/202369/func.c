/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202369
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
    var_10 |= ((/* implicit */_Bool) var_9);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_9)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            arr_7 [i_1] = ((long long int) ((((/* implicit */_Bool) (unsigned short)10385)) ? (((/* implicit */int) (signed char)117)) : (-756648226)));
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 1; i_3 < 24; i_3 += 4) 
                {
                    var_11 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (arr_8 [i_1] [i_2] [i_1]) : (((/* implicit */int) (signed char)126))))) ? (((((/* implicit */_Bool) -756648209)) ? (var_3) : (((/* implicit */int) (signed char)-120)))) : (min((((/* implicit */int) arr_0 [i_2])), (arr_12 [i_0] [i_0] [i_0]))))));
                    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 756648221)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (_Bool)0))));
                    arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3 - 1] = var_3;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_9))));
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) (signed char)1))))))))));
                        arr_19 [i_1] = ((/* implicit */int) ((long long int) var_1));
                    }
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((1971016611) != (((/* implicit */int) (signed char)122))))) < (((/* implicit */int) ((((/* implicit */int) var_0)) != (var_3))))));
                    arr_20 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((int) (-9223372036854775807LL - 1LL))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (0ULL))))));
                }
                arr_21 [i_1] [i_1] [(unsigned short)12] = ((/* implicit */long long int) ((-756648248) ^ (((/* implicit */int) (signed char)-103))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                arr_26 [i_0] [i_1] [i_6] = ((/* implicit */signed char) ((max((((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (2213705562289824185LL))), (((/* implicit */long long int) -5453756)))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((var_3) - (1616635407)))))) ? (((((/* implicit */_Bool) (unsigned short)3029)) ? (-1746147318) : (((/* implicit */int) (unsigned char)209)))) : (((((/* implicit */int) (signed char)63)) & (arr_12 [(signed char)23] [i_1 + 2] [i_6]))))))));
                arr_27 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((+(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) / (((long long int) var_9))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1]))) * (12056715141385546734ULL)))));
            }
            for (signed char i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                arr_31 [i_1] [i_1] [i_7] = arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [(unsigned char)6];
                var_16 = ((/* implicit */signed char) ((((756648203) | (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */int) (short)-4937)) == (((/* implicit */int) (signed char)-120)))))));
                var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_12 [i_0] [i_1] [i_7]), (((/* implicit */int) arr_6 [(unsigned short)14] [(signed char)10]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
            }
        }
        arr_32 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 8; i_8 += 3) 
    {
        var_18 = ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    var_19 = (-(((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8] [i_10] [i_8] [i_8])) ? (((/* implicit */int) var_8)) : (arr_3 [i_10]))));
                    var_20 = ((/* implicit */int) var_4);
                }
            } 
        } 
        var_21 = ((((/* implicit */int) (signed char)19)) == (((/* implicit */int) arr_0 [i_8])));
    }
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            arr_47 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (-1114754475)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 1) 
            {
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [i_11] [i_13 + 1] [i_13 - 1]))));
                arr_51 [i_11] [i_12] [i_12] [i_12] = ((/* implicit */int) var_7);
            }
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) (unsigned short)21997);
                var_24 = ((((/* implicit */_Bool) arr_49 [i_11] [i_11] [i_12] [i_14])) ? (arr_49 [i_11] [i_12] [i_12] [i_14]) : (arr_24 [i_14] [i_12] [i_11]));
                arr_54 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_25 [i_11] [i_12] [i_14]) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((arr_17 [i_14] [i_12] [i_12] [i_11]) && (((/* implicit */_Bool) -679942410)))))));
            }
            arr_55 [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) arr_44 [i_11]);
            var_25 = ((/* implicit */signed char) var_7);
            arr_56 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65061)) > (var_5)))) : (((/* implicit */int) var_0))));
        }
        /* vectorizable */
        for (unsigned short i_15 = 3; i_15 < 11; i_15 += 3) 
        {
            var_26 = (signed char)-94;
            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)40792))) && (((/* implicit */_Bool) var_0))));
            var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_11])) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_58 [i_15])) * (((/* implicit */int) var_6))))));
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_23 [i_11] [i_15] [i_11]))))) ? (((/* implicit */int) var_2)) : (-2147483629));
        }
        arr_59 [i_11] = ((((/* implicit */int) (signed char)-29)) >= (((/* implicit */int) var_1)));
        arr_60 [i_11] [i_11] = ((/* implicit */unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            for (short i_17 = 1; i_17 < 14; i_17 += 2) 
            {
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_16])) ? (((((/* implicit */int) ((((/* implicit */_Bool) -2147483638)) || (((/* implicit */_Bool) var_7))))) & (((/* implicit */int) ((_Bool) var_6))))) : (((/* implicit */int) var_6))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_11])) ? (min((((((/* implicit */int) (signed char)-112)) & (((/* implicit */int) var_4)))), (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))));
                    var_32 = (~(((/* implicit */int) (unsigned char)183)));
                    var_33 = ((/* implicit */int) var_1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 15; i_18 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) var_4))))));
                        var_35 = ((/* implicit */int) min((var_35), ((-2147483647 - 1))));
                        arr_69 [i_11] [i_11] [i_11] [(unsigned char)3] = ((/* implicit */unsigned int) ((1611868620) << (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) var_1))))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 14; i_19 += 2) 
    {
        arr_72 [i_19] = ((/* implicit */unsigned short) ((unsigned long long int) var_0));
        arr_73 [i_19] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) / (arr_8 [i_19] [i_19] [i_19])));
    }
    var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32587))) + (1593588478012551969ULL)))) && (((/* implicit */_Bool) min((var_3), (((/* implicit */int) min(((unsigned char)32), (((/* implicit */unsigned char) var_0))))))))));
}
