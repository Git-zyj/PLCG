/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228122
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
    var_20 += ((/* implicit */_Bool) ((((long long int) ((((/* implicit */int) var_18)) * (((/* implicit */int) var_3))))) - (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                    {
                        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_2 [10ULL]) : (var_16)));
                        arr_10 [i_0] [i_1] [i_2] [(short)0] [(unsigned char)20] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [(unsigned short)18] [i_2] [i_3]);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_2 [i_1]))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_3] [(_Bool)1] [i_3] [(_Bool)1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : ((+(arr_5 [i_1])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (+(var_16)));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)113))))) != (((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) var_3);
                            arr_16 [i_1] [i_5] = ((/* implicit */long long int) (signed char)-102);
                            arr_17 [i_0] [(signed char)11] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((var_2), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)62)) && (((/* implicit */_Bool) var_4))))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_10))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_3] [i_5])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_15))))) / (((long long int) var_6))))));
                            arr_18 [i_1] [i_1] [(_Bool)1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) min((max((arr_5 [i_1]), (((/* implicit */long long int) ((((/* implicit */int) var_15)) % (((/* implicit */int) (unsigned char)62))))))), (((/* implicit */long long int) ((min((arr_11 [i_0] [i_5] [i_2] [i_3] [i_0] [i_5] [i_2]), (((/* implicit */long long int) arr_7 [i_1] [i_1] [i_3] [i_1])))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)6723))))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((7129326356792970535ULL) - (7129326356792970513ULL)))));
                        var_28 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)40)) & (((/* implicit */int) (unsigned short)65528))))));
                    }
                    var_29 = ((/* implicit */_Bool) (~(((((((/* implicit */int) var_18)) == (((/* implicit */int) arr_8 [i_2] [5U] [i_2] [i_2])))) ? (((arr_20 [i_0] [i_1] [i_2] [i_1]) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) var_14)))) : ((-(((/* implicit */int) var_5))))))));
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */int) (-(min((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 13; i_7 += 3) 
    {
        var_30 = ((/* implicit */unsigned long long int) ((arr_23 [i_7]) || (((/* implicit */_Bool) arr_2 [i_7]))));
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [12ULL])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_22 [(_Bool)0])))))));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(var_0))))));
    }
    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
        {
            arr_29 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) var_11);
            var_33 = ((((/* implicit */long long int) ((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (_Bool)1)))))) & (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_25 [i_8])), (arr_12 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-114)) == (((/* implicit */int) arr_8 [i_8] [i_8 + 1] [i_8] [i_8])))))) : ((~(arr_5 [i_9]))))));
            var_34 = ((/* implicit */unsigned short) (-(((unsigned int) (signed char)124))));
        }
        for (long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_35 += ((/* implicit */short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8] [i_12]))) + (var_9))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_3)))))))));
                            var_36 *= ((/* implicit */_Bool) var_4);
                            var_37 -= ((/* implicit */_Bool) arr_5 [i_11]);
                        }
                    } 
                } 
            } 
            var_38 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_8] [i_8 + 1] [i_10] [i_8 + 1])) : (((/* implicit */int) arr_8 [i_8] [i_8 - 1] [(signed char)19] [(signed char)19]))))));
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) var_0))));
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
        {
            var_40 |= ((/* implicit */_Bool) var_6);
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                for (unsigned short i_16 = 1; i_16 < 18; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_53 [i_8 + 2] [16LL] [15ULL] [16LL] [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) var_18);
                            var_41 -= var_15;
                        }
                    } 
                } 
            } 
            var_42 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)64262)) : (((/* implicit */int) (unsigned char)167))));
            /* LoopNest 2 */
            for (long long int i_18 = 1; i_18 < 17; i_18 += 3) 
            {
                for (signed char i_19 = 2; i_19 < 18; i_19 += 4) 
                {
                    {
                        arr_59 [i_8] [i_18] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14] [i_8 + 2]))) > (arr_5 [i_18])));
                        arr_60 [i_8 + 2] [i_18] [i_8 + 2] [i_19 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) var_15))));
                        var_43 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_19]))));
                        arr_61 [i_18] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                        arr_62 [i_18] [10ULL] [i_18 - 1] [i_19 - 2] = ((unsigned short) ((((/* implicit */int) arr_12 [i_18])) + (((/* implicit */int) (signed char)-101))));
                    }
                } 
            } 
        }
        arr_63 [i_8] = ((/* implicit */_Bool) var_5);
    }
}
