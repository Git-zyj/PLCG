/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53302
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
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_0 - 2] [i_4 - 1] [i_1]), (arr_4 [i_0 - 1] [i_4 - 2] [i_1])))) ? (((((((/* implicit */_Bool) (unsigned char)3)) || (((/* implicit */_Bool) (unsigned char)179)))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_7 [2LL] [i_1] [i_0 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                                arr_14 [i_0 - 2] [i_1] [i_2] [(signed char)13] [(unsigned short)4] = ((/* implicit */short) ((unsigned char) 18379682011157410310ULL));
                                arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [12ULL] |= ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (unsigned char)77)));
                                arr_16 [i_1] [i_1] [i_2] [18ULL] [i_4] = ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) arr_1 [i_0 - 1] [i_6 - 1])))), (((/* implicit */int) var_15))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_6 - 1] [i_1])))) ? (((arr_4 [i_0] [i_6 - 1] [i_1]) | (arr_4 [(short)21] [i_6 - 1] [i_1]))) : (arr_4 [i_0] [i_6 - 1] [i_1])));
                                var_18 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_1] [i_0] [12])))) ? (((/* implicit */int) arr_18 [i_1] [i_1])) : (((/* implicit */int) var_15))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)-19)) : (2114329725)))))) ? (arr_17 [i_0] [i_6 - 1] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2114329725))))))));
                                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-23728)))))) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) var_14)))), (min((((/* implicit */int) ((((/* implicit */_Bool) 2281259757506314317LL)) || (((/* implicit */_Bool) 15819285480595712568ULL))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [11U] [i_2] [i_2] [i_5])) : (((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((unsigned char) max((((/* implicit */long long int) var_9)), (arr_13 [i_7] [i_7] [i_7] [i_7] [i_8] [i_8] [i_9]))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-210785939)))) ? (arr_6 [i_7] [i_7] [i_9]) : (max((var_2), (var_4)))))) ? ((~(((/* implicit */int) arr_1 [i_7] [i_7])))) : (((((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) << ((((+(((/* implicit */int) var_8)))) - (139)))))));
                                arr_37 [i_7] [i_8] [i_8] [i_8] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_19 [i_7] [i_8] [i_9] [(unsigned short)5] [i_11])) | (((/* implicit */int) arr_21 [i_7] [8ULL] [i_9] [i_9] [i_9] [12ULL] [i_11])))) ^ ((~(((/* implicit */int) arr_19 [i_7] [i_7] [i_10] [(_Bool)1] [5ULL]))))));
                                var_23 |= ((/* implicit */signed char) min((((/* implicit */int) (unsigned short)9612)), (0)));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1419913369U)))))));
                                var_25 = (~((~(((/* implicit */int) arr_1 [i_10] [i_7])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [14] [(short)18] [i_7] [i_7]))));
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */int) ((max((-560063833586663493LL), (((/* implicit */long long int) (unsigned char)3)))) > (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_13 + 2] [i_12 + 1])))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1419913352U)) ? (((/* implicit */long long int) 2665520025U)) : (-2281259757506314318LL)))) ? ((+(((/* implicit */int) arr_19 [(unsigned short)10] [(signed char)9] [i_12 + 1] [i_7] [i_7])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_14] [i_13 + 2]))) < (-4783296804097310569LL)))))))))));
                        arr_48 [i_7] [(short)6] [i_7] [i_13 - 1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 837593217))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
            {
                for (short i_18 = 0; i_18 < 16; i_18 += 3) 
                {
                    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned long long int) arr_47 [(unsigned short)14] [i_16] [i_17] [i_18]);
                            arr_61 [(short)6] [i_16] [i_18] |= ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned short)42725)))))), (((arr_29 [i_15] [i_19]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))));
                            var_28 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) arr_47 [i_15] [(unsigned short)15] [i_16] [i_18])) ? (arr_41 [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_16] [i_16] [i_16] [i_16] [i_16])))))))));
                        }
                    } 
                } 
            } 
            var_29 ^= ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) -4783296804097310550LL)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (unsigned short)42725)))))), (((arr_53 [i_15] [4LL] [i_16]) * (((/* implicit */int) var_6))))));
        }
        for (signed char i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
            {
                for (unsigned char i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_1))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_33 [i_15] [i_20] [10U])), (arr_6 [i_15] [3LL] [i_23])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_15] [i_20] [(unsigned short)15] [i_22] [i_23]))) : (max((-4783296804097310569LL), (((/* implicit */long long int) (unsigned char)191)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_24 = 4; i_24 < 14; i_24 += 3) 
            {
                for (unsigned long long int i_25 = 1; i_25 < 14; i_25 += 3) 
                {
                    for (short i_26 = 0; i_26 < 16; i_26 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) (-(arr_24 [i_15])));
                            arr_80 [(short)7] [i_20] [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((var_5) & (((/* implicit */unsigned long long int) arr_4 [i_24 + 1] [i_24 - 2] [i_15])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_24 + 1] [i_24 + 1] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_4 [i_24 + 1] [i_24 + 2] [i_15]))))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2143203304)) ? (6176509184845560113LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30362))))))))));
                            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_31 [i_15] [0] [(short)0] [i_25]))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */int) var_3))));
            /* LoopNest 2 */
            for (unsigned char i_27 = 0; i_27 < 16; i_27 += 3) 
            {
                for (unsigned int i_28 = 0; i_28 < 16; i_28 += 1) 
                {
                    {
                        arr_87 [i_15] [i_15] [(_Bool)1] = ((/* implicit */long long int) var_2);
                        arr_88 [i_15] [i_15] = (~(((arr_59 [i_15] [i_15] [i_15] [i_15] [(unsigned short)11]) ? (((/* implicit */int) arr_59 [i_28] [i_27] [i_27] [i_20] [i_15])) : (((/* implicit */int) arr_30 [i_20] [i_27] [i_28])))));
                        var_36 = arr_41 [i_15] [i_15] [i_15];
                        var_37 = ((/* implicit */unsigned short) arr_40 [i_28] [i_27]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_29 = 0; i_29 < 16; i_29 += 1) 
            {
                for (unsigned int i_30 = 4; i_30 < 14; i_30 += 3) 
                {
                    {
                        arr_94 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) -1816790480)) ? (6463880217576010795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22811)))))));
                        arr_95 [i_15] [i_15] [i_29] [10U] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [(_Bool)1] [8U] [i_29])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)108))))) : (((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_15] [i_20] [i_20] [i_29] [i_30 - 2])))))))) <= (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))), (((((/* implicit */unsigned long long int) arr_57 [i_15] [(signed char)5])) ^ (arr_69 [4U] [4U] [i_29] [i_30])))))));
                        arr_96 [i_15] [i_15] [i_15] = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        }
        var_38 &= ((/* implicit */long long int) arr_85 [i_15] [i_15]);
    }
    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) 6621144702171153519ULL)) ? (((/* implicit */int) (unsigned short)22794)) : (((/* implicit */int) (unsigned short)22794))));
}
