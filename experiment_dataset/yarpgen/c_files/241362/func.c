/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241362
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_0] [i_0])), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)-77))))));
                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned short i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) (unsigned short)35367);
                        arr_18 [i_2] [i_2] [i_4] [i_5] = ((((/* implicit */int) ((_Bool) ((unsigned int) arr_2 [i_5])))) < (((/* implicit */int) ((-3733691713934519746LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))))));
                        var_13 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((max((((/* implicit */long long int) arr_17 [i_2] [i_2] [(signed char)11] [i_3] [(signed char)11] [i_5])), (7503130403334981264LL))) - (7503130403334981233LL))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_6] [i_2] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_6] [i_7] [i_7] [i_7])))) ? (((/* implicit */int) max((var_0), (arr_21 [i_2] [i_6])))) : (((/* implicit */int) arr_21 [i_6 + 1] [i_6]))))) ? (((/* implicit */long long int) ((arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) & (arr_17 [i_7] [i_2] [i_2] [i_6 + 1] [i_6 - 1] [(signed char)4])))) : (-2067037339373017537LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                arr_29 [i_6] [i_6] [i_2] [i_8] [(_Bool)1] [i_6] = (signed char)-87;
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (signed char)119))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12388)) ? (((/* implicit */int) (unsigned short)40250)) : (((/* implicit */int) (short)30819))))) ? ((+(((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) var_2)))))) : ((-(((/* implicit */int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))))))))));
                                arr_30 [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned long long int) (signed char)-98);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-16816))));
        var_18 = ((/* implicit */_Bool) arr_27 [i_2] [i_2]);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((3198980998U), (((/* implicit */unsigned int) (_Bool)1)))))));
    }
    for (signed char i_10 = 2; i_10 < 9; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_21 [i_10 - 2] [(short)10])))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_32 [i_10 - 2] [i_11 + 1]))))), (((long long int) 290582263828091150LL))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)217)) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12377)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((((/* implicit */int) arr_22 [i_12])) & (((/* implicit */int) arr_5 [(signed char)14] [i_14]))))))) : (((unsigned int) ((((/* implicit */unsigned long long int) arr_44 [i_10] [i_10] [i_10] [i_10])) < (arr_0 [i_13])))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((614698126299073276ULL) ^ (((/* implicit */unsigned long long int) 3831365144U))))) ? (((/* implicit */unsigned long long int) 6041124178258526941LL)) : (9954805862506297808ULL))) < (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-35)) ? (arr_17 [i_10] [i_10] [10LL] [i_11] [(unsigned char)5] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (_Bool)1)))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 7; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_25 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_37 [(signed char)8])) << (((max((arr_7 [i_10]), (((/* implicit */long long int) (signed char)-102)))) - (3554674209487057446LL))))))));
                    var_26 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1032942650907587271ULL))))), (max((((-6174431233991808715LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33278)))))))));
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            {
                                arr_59 [i_10] [i_10] [(unsigned char)1] [i_17] [i_18] [i_15 + 1] [i_15] = ((/* implicit */long long int) var_6);
                                arr_60 [i_10] [i_15] [(_Bool)1] [i_15] [i_18] = ((/* implicit */unsigned char) arr_54 [i_10] [(signed char)3] [i_10] [i_15]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (((~(4276568743U))) - (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)61087)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_49 [i_10 + 1] [(unsigned short)2])) : (((/* implicit */int) arr_2 [i_10]))))))))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
    {
        var_28 = ((/* implicit */long long int) arr_16 [(unsigned char)12] [(unsigned short)11] [(_Bool)1] [i_19]);
        arr_64 [(unsigned char)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [i_19] [i_19])), (((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 18249444186369477011ULL)))) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_19]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4449))))))))));
    }
    var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)3747)) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_2)))) | (((/* implicit */int) ((signed char) (unsigned short)32309)))));
}
