/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199928
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
    var_10 = ((/* implicit */unsigned short) (signed char)92);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                    var_11 = ((/* implicit */long long int) (_Bool)1);
                    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_9))) == (((/* implicit */unsigned long long int) (-(var_2))))));
                }
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_20 [(unsigned short)6] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_4)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)122))))))) | (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 + 1] [i_1] [i_1] [i_3 - 1])) < (((/* implicit */int) arr_15 [i_3] [i_3 - 2] [(unsigned short)20] [i_5] [i_5] [i_5])))))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [(unsigned short)6] [i_1] [i_3] [i_5]))))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5] [(unsigned char)7] [i_5] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (min((((/* implicit */long long int) arr_19 [(unsigned short)10] [i_4] [(_Bool)1] [i_1] [i_0])), (9223372036854775807LL))))))))));
                                var_14 -= ((/* implicit */unsigned long long int) (_Bool)0);
                                var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 - 1])) ? (arr_0 [i_3 - 2] [i_3 + 1]) : (((/* implicit */unsigned long long int) -6LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_3 - 2] [4ULL] [(unsigned short)1] [i_3 - 2] [i_3 - 2] = ((/* implicit */unsigned int) ((int) (_Bool)1));
                                var_16 &= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) (_Bool)1);
                }
                var_18 -= ((/* implicit */unsigned char) ((int) min((((((/* implicit */int) (signed char)-93)) - (((/* implicit */int) (_Bool)1)))), (max((var_7), (var_6))))));
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 20; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_19 -= ((/* implicit */int) ((var_6) < (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_8] [i_9])) : (((/* implicit */int) var_1))))))));
                            arr_33 [6LL] [i_1] [6LL] [i_1] = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (signed char)111)) | (((/* implicit */int) arr_24 [i_1] [(unsigned char)5] [i_8] [i_9] [i_1] [i_1])))), (((/* implicit */int) arr_7 [i_9] [i_8] [i_1])))) >> (min(((-(((/* implicit */int) arr_31 [(signed char)0] [i_1])))), (((/* implicit */int) (_Bool)1))))));
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << ((((((~(9223372036854775807LL))) - (-9223372036854775778LL))) + (50LL)))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-943663246608052273LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_9] [i_9])) >> (((((/* implicit */int) arr_18 [i_0] [i_1] [14LL] [i_8 - 2] [i_9] [i_8] [i_9])) - (18943))))))));
                            arr_34 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [20LL] [i_1] = ((/* implicit */unsigned short) arr_19 [i_9] [3U] [12LL] [3U] [(unsigned char)0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (long long int i_12 = 4; i_12 < 19; i_12 += 4) 
                        {
                            {
                                arr_43 [(unsigned char)4] [(signed char)11] [i_12] [i_12] [i_1] [i_12] = ((/* implicit */unsigned short) arr_36 [i_0] [i_1] [i_1] [i_11]);
                                var_21 |= ((/* implicit */unsigned short) var_6);
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_12] [i_1] [i_1] [i_12 - 2] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (arr_0 [i_12 - 2] [i_11 + 1]))))));
                                arr_44 [i_0] [(unsigned short)10] [i_10] [(unsigned char)17] [i_1] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_12 + 1] [i_1] [i_1] [i_11 + 1])) ? (-8934946755647431473LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((/* implicit */long long int) ((/* implicit */int) ((var_6) != (((/* implicit */int) arr_24 [i_12] [i_11 + 1] [i_12 + 1] [i_11 + 1] [i_11] [i_11 + 1]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (unsigned char i_14 = 1; i_14 < 20; i_14 += 4) 
                    {
                        {
                            arr_49 [i_1] [i_13] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (-(8476643097666087019LL)));
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_35 [i_0] [i_1] [i_13] [i_1]))))));
                            arr_50 [i_0] [i_1] [i_13] [i_14] = ((/* implicit */long long int) (~((((!(((/* implicit */_Bool) -6491285747596630461LL)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)65106)), (var_9))) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
