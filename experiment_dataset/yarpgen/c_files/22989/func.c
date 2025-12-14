/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22989
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */short) ((int) var_3));
                            var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [3LL] [i_2] [i_2] [i_2]))) : (6645795241437519889LL)));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            var_11 = ((/* implicit */int) (signed char)-3);
                            arr_19 [i_5] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) (short)-32754))), ((~(var_7)))));
                            var_12 = ((/* implicit */unsigned int) min((var_12), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_2] [i_0]), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [(short)16] [i_3] [i_5]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) != (arr_12 [(signed char)15] [i_0] [i_1] [21ULL] [11U] [21ULL] [22U]))))))), (arr_17 [i_3] [i_3] [i_2] [i_3] [i_1] [i_0])))));
                            arr_20 [(unsigned char)18] [i_1] [i_0] [i_3] [i_0] [i_1] = ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 - 1] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) == (((/* implicit */int) var_0)))), (((-6645795241437519872LL) != (((/* implicit */long long int) var_4)))))))) : (max((max((((/* implicit */long long int) (unsigned char)87)), (var_6))), (((/* implicit */long long int) (-(1220188742U)))))));
                            var_13 = ((/* implicit */unsigned char) ((signed char) ((unsigned int) arr_4 [i_0] [i_2] [i_0])));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118)))))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_2] [i_6 + 1] [i_6] [i_6]))));
                        arr_25 [i_0] [i_2] [i_0] [i_1] = ((/* implicit */int) arr_5 [i_0]);
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_6] [i_1] [i_0] [i_6]))));
                        arr_26 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)59959)) ? (((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 2] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_6 - 3] [i_6 - 3] [i_1 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_1] = var_5;
                            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_11 [i_0] [14LL] [i_2])))) ? ((+(-6645795241437519868LL))) : (((/* implicit */long long int) var_3)))))));
                            var_17 = ((/* implicit */unsigned int) ((_Bool) arr_18 [i_1] [i_1] [i_1] [i_1 - 1] [i_2]));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)118)) < (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [14ULL])))))));
                        }
                        arr_33 [i_0] [i_1] [i_1] [4ULL] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_7])) || (((/* implicit */_Bool) arr_2 [i_1])))) || (((/* implicit */_Bool) ((signed char) arr_27 [i_0] [i_0] [i_1 - 1] [i_1] [i_1] [i_7])))))), ((~(((/* implicit */int) var_0))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -12568982005142435LL)) ? (((/* implicit */int) var_8)) : (-1371515264))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            arr_37 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) ^ (var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_2))) > ((+(((/* implicit */int) (signed char)123)))))))) : (min((((/* implicit */unsigned int) (-(var_3)))), (arr_17 [i_9] [i_9 - 1] [i_9] [i_9] [i_9] [i_1])))));
                            var_20 = ((/* implicit */int) arr_29 [i_0] [i_2] [i_2] [i_2] [i_2] [i_7]);
                        }
                        arr_38 [i_1] [i_1] = ((/* implicit */short) min(((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_5))))), (((/* implicit */unsigned long long int) var_9))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                {
                    var_21 -= 17966708708014318062ULL;
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (int i_12 = 2; i_12 < 22; i_12 += 4) 
                        {
                            {
                                arr_46 [17LL] [i_1] [i_12] [i_1] [i_1] = ((/* implicit */signed char) -1196365091);
                                arr_47 [i_0] [i_0] [8U] [i_1] [8U] = ((/* implicit */long long int) (-(var_4)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) arr_35 [i_10] [i_1] [17U] [i_10])));
                }
                var_23 = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_22 [i_1])), (var_9))) >= (((((/* implicit */_Bool) -6645795241437519893LL)) ? (((/* implicit */int) arr_22 [i_1])) : (((/* implicit */int) arr_39 [i_1 - 1] [(short)4] [i_1]))))));
                arr_48 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / ((-(max((-2080005162), (((/* implicit */int) (unsigned char)190))))))));
                var_24 *= ((/* implicit */unsigned long long int) (((+(min((((/* implicit */int) (_Bool)1)), (var_9))))) >= (var_9)));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)234)), ((short)2102)))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)31)))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        for (signed char i_14 = 4; i_14 < 18; i_14 += 4) 
        {
            {
                arr_54 [i_13] [i_14] = ((/* implicit */unsigned int) (_Bool)1);
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_8))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        for (unsigned int i_16 = 2; i_16 < 19; i_16 += 4) 
        {
            {
                var_27 = ((/* implicit */long long int) max((arr_0 [i_16] [i_15]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (3507092155U))))));
                var_28 |= ((/* implicit */signed char) arr_6 [i_15] [i_15] [i_16] [i_16]);
            }
        } 
    } 
}
