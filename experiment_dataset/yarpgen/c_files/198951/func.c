/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198951
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-93)) ? ((~(((((/* implicit */_Bool) arr_1 [i_2 + 3])) ? (141863388262170624ULL) : (((/* implicit */unsigned long long int) 0U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-6528423787056512089LL)))) ? (((/* implicit */int) ((unsigned char) (signed char)92))) : (((((/* implicit */int) (signed char)-93)) ^ (((/* implicit */int) (signed char)93)))))))));
                        arr_9 [i_0] &= ((/* implicit */unsigned char) var_8);
                        arr_10 [i_0] [i_0] [i_2 + 1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2])))))));
                        arr_11 [8ULL] [i_1] [i_3] [i_1 - 4] [8ULL] [i_1 - 4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (arr_8 [i_0 - 2]) : (var_5))) | (arr_8 [i_0 + 2])));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_1 - 2])) : (607619731)))) || (((/* implicit */_Bool) arr_2 [7U] [i_1 - 4] [i_2 + 2]))));
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_1 - 3]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [(short)6])))) : (((/* implicit */int) arr_4 [i_4 - 1] [i_4 - 1])))))))));
                            var_17 &= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_4 - 1])) == (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0])))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [i_1 + 2] [i_2] [i_4])))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        for (int i_7 = 4; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_24 [12U] [i_0] [i_2] [i_6] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1 - 2] [i_6]))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1] [(_Bool)1] [i_1 - 1])))))));
                                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) arr_5 [i_0] [i_0 + 3])))))));
                                var_20 = ((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_1]);
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) var_10))), (max((((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_12))), (((/* implicit */unsigned int) (unsigned short)65535))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (short i_9 = 1; i_9 < 15; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((min((arr_27 [i_8]), (((/* implicit */unsigned long long int) (unsigned short)3584)))) >> (((((((/* implicit */_Bool) -607619732)) ? (((/* implicit */unsigned long long int) -607619731)) : (arr_27 [i_10]))) - (18446744073101931844ULL))))) == (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9 + 3]))) == (var_1))) ? (((/* implicit */unsigned int) var_9)) : ((+(var_12))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 16; i_11 += 3) 
                    {
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                        {
                            {
                                arr_39 [i_8] [i_11] [i_12] = ((/* implicit */unsigned int) var_11);
                                var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_32 [i_12] [i_9] [i_8]))))) : ((~(var_1))))), (((/* implicit */unsigned int) arr_26 [i_10]))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8] [i_10] [i_11 + 1])) ? (-607619732) : (var_9)))) ? (((((/* implicit */_Bool) 1896376968)) ? (((/* implicit */int) arr_29 [i_8] [i_10] [i_11 - 3])) : (((/* implicit */int) arr_29 [i_8] [i_9 - 1] [i_10])))) : (((/* implicit */int) min((arr_29 [i_8] [i_11] [i_12 - 1]), (arr_29 [i_8] [i_9 + 3] [i_12])))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) 607619731)) << (((/* implicit */int) (!(((/* implicit */_Bool) 3893913420U)))))))) ? (((/* implicit */int) arr_29 [i_8] [i_10] [i_12])) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [0]))))) && (((/* implicit */_Bool) max((arr_35 [i_8] [i_8] [i_8]), (var_7)))))))));
                                arr_40 [i_8] [i_11] [i_10] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (493651018) : (var_0)))) ? (((/* implicit */int) (signed char)93)) : (((((/* implicit */_Bool) arr_34 [i_8] [i_8] [12U] [i_8] [i_8])) ? (((((/* implicit */_Bool) arr_26 [i_11])) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) arr_38 [(short)5] [i_8] [i_11]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (int i_14 = 1; i_14 < 17; i_14 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_26 [i_13])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_41 [i_8] [i_8] [i_8])))) | ((~(((/* implicit */int) (unsigned short)46563))))))) : (((long long int) ((unsigned short) var_3)))));
                                var_27 = (-(((((/* implicit */_Bool) 3291874544150717931LL)) ? (((/* implicit */int) arr_31 [i_9 + 1] [i_14] [i_14] [i_8])) : (((/* implicit */int) arr_31 [i_9 - 1] [i_14] [i_14] [i_8])))));
                                var_28 = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */short) (_Bool)0);
        var_30 = ((/* implicit */long long int) var_5);
    }
}
