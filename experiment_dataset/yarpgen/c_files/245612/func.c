/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245612
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((signed char) (+((-(arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(max(((+(arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
    }
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) var_9);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            for (unsigned int i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */int) arr_10 [i_2] [i_2] [i_3 + 3]);
                                var_22 &= ((/* implicit */_Bool) arr_11 [i_5] [i_2] [i_2] [i_3] [i_4 - 1] [(unsigned short)10]);
                                arr_16 [i_1] [i_2] [9LL] [i_1] [i_4] [(unsigned char)13] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), ((~(9223372036854775807LL)))))), (var_9)));
                            }
                        } 
                    } 
                    arr_17 [i_2] = min((min((arr_14 [i_2]), ((~(((/* implicit */int) arr_3 [i_3 - 3])))))), (((((/* implicit */_Bool) ((unsigned char) arr_9 [i_2] [i_2] [i_2]))) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : ((-(((/* implicit */int) (signed char)117)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((signed char) (+(((/* implicit */int) ((_Bool) var_13))))));
                                var_24 &= ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)65515)) ? ((-(2147483647))) : (((int) arr_20 [i_2] [i_2 - 2] [(signed char)6] [i_6]))))));
                                arr_23 [i_1] [i_2] [i_7] = ((/* implicit */_Bool) arr_14 [i_2]);
                                arr_24 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) max((min(((unsigned short)65535), ((unsigned short)10))), ((unsigned short)0)))), ((+(((/* implicit */int) ((_Bool) arr_13 [i_2])))))));
                                arr_25 [i_3] [i_2] [i_7] [i_6] [(unsigned short)1] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((long long int) (-(arr_6 [i_7 - 1] [i_7]))));
                            }
                        } 
                    } 
                    arr_26 [i_2] [i_2 + 1] = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [i_1] [i_2] [i_3 - 4])))) <= (min((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))))), ((-(var_1))))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) (+((+(min((arr_15 [(unsigned short)0] [i_1] [i_1] [i_1] [(short)8] [i_1]), (((/* implicit */int) var_6))))))));
    }
    for (long long int i_8 = 2; i_8 < 12; i_8 += 3) 
    {
        var_26 = ((/* implicit */long long int) (-(18446744073709551615ULL)));
        var_27 = (~(((/* implicit */int) max(((unsigned short)10), ((unsigned short)13)))));
        var_28 = ((/* implicit */_Bool) (signed char)1);
    }
    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        var_29 = ((/* implicit */int) max((var_29), (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)65535))))))))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_10] [i_9]))))) ? (((/* implicit */int) max((arr_27 [i_9]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_9] [(_Bool)1] [i_9])), (arr_19 [i_9])))) < (((/* implicit */int) arr_22 [i_9] [i_10])))))));
            arr_34 [i_9] [i_10] [i_9] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)31))))) != (var_10))))));
        }
        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (signed char i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        {
                            arr_44 [i_11] [i_12] [(short)5] [i_11] = ((/* implicit */unsigned char) (+(var_11)));
                            arr_45 [i_9] [i_14] [i_12] [i_11] = ((/* implicit */unsigned char) max((514394626128949621LL), (((/* implicit */long long int) ((int) min((((/* implicit */short) (unsigned char)255)), (var_6)))))));
                            var_31 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65533))));
                            var_32 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)35)), (-514394626128949622LL)));
                            var_33 = ((/* implicit */short) ((_Bool) min((arr_38 [i_11] [i_14 - 1] [i_14 - 2]), (((/* implicit */unsigned long long int) arr_14 [i_11])))));
                        }
                    } 
                } 
            } 
            arr_46 [i_11] = ((/* implicit */unsigned short) arr_4 [i_11]);
        }
        var_34 = ((/* implicit */_Bool) (~(min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_0))))));
        var_35 += ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
    }
}
