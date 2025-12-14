/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197428
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) var_11);
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) arr_1 [i_0])), (-5021779586680076998LL)));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_9 [(unsigned char)0] &= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_1]))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)6551)), (var_14)))) ? (((1347201147U) - (2947766166U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_15 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) min((1347201167U), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1])) << (((((arr_11 [i_1] [i_1]) + (5683082156358864662LL))) - (20LL)))))) - (arr_13 [i_2 - 1])))))) : (((/* implicit */unsigned char) min((1347201167U), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1])) << (((((((arr_11 [i_1] [i_1]) + (5683082156358864662LL))) - (20LL))) - (6223653247313049781LL)))))) - (arr_13 [i_2 - 1]))))));
                    arr_17 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (arr_6 [i_1]) : (min((arr_6 [i_1]), (arr_6 [i_1])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        arr_21 [i_1] [i_3] = ((/* implicit */unsigned long long int) var_13);
                        var_16 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13558)) ? (((/* implicit */long long int) 2285371054U)) : (var_5)))), (var_12))) << (((((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_4]))))) ? ((-(arr_18 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_2 + 1] [i_2 + 1] [i_4 + 2]))))) + (8780422068613755306LL)))));
                    }
                    for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        var_17 *= arr_20 [i_5] [i_5 - 2] [i_2 - 1] [i_2 - 1];
                        arr_24 [i_1] [i_3] [i_1] [i_1] [(signed char)3] [i_1] = ((/* implicit */short) ((unsigned int) ((unsigned short) arr_16 [i_5 - 2] [i_2] [i_2 - 2])));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((/* implicit */int) min((arr_22 [i_3] [i_2 - 1] [i_2 + 1]), (arr_22 [i_3] [i_2 + 1] [i_2 - 2])))), (arr_6 [i_6]))))));
                            var_19 = ((/* implicit */int) (-(2285371050U)));
                            arr_29 [i_1] [i_1] [i_1] [i_3] [(signed char)13] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2])) << (((((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 2])) - (60)))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -2147483646)) : (var_9))), (((/* implicit */unsigned int) arr_22 [i_1] [i_2] [i_3]))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 18; i_8 += 3) 
                        {
                            var_20 += ((/* implicit */unsigned char) min(((-(min((arr_18 [i_3]), (arr_26 [i_1]))))), (min((((/* implicit */long long int) arr_22 [i_6] [i_8 + 1] [i_8])), (min((((/* implicit */long long int) arr_7 [i_6])), (var_5)))))));
                            var_21 = ((/* implicit */unsigned int) arr_11 [i_1] [i_2]);
                        }
                    }
                    arr_32 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (-(min((arr_12 [i_1] [i_2 + 1] [i_1]), (arr_12 [i_1] [i_2] [i_3])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1347201167U)) == (-5011623428509422670LL)));
                        arr_35 [i_1] [i_1] = ((/* implicit */long long int) var_11);
                        var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_2 + 1])) && (((((/* implicit */int) arr_14 [i_1])) > (((/* implicit */int) arr_14 [i_1]))))));
                        arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (86355585U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_2] [i_2 + 2] [i_9 + 3] [i_9 + 2])) == (((/* implicit */int) var_10))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_2 + 2] [i_3] [i_9 + 3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (var_3)));
                            arr_40 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10 + 1])) ? (arr_13 [i_10 - 1]) : (arr_13 [i_10 - 1])));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_25 += ((/* implicit */short) (!((((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) var_0))))));
                        var_26 = ((signed char) (-(2947766131U)));
                        var_27 = ((/* implicit */unsigned long long int) var_0);
                        var_28 = var_13;
                        var_29 -= ((/* implicit */int) var_11);
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 18; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (unsigned int i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    {
                        var_30 += ((/* implicit */int) var_10);
                        arr_52 [(unsigned char)0] [i_1] [(unsigned char)0] [i_13] [i_13] [i_14] = (~(((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_1])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                {
                    arr_62 [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_16])))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [(short)17]))));
                    arr_63 [i_17] [i_16] [i_16] [i_15] = ((/* implicit */int) arr_31 [i_15] [i_16] [(short)11] [i_17] [i_17]);
                }
            } 
        } 
        arr_64 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)89)) ? (((((/* implicit */_Bool) arr_60 [i_15] [i_15])) ? (arr_31 [i_15] [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [(short)1] [i_15] [14LL] [i_15])))))));
        arr_65 [i_15] &= ((/* implicit */unsigned short) ((short) var_14));
        arr_66 [12] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2947766166U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    }
    var_31 = ((/* implicit */unsigned int) var_10);
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((-(var_5))), (((/* implicit */long long int) var_7))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_6))));
}
