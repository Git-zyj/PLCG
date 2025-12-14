/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243456
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((min((((/* implicit */long long int) 4294967295U)), (var_13))), (((/* implicit */long long int) 1076453638)))) : ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 1065353216)) : (var_13)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_15 = (unsigned short)0;
            var_16 += ((/* implicit */unsigned long long int) var_7);
            var_17 = ((/* implicit */unsigned long long int) (((~(-5899441936837804464LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))));
        }
        var_18 = ((/* implicit */unsigned int) var_12);
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_19 = arr_6 [i_2];
        var_20 = max((min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (min((((/* implicit */long long int) arr_7 [i_2])), (var_13))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45139)) + (((/* implicit */int) arr_8 [i_2]))))) ? (((long long int) arr_6 [i_2])) : (5899441936837804460LL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -5899441936837804481LL)))) : ((+(arr_9 [i_2])))));
            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) 5899441936837804463LL)))));
        }
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            arr_13 [i_2] = min(((-(max((5899441936837804463LL), (((/* implicit */long long int) -1771352336)))))), (min((((/* implicit */long long int) (unsigned short)11807)), (5899441936837804463LL))));
            var_23 = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) (((+(min((((/* implicit */long long int) arr_5 [i_2])), (5899441936837804474LL))))) << ((((((((-(((/* implicit */int) arr_5 [i_2])))) | (((/* implicit */int) arr_7 [i_2])))) + (22925))) - (34)))))) : (((/* implicit */unsigned short) (((+(min((((/* implicit */long long int) arr_5 [i_2])), (5899441936837804474LL))))) << ((((((((((-(((/* implicit */int) arr_5 [i_2])))) | (((/* implicit */int) arr_7 [i_2])))) + (22925))) - (34))) - (8446))))));
        }
        var_24 = ((/* implicit */int) 5899441936837804463LL);
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        arr_17 [i_5] = ((/* implicit */unsigned short) max((((arr_16 [i_5]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34967))))), (5899441936837804458LL)));
        var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5]))) <= (-5899441936837804436LL)))), (arr_16 [i_5])));
        var_26 = ((/* implicit */short) ((((/* implicit */long long int) (-(18U)))) + (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_7)))));
    }
    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_27 = ((((/* implicit */_Bool) 5899441936837804444LL)) ? (max((-5899441936837804464LL), (((/* implicit */long long int) 239984806U)))) : (((/* implicit */long long int) var_11)));
                            arr_32 [i_6] [(unsigned short)5] [12LL] [i_8] [12LL] [i_6] [i_9] = ((/* implicit */unsigned short) ((long long int) max(((+(-5899441936837804446LL))), ((+(arr_9 [i_6]))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 4) 
                        {
                            arr_35 [i_6] [i_9] [16] [i_7] [i_7] [i_6] = ((/* implicit */int) 5899441936837804463LL);
                            arr_36 [(unsigned short)3] [4] [4] [(unsigned short)3] [i_6] [9LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_6] [i_6] [i_11 - 1] [i_6] [i_11] [i_6]))));
                            var_28 = ((/* implicit */unsigned short) arr_16 [i_6]);
                        }
                        arr_37 [i_6] [i_6] [i_8] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -5899441936837804464LL))))) << (((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned short) (-((((-(5899441936837804466LL))) ^ (-5899441936837804447LL)))));
                            var_30 = ((/* implicit */unsigned short) var_5);
                            var_31 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16380)) + (((/* implicit */int) arr_41 [i_9] [(unsigned short)21] [0ULL] [i_6] [i_8]))))) ? (((/* implicit */unsigned long long int) ((var_6) | (arr_29 [i_12] [i_8])))) : (((unsigned long long int) arr_10 [i_9] [(unsigned short)7] [16])))), (((/* implicit */unsigned long long int) arr_12 [4ULL] [4ULL]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned short) (-(arr_15 [i_6])));
                            var_33 = ((/* implicit */unsigned char) var_6);
                            var_34 = ((/* implicit */unsigned short) 5899441936837804467LL);
                        }
                        for (long long int i_14 = 4; i_14 < 20; i_14 += 1) 
                        {
                            arr_48 [5U] [i_6] [i_8] [5U] [i_6] = ((((/* implicit */int) arr_6 [i_6])) + (((/* implicit */int) ((((unsigned long long int) arr_8 [i_6])) > (((/* implicit */unsigned long long int) (+(var_4))))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [18LL] [i_6]))))) ? ((-(5899441936837804466LL))) : ((~(-5899441936837804464LL)))))));
                        }
                    }
                } 
            } 
        } 
        arr_49 [i_6] = ((/* implicit */long long int) arr_38 [(unsigned char)12] [i_6] [i_6] [(unsigned char)2] [i_6] [(unsigned char)2]);
        arr_50 [(unsigned short)18] [i_6] = ((((/* implicit */_Bool) -5899441936837804446LL)) ? (((-5899441936837804493LL) ^ (arr_42 [i_6] [17U] [20U]))) : (min((max((-5899441936837804468LL), (-5899441936837804434LL))), (((/* implicit */long long int) arr_30 [i_6] [18LL] [i_6] [i_6] [i_6] [i_6])))));
    }
}
