/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46328
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_0))) ? (max((min((((/* implicit */unsigned long long int) var_2)), (var_7))), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) var_5))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) <= (var_0)))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) / (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_3 [i_0] [14]))))));
        var_13 = ((/* implicit */long long int) ((int) arr_1 [i_0 - 1]));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))) : (var_8)));
                arr_9 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
            }
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_5] [i_1] [i_4 - 2]))) : (var_6))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 1] [i_0 - 1])))));
                            arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))));
                        }
                    } 
                } 
                arr_19 [i_1] = ((unsigned int) ((((/* implicit */int) var_2)) >> (((var_0) - (14375578858134134179ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_27 [i_6] [i_1] [i_3] [i_6 + 3] [i_6] [i_7] = ((/* implicit */short) var_5);
                            arr_28 [i_1] [i_3] [i_1] = ((/* implicit */int) (+(2545757638U)));
                        }
                    } 
                } 
            }
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
            {
                arr_33 [i_0] [(signed char)12] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_32 [i_1])) ? (var_8) : (var_0))));
                arr_34 [i_1] = ((/* implicit */_Bool) ((long long int) var_4));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 4; i_9 < 20; i_9 += 4) 
            {
                arr_37 [i_0] [14LL] [i_0] [i_1] = ((/* implicit */short) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_9 - 1])))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_9 - 1]))))));
            }
            for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                arr_40 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [4] [i_0 - 1] [i_0 - 1] [i_0])) ? (var_7) : (var_0)));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 - 1] [i_1] [i_10])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10] [3U] [i_10] [i_0 - 1])))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_1] [i_1] [i_10])) : (arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [(short)14]))) : (((/* implicit */unsigned long long int) arr_13 [i_10] [i_0 - 1] [i_10] [i_1] [i_1])))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0 - 1] [i_0] [i_11 - 1])) ? (arr_42 [i_0 - 1] [i_0 - 1] [i_11 - 1]) : (arr_42 [i_0 - 1] [i_0 - 1] [i_11 - 1])));
                var_18 = ((/* implicit */short) arr_35 [i_0] [i_0] [i_1]);
                arr_43 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_24 [i_0 - 1] [i_1] [i_1] [i_1] [i_11 - 1])))) ? (arr_41 [i_1]) : (((/* implicit */int) arr_32 [i_1]))));
                var_20 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1]);
            }
            arr_44 [i_0] [i_1] [i_1] = (+(((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_0 - 1])));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) ((unsigned char) var_6));
            arr_49 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_36 [i_0 - 1] [i_0]))));
        }
    }
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
    {
        arr_52 [i_13] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((((/* implicit */short) var_9)), (var_1)))) : (((/* implicit */int) var_1)))) == (((((/* implicit */_Bool) arr_11 [i_13 - 1] [1LL] [i_13 - 1] [i_13 - 1])) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_5 [i_13 - 1]))))));
        arr_53 [i_13] = ((/* implicit */unsigned short) ((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_13] [i_13] [i_13] [i_13 - 1]))) - (var_0)))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_13 - 1] [i_13])))))))));
        arr_54 [i_13] [i_13 - 1] = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_3)), (max((2545757633U), (((/* implicit */unsigned int) (signed char)10)))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_13 - 1] [i_13 - 1])))))));
    }
}
