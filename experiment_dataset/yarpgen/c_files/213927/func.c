/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213927
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 295969265U)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-6))));
                    var_16 &= ((/* implicit */int) (signed char)(-127 - 1));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (short)15829);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0] [i_0] [i_0]));
        arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-9)) && (((/* implicit */_Bool) ((unsigned char) 295969284U)))));
        arr_11 [i_0] = 16260216283594503756ULL;
    }
    for (int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [(unsigned char)16])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_4 [8U]))), (((/* implicit */long long int) min((arr_6 [(signed char)14] [i_3] [i_3]), (arr_3 [(signed char)8]))))))) ? (min((((((/* implicit */_Bool) var_4)) ? (16260216283594503753ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))), (((/* implicit */unsigned long long int) arr_4 [12])))) : (16260216283594503745ULL)));
        var_18 = ((/* implicit */unsigned char) ((long long int) arr_5 [(unsigned char)0] [i_3] [(unsigned char)0]));
        var_19 = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned int) min((692571541), (((/* implicit */int) arr_12 [i_3] [i_3]))))) == (arr_5 [(unsigned char)6] [i_3] [i_3]))));
        arr_14 [i_3] = (+(min((18446744073709551594ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)31)), (var_12)))))));
    }
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (short)-28862)) : (((/* implicit */int) (signed char)75)))), (((/* implicit */int) var_11))));
    var_21 |= ((/* implicit */signed char) min((((/* implicit */long long int) min(((short)12267), (((/* implicit */short) (signed char)79))))), (5787933143404157125LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 1; i_4 < 19; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned short) 298590320016378226LL);
        var_22 |= ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (unsigned char)255)));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
            {
                for (short i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    {
                        arr_27 [i_4] [i_5] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) ((short) (unsigned char)242));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_24 [i_4] [i_4 - 1] [i_5] [i_7] [i_5] [i_7])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) : (562949953421311ULL)))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) arr_16 [i_6]))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_26 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) ((unsigned short) (short)15820))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 4; i_9 < 19; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_26 = ((/* implicit */int) ((unsigned char) ((_Bool) arr_18 [i_8])));
                    var_27 = (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) / (var_5))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8])) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) arr_33 [i_8] [i_10] [i_12]))))) ? (((/* implicit */int) arr_28 [i_9 - 3] [i_10])) : (((/* implicit */int) (!(((/* implicit */_Bool) -5787933143404157115LL)))))));
                                arr_39 [i_8] = ((/* implicit */short) ((signed char) arr_21 [i_8 - 1]));
                                var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [10])) && (((/* implicit */_Bool) arr_18 [i_9]))));
                                arr_40 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((signed char) arr_22 [i_8] [i_8] [i_8 + 1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 17; i_13 += 3) 
                    {
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            {
                                var_30 &= ((/* implicit */signed char) (+(arr_24 [i_14] [(_Bool)1] [i_14] [i_13 - 1] [(_Bool)1] [i_8 - 1])));
                                arr_45 [i_13] [i_8] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 295969265U)) ? (((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (unsigned char)43)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
