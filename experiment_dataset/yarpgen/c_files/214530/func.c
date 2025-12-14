/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214530
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
    var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_15)))))), ((+(var_9)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) var_9);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 4 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_21 *= (!(((/* implicit */_Bool) var_5)));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((arr_3 [i_2]), (((/* implicit */int) ((unsigned char) 2147483647))))))));
        var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) arr_3 [i_2])) : (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_2] [i_2]))) ? (((((/* implicit */_Bool) -202668539)) ? (((/* implicit */unsigned int) arr_0 [i_2])) : (arr_4 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_2] [i_2]))))))));
        var_24 = ((/* implicit */int) arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        var_25 = ((/* implicit */signed char) (-(arr_9 [i_3 + 1])));
        var_26 = ((/* implicit */_Bool) var_8);
    }
    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) -202668539)) ? (-202668539) : (2147483634))))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 1) 
        {
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_7 [i_4] [i_5]))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_16 [i_4] [i_5])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483635))))) : (((/* implicit */int) var_11)));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) arr_10 [i_4]))));
        }
        for (long long int i_6 = 2; i_6 < 8; i_6 += 3) 
        {
            var_30 += ((/* implicit */long long int) min((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1073676288U))))), (823555709)));
            arr_20 [i_4] [i_4] [i_6] = ((/* implicit */int) arr_8 [i_4] [i_6 + 1]);
            arr_21 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((0LL), (((/* implicit */long long int) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6 - 2]))))))));
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_3 [i_6 + 1])))) ? (((unsigned int) arr_7 [i_6 + 2] [i_6 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))))))));
        }
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) ((unsigned int) arr_16 [i_7] [i_7]));
        var_33 = ((/* implicit */unsigned int) max((var_33), (((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned int) arr_18 [i_7])) : (arr_23 [i_7] [i_7])))));
        /* LoopSeq 3 */
        for (unsigned char i_8 = 3; i_8 < 9; i_8 += 3) 
        {
            arr_28 [i_8] [i_8] = ((/* implicit */int) ((long long int) ((unsigned char) var_4)));
            var_34 = -2147483637;
        }
        for (int i_9 = 4; i_9 < 8; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 9; i_10 += 3) 
            {
                for (signed char i_11 = 2; i_11 < 9; i_11 += 4) 
                {
                    {
                        var_35 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) | (var_4))))));
                        var_36 = arr_22 [i_11] [i_9];
                        arr_38 [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) (unsigned char)118);
                        arr_39 [i_10] [i_10] [i_10] [i_9] = ((/* implicit */unsigned int) 614116882);
                    }
                } 
            } 
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 33763217)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_9])))));
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_10 [i_7]))));
            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_34 [i_7] [i_7]))));
            var_40 = ((/* implicit */unsigned int) var_12);
        }
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (int i_14 = 2; i_14 < 9; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        {
                            var_41 = (-(((/* implicit */int) arr_47 [i_7] [i_12] [i_14 - 2] [i_14] [i_14 - 1] [i_14 - 1])));
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_42 [i_7] [i_14] [i_15]) + (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_15])))))) ? (((/* implicit */int) arr_40 [i_14] [i_14 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                    } 
                } 
            } 
            var_43 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (-33763218)))) ? (((arr_46 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ^ (((/* implicit */long long int) 3145728U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7])) ? (1742483777) : (arr_1 [i_7] [i_12]))))));
        }
        var_44 = ((/* implicit */int) min((var_44), (((arr_1 [i_7] [i_7]) / (1449233233)))));
    }
}
