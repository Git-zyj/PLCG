/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208258
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_3))))));
                        arr_11 [(_Bool)1] [i_1] [i_0] &= ((arr_4 [i_0] [i_2 + 3] [i_2] [i_2 + 2]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 1] [i_2] [i_2 + 1])) ? (arr_9 [i_0] [i_2 + 2] [i_2] [i_2 + 1]) : (3591360906992793515LL)))));
                        arr_12 [i_0] [(unsigned short)3] [i_2 + 1] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0])) ? (arr_9 [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) (((+(arr_1 [i_0] [i_0]))) ^ (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])))));
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0]))))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_1 [i_4] [i_4])))) ? (max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_6] [i_6])) : (((/* implicit */int) (short)-5228)))))) : (((/* implicit */int) var_4))));
                        var_12 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_5] [i_6] [(_Bool)1]))) : (arr_18 [i_4] [i_4]))));
                    }
                } 
            } 
        } 
        arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (max((var_6), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_4] [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (((var_6) % (((/* implicit */long long int) ((/* implicit */int) (short)-5228)))))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4] [i_4])) ? (arr_22 [i_4] [i_4] [i_4] [i_4]) : (arr_22 [i_4] [i_4] [i_4] [i_4])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (max((arr_22 [i_4] [i_4] [i_4] [i_4]), (arr_22 [i_4] [i_4] [i_4] [i_4])))));
        var_14 += ((/* implicit */int) arr_14 [i_4]);
        arr_24 [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [6ULL]))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_8]))));
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_30 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_8] [i_9]))) < (-8232435456356946041LL)));
            arr_31 [i_8] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8] [i_9])) ? (arr_26 [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64659)))));
        }
        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_8]))));
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (long long int i_11 = 2; i_11 < 16; i_11 += 3) 
            {
                {
                    var_16 *= ((/* implicit */unsigned long long int) (-(arr_36 [i_8] [i_11 - 1] [(signed char)0])));
                    var_17 = ((/* implicit */signed char) ((4200363127952862177ULL) - (((/* implicit */unsigned long long int) arr_32 [i_10] [i_11 - 2]))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((arr_25 [i_8]) ? (arr_32 [i_8] [i_8]) : (((/* implicit */long long int) var_2)))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 4) 
    {
        for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            for (unsigned short i_14 = 3; i_14 < 12; i_14 += 4) 
            {
                {
                    arr_48 [i_12] [i_13] [i_14 + 2] = ((/* implicit */int) (((~(((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) ((((/* implicit */int) (short)5228)) >= (((/* implicit */int) (_Bool)1)))))));
                    arr_49 [i_12 + 1] [i_13] [(unsigned short)10] = ((/* implicit */signed char) max(((~(((/* implicit */int) (signed char)116)))), ((+(((/* implicit */int) ((((/* implicit */int) (signed char)3)) != (((/* implicit */int) arr_46 [i_12] [i_13])))))))));
                    arr_50 [i_12] [i_13] [i_14 + 2] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)64649)) && ((!(((/* implicit */_Bool) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_12] [i_12 + 1])) ? (((((/* implicit */long long int) -770408228)) | (-4141279450987119483LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1)))))))) : ((~(((((/* implicit */unsigned long long int) arr_45 [i_12] [i_12] [i_13] [i_12])) * (11156810095132922932ULL)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_15 = 1; i_15 < 17; i_15 += 4) 
    {
        arr_53 [i_15 + 1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_51 [i_15 - 1] [i_15])) ? (arr_51 [i_15 + 1] [i_15 + 1]) : (((/* implicit */int) (short)-7401)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_15] [i_15])) ? (arr_51 [i_15] [i_15]) : (arr_52 [i_15] [i_15 - 1])))) ? (((((/* implicit */int) (signed char)-55)) - (arr_52 [i_15] [i_15]))) : ((-(arr_52 [i_15] [i_15])))))));
        var_19 += ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)-64)))) <= (((((/* implicit */_Bool) ((arr_52 [i_15] [(_Bool)0]) - (var_5)))) ? (((/* implicit */int) ((arr_51 [i_15] [i_15]) >= (arr_52 [i_15] [i_15])))) : (((-251713607) - (arr_52 [i_15] [i_15 + 1])))))));
        arr_54 [i_15] = ((/* implicit */short) max((((arr_51 [i_15 + 1] [i_15 - 1]) << (((arr_51 [i_15 + 1] [i_15]) - (784463393))))), (min((((/* implicit */int) (_Bool)0)), (arr_51 [i_15] [(signed char)2])))));
    }
    /* vectorizable */
    for (unsigned short i_16 = 3; i_16 < 8; i_16 += 4) 
    {
        arr_59 [i_16] [i_16] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_16 + 1] [i_16]))));
        /* LoopSeq 1 */
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((7825112061414374142LL) / (var_6)));
                        /* LoopSeq 1 */
                        for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_17] [(short)8] [i_16] [i_20])) ? (arr_45 [i_20] [i_20] [i_16] [i_20]) : (arr_45 [i_16 - 1] [i_17] [i_16] [i_18])));
                            arr_72 [i_16] [i_17] [i_16] [i_17] [i_16] = ((arr_18 [i_16] [i_17]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121)))))));
                            var_22 = ((/* implicit */int) ((unsigned char) arr_38 [i_16 - 3]));
                            arr_73 [i_20] [i_17] [i_16] [i_19] [i_20] = ((/* implicit */signed char) -1583063975);
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                for (int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    for (unsigned char i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_16 - 1] [i_16 - 1] [i_21] [i_17])) ? ((~(arr_20 [i_16 - 2] [i_17] [i_21]))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_42 [i_16 - 3] [(unsigned short)10] [i_16 - 3])) : (((/* implicit */int) var_9))))))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_60 [i_16 - 2] [i_16 - 2] [i_16])) < (((/* implicit */int) arr_60 [i_16] [i_16 + 2] [i_16 + 1]))));
                            arr_81 [i_16] [i_17] [i_17] [i_16] [i_23] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_16 - 3] [i_16 - 3] [i_22]))));
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (3244079232398193025LL)));
        /* LoopSeq 3 */
        for (long long int i_24 = 0; i_24 < 10; i_24 += 3) 
        {
            var_26 &= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_16 + 2]))) : (3686145496U));
            var_27 = ((((/* implicit */_Bool) arr_36 [i_16] [i_16] [i_16 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_70 [i_16] [i_16 + 2] [i_16] [i_16] [i_16]))));
            arr_86 [i_16] [i_24] = ((/* implicit */unsigned char) (+(arr_71 [i_16] [i_24] [i_16 - 1] [i_24])));
        }
        for (unsigned char i_25 = 2; i_25 < 7; i_25 += 2) 
        {
            arr_91 [i_16] [i_16] = ((/* implicit */long long int) arr_77 [i_16 - 1] [i_16] [i_25] [i_25 + 2]);
            arr_92 [i_16] = ((/* implicit */unsigned char) arr_52 [i_25 - 1] [i_16 + 2]);
            var_28 = ((/* implicit */int) arr_16 [i_25 - 2] [i_25 - 2] [i_25 - 1]);
            arr_93 [i_16] [i_16] [i_25 - 1] = ((/* implicit */short) (-(-755517405)));
        }
        for (int i_26 = 0; i_26 < 10; i_26 += 1) 
        {
            var_29 = ((/* implicit */unsigned char) ((((-3287982773228517510LL) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_4)) ? (arr_51 [i_26] [i_16]) : (770408218))) - (784463372)))));
            arr_96 [i_16] = ((/* implicit */signed char) arr_85 [i_26]);
            /* LoopNest 3 */
            for (unsigned char i_27 = 3; i_27 < 7; i_27 += 1) 
            {
                for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 1) 
                {
                    for (long long int i_29 = 4; i_29 < 9; i_29 += 4) 
                    {
                        {
                            arr_103 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_32 [i_16] [i_16]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254)))))) ? (arr_22 [i_29 - 4] [i_29 - 2] [i_29 - 2] [i_29 - 1]) : ((-(((/* implicit */int) arr_94 [i_16]))))));
                            var_30 += ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                        }
                    } 
                } 
            } 
        }
    }
    var_31 = ((/* implicit */unsigned short) ((var_2) < (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
}
