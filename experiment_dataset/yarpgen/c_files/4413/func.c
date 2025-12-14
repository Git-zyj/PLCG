/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4413
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) var_3)), (arr_0 [i_0 - 1])))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) - (422786607U)))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (~(min((arr_1 [i_0 + 1]), (((/* implicit */long long int) arr_0 [i_0 - 1])))))))));
        var_14 = ((/* implicit */unsigned short) ((min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))) % (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])))));
        arr_2 [i_0] = var_2;
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) ((long long int) (~(var_7))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_10 [i_4] [i_4 - 1] [i_4 - 3] [i_4 - 3] [i_4 - 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) >> (((((/* implicit */int) ((signed char) -9))) + (38)))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */int) var_4))))) & ((+(arr_12 [i_1 - 1] [i_3 - 2])))));
                        arr_13 [i_2] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)31329);
                        arr_14 [i_4 + 1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) min((((arr_5 [i_3 + 2]) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)0)), (var_2)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [(short)17])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned int i_6 = 4; i_6 < 22; i_6 += 1) 
                {
                    {
                        var_18 = arr_15 [i_6 - 2] [i_5] [i_1 + 1];
                        arr_23 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [3] [19U])), ((unsigned short)31329))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5]))) : (((arr_10 [(short)0] [i_2] [(short)0] [i_5] [i_6 + 2]) * (arr_10 [i_5] [i_1] [13ULL] [i_1 + 1] [i_2])))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) arr_4 [i_2]);
            var_20 = ((/* implicit */short) var_9);
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (unsigned char)255);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) arr_4 [i_1]);
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))));
                            var_24 = ((/* implicit */long long int) var_0);
                            var_25 = ((/* implicit */int) var_7);
                            var_26 = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 + 1] [6] [i_1] [i_1 - 1])) > (((/* implicit */int) arr_11 [1ULL] [i_10] [i_10] [i_1 + 2]))));
                            var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                        }
                        arr_39 [i_8] = ((/* implicit */signed char) (~((~(arr_27 [i_8] [i_7])))));
                        var_28 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_36 [i_1 + 1] [i_7] [9LL] [i_9] [i_8] [i_9]))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_1 - 1] [(_Bool)1] [(unsigned short)6] [i_9] [(short)5]))))) - (((unsigned long long int) (unsigned short)31339))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((1326585929), (((/* implicit */int) var_4))))) ? (((var_2) / (-1103073001))) : (((1103072993) & (((/* implicit */int) var_5))))));
        var_31 = ((/* implicit */_Bool) max((var_31), ((!(((((/* implicit */int) arr_38 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 - 1])) < (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_4)) + (51)))))))))));
        arr_40 [(unsigned short)21] = ((/* implicit */unsigned char) arr_26 [i_1] [i_1]);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_44 [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_42 [i_11])), (min((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_11] [(_Bool)1]))))), (((/* implicit */unsigned int) var_8))))));
        var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) arr_41 [i_11] [i_11])))) & (min((((/* implicit */int) arr_41 [i_11] [i_11])), (arr_42 [i_11])))));
    }
}
