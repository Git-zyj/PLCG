/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35288
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
    var_17 = ((/* implicit */int) var_9);
    var_18 = var_3;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)11] = ((/* implicit */short) var_12);
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_11))));
        var_20 += ((/* implicit */short) max((4836390623870781017LL), (((/* implicit */long long int) -1))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) var_10);
        var_22 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) + (var_12))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1])) - (var_14))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) ((var_13) < (3976015622U))))));
        arr_8 [(unsigned short)8] [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
        var_23 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_11))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_24 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) * (arr_3 [i_2] [i_2]));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_2))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_5])) / (((/* implicit */int) arr_9 [i_3]))));
                        var_27 -= ((/* implicit */unsigned long long int) ((arr_13 [i_2] [i_3] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5])))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((unsigned short) arr_19 [i_2] [i_3] [i_4] [i_3] [i_5]))));
                    }
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_29 = ((/* implicit */int) arr_14 [i_2] [i_2] [i_6]);
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((int) (-2147483647 - 1))))));
                        arr_23 [i_2] [i_4] [(_Bool)1] [i_2] = ((/* implicit */long long int) (~(var_0)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_31 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4836390623870781024LL)) ? (-4836390623870781044LL) : (4836390623870781016LL))))));
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */int) ((signed char) arr_27 [i_3] [i_3] [i_3] [i_3] [i_2]));
                            var_33 += var_2;
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) arr_13 [i_2] [i_3] [i_4]))));
                        }
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_17 [i_9] [i_7] [i_4] [i_3] [i_2]))));
                            arr_33 [i_2] [i_4] [i_7] [10LL] = ((/* implicit */unsigned char) arr_3 [i_2] [i_7]);
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_9])) ? (var_2) : (arr_26 [i_4] [i_7] [i_4] [i_2])));
                        }
                    }
                    var_37 = arr_11 [i_3] [i_2];
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_2])))))));
                }
            } 
        } 
        var_39 = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_2])) >> (((((/* implicit */int) arr_15 [i_2])) - (43956)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [i_2])) >> (((((((/* implicit */int) arr_15 [i_2])) - (43956))) - (6620))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_11 = 2; i_11 < 6; i_11 += 4) 
        {
            var_40 = ((/* implicit */int) var_7);
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) & (((/* implicit */int) arr_22 [14U] [i_11] [i_11 + 4]))))) ? (((/* implicit */int) arr_22 [i_11] [i_11] [i_11 + 4])) : (((/* implicit */int) max((((/* implicit */short) arr_22 [18U] [i_11] [i_11 - 2])), (arr_31 [i_11] [i_11 - 1] [i_11 + 1] [i_11] [i_11 - 1])))))))));
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    {
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) min((((/* implicit */long long int) arr_3 [i_12] [i_11 + 1])), (((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_10] [i_11 - 2])), (-1590983095)))) ? (4836390623870781024LL) : (arr_16 [i_10] [i_11] [i_10]))))))));
                        arr_44 [i_10] [i_11 + 4] [i_12] [i_13] = ((/* implicit */signed char) var_4);
                        var_43 = ((/* implicit */signed char) ((unsigned char) max((arr_39 [i_11 + 3] [i_11 + 4] [i_11 + 4]), (arr_39 [i_11 + 1] [i_11 + 2] [i_11 + 1]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (long long int i_15 = 1; i_15 < 8; i_15 += 4) 
            {
                {
                    var_44 = ((/* implicit */unsigned short) var_0);
                    var_45 -= ((/* implicit */unsigned char) var_5);
                    var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) arr_5 [i_10]))));
                }
            } 
        } 
    }
}
