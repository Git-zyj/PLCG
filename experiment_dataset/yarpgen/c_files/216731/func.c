/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216731
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
    var_17 = var_16;
    var_18 = ((/* implicit */signed char) var_15);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 -= ((/* implicit */int) ((_Bool) var_13));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [(short)10])) : ((((-2147483647 - 1)) / (((/* implicit */int) var_1))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2 - 2])) >> (((2514583136U) - (2514583113U)))));
                            var_21 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (arr_2 [16U]))) - (((/* implicit */unsigned long long int) var_16))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(arr_2 [i_2 + 2]))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_23 = ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_3] [i_3] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_0]))) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_5] [i_5]));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (30786325577728LL)));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) : ((-9223372036854775807LL - 1LL))));
        }
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_27 ^= ((/* implicit */signed char) var_12);
                        var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((var_6) << (((((/* implicit */int) arr_3 [i_7])) - (3365)))))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-32)) > (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) 217239763)) ? (arr_2 [i_6]) : (arr_23 [i_0])))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), ((~(((unsigned long long int) -272920799))))));
            var_30 = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_6] [i_6]))), (arr_17 [i_0])))));
        }
        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_31 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_24 [i_0] [i_9])), (((long long int) arr_21 [i_9]))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (signed char i_11 = 2; i_11 < 20; i_11 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) ((-9223372036854775786LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_9] [i_9])) - (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) var_16)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            var_34 -= ((/* implicit */short) ((2164663517184LL) & (((/* implicit */long long int) 374803734))));
                            var_35 = ((/* implicit */short) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) (short)15751))))) == (arr_22 [i_0] [i_11 + 3] [i_0] [i_0])))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((8616381153989210802LL), (((/* implicit */long long int) (~(268435440))))))) ? (((/* implicit */unsigned long long int) ((((272920799) >= (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [13LL] [i_11] [i_12])))) ? (((/* implicit */long long int) 1474036525U)) : (min((arr_31 [i_0] [i_9] [i_10] [(_Bool)1] [i_0] [i_11 + 4]), (((/* implicit */long long int) var_13))))))) : (((((((/* implicit */unsigned long long int) var_4)) - (arr_23 [i_0]))) & (arr_12 [i_0] [i_0] [i_10] [i_10] [i_11] [i_12])))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                        {
                            var_37 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((long long int) (-9223372036854775807LL - 1LL)))), (max((((/* implicit */unsigned long long int) (_Bool)0)), ((((_Bool)1) ? (9246289936675548355ULL) : (arr_2 [(unsigned char)9])))))));
                            var_38 = ((/* implicit */unsigned int) var_12);
                            var_39 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_13]))) >= (arr_7 [(_Bool)1] [i_9] [i_11] [(_Bool)1])))));
                        }
                    }
                } 
            } 
        }
        var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) var_10)))))));
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [16])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */signed char) var_3);
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (+(((unsigned long long int) 9246289936675548369ULL)))))));
    }
}
