/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198630
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_3);
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */_Bool) var_2);
                        var_12 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)45085)) : (((/* implicit */int) var_10))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 3) 
        {
            arr_18 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -268435456)) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_0)))));
            var_13 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16065397685193496191ULL)) ? (((/* implicit */int) (unsigned short)55582)) : (((/* implicit */int) (unsigned char)244))))) - (18446744073709551615ULL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                arr_22 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned int) (unsigned char)235);
                var_14 += ((/* implicit */short) (-(((/* implicit */int) (unsigned char)148))));
            }
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_17 [i_5]))));
            arr_23 [i_5] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (short)-11524)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) : (arr_21 [i_5 - 2] [i_5 - 2] [i_5 - 2]))));
        }
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_3))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_17 = ((/* implicit */signed char) var_1);
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!((!(((/* implicit */_Bool) (-(2381346388516055424ULL)))))))))));
        /* LoopSeq 4 */
        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) max(((unsigned char)23), ((unsigned char)175)))) ? ((+(((/* implicit */int) arr_30 [i_7] [i_8])))) : (((/* implicit */int) (unsigned short)40274)));
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (unsigned char i_11 = 1; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned short)65535))))), ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) 268435433)) : (max((((((/* implicit */_Bool) (unsigned char)23)) ? (var_0) : (18014261070528512ULL))), (var_3)))));
                            var_21 = ((/* implicit */signed char) var_0);
                            arr_40 [i_7] [i_11] [i_9] [i_9] [i_9] [i_8] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9812588089092722944ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (16065397685193496191ULL))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (unsigned char)201);
            var_23 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)201)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551610ULL)) && (((/* implicit */_Bool) var_6)))))) : (((2984397437U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_7] [i_8] [i_8])))))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 3; i_12 < 24; i_12 += 1) 
        {
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) 2381346388516055425ULL))));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 22; i_13 += 4) 
            {
                for (unsigned char i_14 = 1; i_14 < 24; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)36)))))));
                            arr_50 [i_13] [i_12] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_47 [i_13 + 1] [i_12 - 2] [i_12] [i_12])) > (((/* implicit */int) arr_47 [i_13 - 1] [i_12 - 3] [i_12] [i_7]))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)23)), ((short)8)))) ^ (((/* implicit */int) arr_41 [i_16]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 24; i_19 += 3) 
                    {
                        {
                            arr_63 [i_7] [i_7] [i_16] [i_7] = ((((/* implicit */int) arr_62 [i_7] [i_16] [i_16] [i_16] [i_7])) > (((/* implicit */int) var_9)));
                            arr_64 [i_7] [i_7] [i_7] [i_7] [i_7] [i_16] = ((/* implicit */unsigned short) var_7);
                            var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) ((-268435431) ^ (((/* implicit */int) (unsigned short)7082)))))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 1265263548U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 25; i_21 += 2) 
                    {
                        {
                            var_29 += ((/* implicit */int) var_0);
                            var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */int) (short)-8)) & (((/* implicit */int) (unsigned short)30349))))));
                        }
                    } 
                } 
            }
            arr_69 [i_16] = ((/* implicit */long long int) var_9);
        }
        for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) 
        {
            arr_74 [i_7] = ((/* implicit */long long int) arr_53 [i_22] [i_7] [i_22]);
            var_31 = arr_31 [i_7] [i_7] [i_7] [i_7];
            arr_75 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) 4647018243061891085LL);
            var_32 |= arr_24 [i_7];
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_23 = 0; i_23 < 16; i_23 += 3) 
    {
        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_7))));
        var_34 = ((/* implicit */unsigned int) var_2);
        var_35 += ((/* implicit */unsigned short) min((max((var_3), (((/* implicit */unsigned long long int) min((var_1), (var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)62))))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)179)) <= (((/* implicit */int) var_8))))))))));
        var_36 = ((/* implicit */signed char) var_6);
    }
    /* LoopNest 3 */
    for (int i_24 = 2; i_24 < 15; i_24 += 2) 
    {
        for (unsigned char i_25 = 0; i_25 < 16; i_25 += 4) 
        {
            for (unsigned short i_26 = 0; i_26 < 16; i_26 += 1) 
            {
                {
                    var_37 = var_7;
                    /* LoopSeq 1 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        arr_89 [i_27] [i_26] [i_24] [i_24] [i_24] |= ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (max((((/* implicit */unsigned int) var_4)), (arr_20 [i_27] [i_27] [i_27] [i_27]))));
                        arr_90 [i_26] = ((/* implicit */unsigned int) var_9);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_28 = 0; i_28 < 16; i_28 += 1) 
                    {
                        for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 2) 
                        {
                            {
                                var_38 ^= ((/* implicit */long long int) max((((((/* implicit */int) var_10)) | (((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) arr_81 [i_26])))));
                                var_39 -= var_4;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_30 = 1; i_30 < 17; i_30 += 3) 
    {
        for (unsigned long long int i_31 = 0; i_31 < 21; i_31 += 4) 
        {
            {
                var_40 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 172766719))))), (min((var_0), (((/* implicit */unsigned long long int) (_Bool)1))))));
                arr_100 [i_30] [i_30] [i_30] = (((_Bool)1) ? (-71661638) : (((/* implicit */int) (short)-2735)));
                var_41 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */signed char) (_Bool)0)))))));
            }
        } 
    } 
}
