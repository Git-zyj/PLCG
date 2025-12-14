/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22909
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
    var_12 = (((~(((/* implicit */int) min(((short)-6528), (((/* implicit */short) (_Bool)1))))))) & (((/* implicit */int) (((((_Bool)1) && ((_Bool)1))) || (min(((_Bool)1), ((_Bool)1)))))));
    var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) && (((((/* implicit */_Bool) var_7)) && (var_0))))) || (((/* implicit */_Bool) (short)-16226))));
    var_14 = ((_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10413)) ^ (((/* implicit */int) var_11))))) ^ (min((((/* implicit */long long int) (_Bool)1)), (var_1)))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_15 = max((((((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_0])), (var_10)))) + (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (_Bool)1)));
                    var_16 = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 ^= max((arr_12 [i_3] [14LL]), (((/* implicit */short) ((-1150847335) < (((/* implicit */int) (_Bool)1))))));
                                var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_0 + 1] [i_2] [(_Bool)1] [i_4 - 2]))));
                            }
                        } 
                    } 
                    var_19 += arr_7 [i_0 - 2] [i_1] [i_2] [i_2];
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_8)))))));
                                var_21 = ((/* implicit */short) 2147483647);
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1562485257), (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5]))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) + (-7814681754806063822LL))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_0] [i_2] [i_5] [i_6])) - (((/* implicit */int) arr_17 [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3])))) + ((-(((/* implicit */int) arr_2 [i_5])))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        var_23 |= ((/* implicit */short) (signed char)-27);
                        var_24 -= ((/* implicit */short) arr_8 [i_8 + 2] [i_7]);
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_19 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        var_26 *= ((/* implicit */_Bool) ((((((arr_16 [i_7] [i_7] [i_7] [i_9 + 1] [(short)8] [i_9 - 1] [(short)8]) + (2147483647))) << (((/* implicit */int) arr_6 [i_9] [i_9 - 3] [i_9 - 1] [i_9 - 3])))) & (((/* implicit */int) (_Bool)1))));
                        arr_29 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_9 + 1] [i_9 + 1] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)55122))));
                        arr_30 [(short)0] [i_9 + 1] [i_1 - 1] [(unsigned short)11] [i_0] [(short)1] = (((!(((((/* implicit */int) (unsigned short)10413)) > (((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 1990535107323545381LL))))), (arr_2 [i_1])))));
                        var_27 *= (-(((/* implicit */int) ((unsigned short) min(((unsigned short)936), ((unsigned short)55114))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        arr_34 [i_10] [i_0] [i_10] [i_10 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_7])) || (var_3)));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55130)) + (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_10 [i_0] [i_0] [i_7] [i_10])))))));
                    }
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (short)20123))));
                    arr_35 [i_0 - 2] [i_0] [i_0 - 3] = ((/* implicit */short) (!(((/* implicit */_Bool) max((5638494856648215652ULL), (arr_13 [i_1 - 1] [i_0] [i_7] [i_7] [i_7]))))));
                }
                for (unsigned short i_11 = 4; i_11 < 12; i_11 += 3) /* same iter space */
                {
                    arr_40 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])))))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) max(((short)-4050), (arr_4 [i_0 - 2] [i_0]))))));
                        var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26126))));
                        var_32 += ((/* implicit */unsigned long long int) arr_23 [i_0] [i_0 - 1] [i_0 + 1]);
                    }
                }
                for (unsigned short i_13 = 4; i_13 < 12; i_13 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */int) (unsigned short)55138)) < (((/* implicit */int) ((arr_19 [i_0 - 3] [i_1 - 1] [i_13 - 2] [i_13]) && (arr_44 [i_13 - 1] [i_13 + 3] [i_13] [i_13 + 3])))))))));
                    var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_22 [i_0 + 1] [i_1 - 1] [i_13 + 2])))));
                    arr_45 [i_0] [i_0] [i_1 - 1] [i_13 - 2] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_10 [i_1] [i_0] [i_1] [i_13])) < (((/* implicit */int) var_3)))) ? (((/* implicit */long long int) max((((var_0) ? (((/* implicit */int) arr_22 [(_Bool)1] [(signed char)10] [(_Bool)1])) : (((/* implicit */int) var_10)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))) : (((long long int) (unsigned short)55139))));
                }
                var_35 += (_Bool)1;
            }
        } 
    } 
}
