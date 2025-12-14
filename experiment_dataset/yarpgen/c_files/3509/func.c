/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3509
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
    var_16 = ((/* implicit */unsigned char) var_2);
    var_17 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [10LL] [i_0] = (~(((/* implicit */int) ((signed char) min((arr_9 [i_0] [13U] [8] [8] [i_0]), (var_2))))));
                                var_18 = ((long long int) 913132861U);
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((((unsigned long long int) arr_4 [i_3])), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) != (var_1))))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(-6355217148826671534LL))), (((/* implicit */long long int) max((arr_6 [i_4 - 1] [i_1] [i_0]), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((int) ((4278425384728033123LL) / (-5982423084153561425LL))))) : (min((((/* implicit */long long int) var_4)), ((+(var_9)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) (-((~(769758333)))));
                    var_22 = ((/* implicit */long long int) max(((unsigned short)26244), ((unsigned short)26264)));
                }
                arr_15 [2LL] [2LL] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)26244)), (6479323426897472655ULL)));
                var_23 = ((/* implicit */unsigned long long int) ((long long int) var_0));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((long long int) min((arr_8 [i_5 + 1] [i_5 + 2] [i_5 + 2]), (((/* implicit */long long int) arr_1 [i_5 + 3])))));
                                arr_24 [(signed char)13] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_21 [i_0] [i_6] [i_5] [6ULL] [6ULL] [i_0])), ((+(3790228018U)))));
                                var_25 = (!((!(((/* implicit */_Bool) arr_13 [i_7] [4U] [i_1])))));
                                arr_25 [(_Bool)1] [8] [i_0] = ((/* implicit */unsigned int) max((((_Bool) min((((/* implicit */long long int) var_8)), (arr_7 [i_0] [i_1] [i_5] [i_6])))), (((arr_2 [(unsigned short)8]) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                    arr_26 [(unsigned short)5] [i_0] [i_5] [i_5 - 3] = min(((-(((/* implicit */int) arr_12 [13U] [i_5] [i_5 + 1])))), ((+(((/* implicit */int) (unsigned short)39302)))));
                    arr_27 [6U] [i_0] [4LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(var_0)))) ? (arr_7 [i_0] [i_5 - 2] [i_5 + 1] [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_5] [i_1] [i_0])) && (((/* implicit */_Bool) -9036050980418154067LL)))))))) != (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_3)) : (var_5))), (((/* implicit */long long int) ((unsigned int) var_6)))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) var_10)))));
                    var_27 = ((/* implicit */long long int) (+(arr_17 [i_0] [i_0] [i_8] [i_8])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (long long int i_10 = 3; i_10 < 13; i_10 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((unsigned int) (unsigned char)0)))));
                    arr_42 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) var_4);
                    var_29 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_10 [i_11] [i_11] [i_10 - 3] [i_10 + 2] [i_10 + 1])) ? (min((((/* implicit */unsigned int) var_3)), (arr_31 [i_9]))) : (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [13LL] [10LL] [i_11] [i_11])) ? (arr_30 [i_9] [2]) : (arr_33 [i_10])))) ? (min((var_13), (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11] [i_11])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_10]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_46 [i_9] [i_10 + 1] [i_11] = min((max((arr_38 [i_10 + 2] [i_10 - 3]), (((long long int) arr_16 [i_12] [i_10 - 2] [i_11] [i_12])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_32 [i_9]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_12] [i_11] [(_Bool)1] [i_10 + 2] [i_9]))) : (var_5))))))));
                        arr_47 [i_9] [i_9] = ((/* implicit */signed char) arr_12 [i_9] [0LL] [i_12]);
                    }
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        var_30 = ((/* implicit */_Bool) ((unsigned char) var_6));
                        arr_50 [(signed char)3] [i_10 - 3] [i_9] [13LL] = ((/* implicit */unsigned char) (~(((((unsigned long long int) var_2)) & (((((/* implicit */_Bool) arr_31 [i_11])) ? (arr_4 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [4LL] [i_10] [i_11] [i_11] [i_13])))))))));
                    }
                    arr_51 [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) (-((~(2616238676U)))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 14; i_15 += 1) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_31 = arr_38 [i_10 - 2] [i_10 + 2];
                                var_32 = arr_43 [i_9] [11ULL] [i_14] [i_14] [i_14] [i_14];
                            }
                        } 
                    } 
                    arr_62 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (-(arr_52 [i_9] [i_14] [i_10 + 2])));
                }
                var_33 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 9057934791702657112LL))));
                arr_63 [i_9] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_41 [i_10] [i_10 + 1] [i_9] [i_9])) || (((/* implicit */_Bool) arr_41 [i_9] [i_10 - 3] [i_10 - 1] [i_10 + 2]))))));
            }
        } 
    } 
}
