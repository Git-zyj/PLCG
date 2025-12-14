/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4782
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) var_4)), ((-(((/* implicit */int) var_9)))))) : (((/* implicit */int) var_14)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_8), (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (max((min((((/* implicit */unsigned long long int) var_5)), (var_16))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))))));
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_19))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_23 |= ((/* implicit */_Bool) (short)13695);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 - 3] [(short)9])) ? (((/* implicit */int) arr_1 [i_2 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_2 - 2] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) var_11);
                                var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_5 [i_3 - 1] [i_2 + 1] [i_2 + 1]))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_16)))))))));
                                var_27 = ((((long long int) arr_9 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2 - 3] [i_0] [2LL])) == (((/* implicit */int) var_10)))))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_5 [(signed char)20] [(signed char)20] [i_1]))))), (arr_9 [i_2] [i_2 + 2] [(signed char)17] [i_2 - 3])))) > (arr_2 [i_1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 2]), (arr_12 [15LL] [10ULL] [i_2 + 1] [i_2 - 3])))) * (((/* implicit */int) ((((/* implicit */int) arr_12 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1])) != (((/* implicit */int) arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 2])))))));
                                var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_10)), (arr_0 [i_2 - 3])))), ((~(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 3] [i_5 + 2] [i_0] [i_0] [i_5 + 2]))) : (var_17)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_6))));
                }
                for (unsigned char i_7 = 3; i_7 < 20; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                    {
                        var_32 *= ((signed char) min((arr_20 [i_0] [i_0] [i_0] [(_Bool)1]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [(unsigned short)0] [i_0] [i_8 - 1])))))));
                        var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) var_11)))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-13696)), (arr_9 [i_0] [i_0] [i_7 + 1] [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_13 [i_0] [i_1] [(short)2] [i_0] [i_7 - 1] [i_8]))))))) * (((/* implicit */int) arr_6 [i_0] [i_8 + 1] [i_7 - 3]))));
                    }
                    var_35 ^= ((/* implicit */_Bool) ((long long int) arr_6 [i_7 - 1] [i_7 + 1] [14U]));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (signed char i_10 = 1; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_36 ^= ((/* implicit */unsigned int) ((signed char) ((long long int) var_13)));
                                var_37 = ((/* implicit */short) max((((unsigned long long int) var_14)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_7 + 1] [i_7 - 2] [i_9] [i_10 + 1])) ? (arr_8 [i_1] [i_7 + 2] [i_7 - 2] [i_9] [i_10 + 1]) : (arr_8 [i_1] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_10 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (arr_18 [i_0] [i_1] [i_0] [i_11])));
                                var_39 &= ((/* implicit */signed char) arr_11 [i_0] [(unsigned char)0] [i_0] [i_7 - 1] [i_11] [(unsigned char)0] [12U]);
                                var_40 |= ((/* implicit */unsigned long long int) var_9);
                                var_41 = ((/* implicit */_Bool) ((signed char) ((((var_11) && (arr_1 [i_1] [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_7 - 2] [i_7 - 2] [i_12]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_11] [i_12]))))))));
                                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) max((var_11), (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_1] [13ULL])), (var_1)))))))))));
                            }
                        } 
                    } 
                }
                var_43 = ((/* implicit */signed char) min((((/* implicit */int) max((((unsigned short) (short)13683)), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))), (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_11))))));
            }
        } 
    } 
}
