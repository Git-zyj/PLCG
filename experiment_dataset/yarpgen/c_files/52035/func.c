/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52035
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (short)-2134))))))) ? (((/* implicit */long long int) ((((/* implicit */int) max(((short)-28343), ((short)28342)))) ^ (((/* implicit */int) max(((short)28316), ((short)-28344))))))) : (((arr_0 [i_0]) ? (arr_2 [i_1] [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49961)))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (-(arr_2 [i_1] [i_1 + 1] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 4; i_3 < 21; i_3 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3 - 3] [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) (unsigned short)49961))))), (((((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_3))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28346))) & (12U))))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_5] [i_6 - 3] [i_4])), (-4LL)))) ? (((/* implicit */int) arr_16 [13U] [i_3] [i_3] [i_3] [i_3 + 2] [15] [i_3 + 2])) : (((/* implicit */int) (short)28342))));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [3U])) ? (max((min((((/* implicit */unsigned int) (unsigned char)138)), (4294967289U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_9 [i_2] [i_5]))))))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        arr_20 [i_7] [i_7] = ((/* implicit */short) arr_3 [(unsigned short)8] [i_7] [(unsigned short)8]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15585)) ? (35184372084736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109)))));
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_13 [i_8 - 2] [i_8] [i_8]))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) (signed char)-49);
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 3; i_11 < 21; i_11 += 1) 
                    {
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_11 [i_8] [i_10] [8ULL]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)49981)) <= (((/* implicit */int) (short)-28337)))))));
                        var_19 = arr_29 [(_Bool)1] [i_8 - 1];
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_33 [i_8] [i_9] [i_10] [i_12] = ((/* implicit */short) ((9079256848778919936ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28348)))));
                        var_20 *= ((/* implicit */unsigned char) ((3128213367U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-3327)) == (((/* implicit */int) (short)0))))))));
                        var_21 = ((/* implicit */long long int) (~(arr_27 [i_10])));
                        arr_34 [i_12] [i_10] [i_10] [i_8] = (short)-28349;
                    }
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        arr_37 [i_10] [i_9] [i_10] [i_10] [i_8] [i_10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_10 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8 - 1] [14ULL] [14ULL] [i_13])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8313817633481045419LL)) ? (arr_24 [i_8] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_9] [i_10] [i_9] [i_8])))))) : (arr_14 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8])));
                        arr_38 [i_13] [i_10] [i_10] [i_8] = ((/* implicit */long long int) (short)28369);
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_8 + 1])) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_23 [i_8 + 1])) : (((/* implicit */int) (short)-28327)))))));
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            for (unsigned int i_15 = 1; i_15 < 22; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 2; i_16 < 22; i_16 += 3) 
                    {
                        var_23 *= ((/* implicit */int) ((arr_12 [i_16 - 2] [i_14] [i_8 - 2]) / (arr_12 [i_16 - 2] [i_14] [i_8 - 2])));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_16])) / (((/* implicit */int) (unsigned short)57344))))) ? (((((/* implicit */_Bool) 9002801208229888ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8 - 2] [i_8] [i_15] [i_16 - 1] [i_16]))) : (8313817633481045430LL))) : (((/* implicit */long long int) ((arr_11 [i_8] [i_15] [i_16]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192)))))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_14] [4LL] [i_8 - 1])) ? (10401448758844248813ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)49961)))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_21 [i_8]))));
                        var_27 = ((/* implicit */unsigned int) 18446744073709551610ULL);
                    }
                    arr_47 [i_15] [i_14] [i_14] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8349908825987991912LL)) ? (-5586416176327526758LL) : (((/* implicit */long long int) var_0))))) ? (arr_27 [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)99))) <= (-8313817633481045419LL))))));
                }
            } 
        } 
    }
    for (short i_17 = 2; i_17 < 22; i_17 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) arr_16 [i_17] [i_17 - 1] [i_17 + 1] [i_17] [i_17] [i_17] [i_17]);
        var_29 = (unsigned short)54158;
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (short)28348)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_40 [i_17 - 2])) : (((/* implicit */int) arr_48 [i_17 + 1]))))) != (((((((/* implicit */_Bool) var_10)) ? (-8313817633481045426LL) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [(short)2]))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_17 - 2] [i_17])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) arr_15 [i_17] [i_17] [i_17] [i_17] [14])))))))));
        var_31 = ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_17 - 2] [i_17 - 2] [i_17]))) ? (((var_2) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-28347)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_17 + 1] [i_17] [i_17] [i_17] [i_17] [i_17 - 1])) ? (arr_45 [i_17 - 1] [i_17] [i_17] [i_17] [i_17 - 2] [i_17 + 1]) : (arr_45 [i_17] [i_17] [i_17] [i_17 + 1] [i_17 - 1] [(unsigned char)5])))));
    }
    for (short i_18 = 2; i_18 < 22; i_18 += 2) /* same iter space */
    {
        arr_55 [(signed char)21] [i_18] = ((/* implicit */_Bool) (short)31);
        /* LoopNest 3 */
        for (signed char i_19 = 0; i_19 < 23; i_19 += 2) 
        {
            for (unsigned short i_20 = 3; i_20 < 22; i_20 += 3) 
            {
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    {
                        arr_62 [i_21] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [i_18 - 2])), (0U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_20 - 3] [i_18 - 1] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)28346)))) : (4922928677671348492LL)))) : (((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_20]))) : (((((/* implicit */unsigned long long int) arr_11 [i_21] [i_18 + 1] [i_18])) * (var_5)))))));
                        var_32 *= ((/* implicit */short) arr_50 [i_18] [i_21]);
                    }
                } 
            } 
        } 
    }
}
