/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208332
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_12))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_1)), (arr_6 [i_3 - 1] [i_3] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_3 - 2] [i_3 - 2] [i_4] [i_2] [i_4] [i_4] [i_3 - 2]))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned short)65535))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-20)), (arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] [i_2] [(short)14])))) : (var_2)))) ? ((-(min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (signed char)18))))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(3746788089U)))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [(_Bool)1])))))))) : (((/* implicit */int) (signed char)-18))));
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)10670))))));
    var_23 = ((/* implicit */signed char) ((unsigned int) ((unsigned char) ((unsigned long long int) var_17))));
    var_24 = ((/* implicit */short) ((unsigned long long int) var_15));
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_25 = ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [(unsigned short)12]))) ? (((/* implicit */int) var_4)) : ((+(arr_12 [i_5]))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 4; i_7 < 20; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 9484741833820151942ULL)) ? (((/* implicit */int) arr_18 [i_9] [(short)15] [i_6] [i_6] [i_7 - 1] [i_7 - 2])) : (((/* implicit */int) arr_21 [i_7] [i_7 - 4] [i_7 + 1] [i_6] [7LL] [i_7 + 1]))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_5] [i_6] [i_6] [i_9])), (var_15)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) 1ULL);
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) ((((((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5])) != (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (18446744073709551593ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6)))))));
        var_30 = ((/* implicit */unsigned short) 3733323831U);
    }
    for (long long int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
    {
        var_31 += ((int) (+(((/* implicit */int) (unsigned char)95))));
        var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 548179207U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)212))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155))) + (7465240169753046090ULL)))))));
    }
    /* vectorizable */
    for (long long int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_12 = 4; i_12 < 19; i_12 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0)))));
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_12] [i_11] [(unsigned short)6])) ? (((/* implicit */int) arr_23 [i_12])) : (((/* implicit */int) (unsigned short)65535))))))));
        }
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_11])) ? (arr_20 [i_11]) : (arr_20 [i_11])));
    }
}
