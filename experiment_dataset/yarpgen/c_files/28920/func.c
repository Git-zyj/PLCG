/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28920
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), ((+(-8640472637392463371LL))))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13))))));
                    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52679))))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (17696502774185838364ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)10)) > (((/* implicit */int) (signed char)100)))))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)1023)), (((((/* implicit */_Bool) (unsigned short)12858)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_6 [(short)8] [i_0] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)52678);
                        arr_13 [i_0] [i_1 + 1] [(unsigned short)0] [i_0] = ((/* implicit */short) 9223372036854775776LL);
                        arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-111))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((17384591254306783228ULL), (((/* implicit */unsigned long long int) (unsigned short)12851)))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1 - 1]))))) ? (min((((/* implicit */int) (unsigned short)12858)), (0))) : (((/* implicit */int) ((unsigned short) arr_10 [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) var_0)), ((+(var_13)))))));
    var_23 = ((/* implicit */int) (~(((((/* implicit */_Bool) min(((unsigned short)11746), (((/* implicit */unsigned short) (signed char)-87))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)12857), (((/* implicit */unsigned short) (signed char)-101)))))) : (-6563568747062278613LL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52678)) - (((/* implicit */int) var_6)))))));
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7)) / (((/* implicit */int) (unsigned short)192))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_25 &= ((/* implicit */signed char) arr_20 [(short)0] [i_5]);
            arr_21 [i_4] [i_5] = ((/* implicit */int) (unsigned short)39225);
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_4] [i_5] [(unsigned short)6])) ? (arr_19 [i_4] [i_5] [i_5]) : (arr_19 [i_4] [i_5] [i_4])));
            arr_22 [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4447663023086511942LL)) ? (((/* implicit */int) (unsigned short)52665)) : (((/* implicit */int) (signed char)105))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [(unsigned short)0] [i_4])))))));
            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [4U] [4U])))))));
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */signed char) var_7);
            var_29 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 130816))));
        }
        arr_26 [i_4] = ((long long int) (-(((/* implicit */int) (unsigned char)65))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        arr_31 [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)113))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_7])) ? (arr_29 [(_Bool)1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11758)))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7])) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned short)52679)) : (((/* implicit */int) (signed char)-34))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 4; i_10 < 12; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) max((var_32), (arr_16 [i_10 - 3] [i_10])));
                                var_33 &= ((/* implicit */unsigned short) ((unsigned long long int) (signed char)26));
                            }
                        } 
                    } 
                    arr_43 [i_7] = ((/* implicit */unsigned long long int) arr_19 [i_7] [i_7] [i_9]);
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) min((min((((/* implicit */short) (_Bool)1)), ((short)21555))), (((/* implicit */short) (signed char)14))));
                        var_35 = ((/* implicit */unsigned short) (~(min(((~(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (unsigned short)39225))))))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_12] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_12] [i_15 + 1]))) : (var_16)));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */int) min((max((var_12), (((/* implicit */long long int) arr_45 [i_12 + 1])))), (((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_47 [i_12]))))))));
        var_38 ^= ((/* implicit */unsigned long long int) var_19);
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
        {
            for (unsigned int i_17 = 0; i_17 < 16; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 16; i_19 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)-2073))))));
                                var_40 = ((/* implicit */signed char) (unsigned short)685);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        for (long long int i_21 = 4; i_21 < 13; i_21 += 3) 
                        {
                            {
                                var_41 = (unsigned short)40287;
                                arr_72 [i_12] [i_20] [i_12] [i_12] [i_21] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_64 [i_12] [i_12 + 1] [i_17] [i_21]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_22 = 0; i_22 < 16; i_22 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (arr_51 [14U] [i_12 + 1] [(unsigned char)6] [i_12]))))));
            arr_76 [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) min((arr_48 [i_12] [i_22] [i_22]), (((/* implicit */unsigned long long int) var_19))))) ? (((((/* implicit */unsigned long long int) arr_51 [i_12] [i_12 + 1] [i_12] [i_12 + 1])) / (arr_48 [i_12] [i_12] [i_22]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))));
            var_43 = ((/* implicit */signed char) min((var_43), (((signed char) min((((/* implicit */unsigned long long int) arr_50 [i_12 + 1] [12U] [i_12 + 1])), (var_11))))));
            arr_77 [i_12] [i_22] = ((/* implicit */unsigned int) min((arr_60 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1]), (((/* implicit */unsigned char) var_19))));
        }
    }
}
