/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230724
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1])) & (((/* implicit */int) arr_0 [i_2] [i_2 - 3]))))) ? ((-(var_10))) : (((((/* implicit */int) arr_0 [0ULL] [i_2 + 1])) / (((/* implicit */int) arr_0 [i_2 - 1] [i_2 + 1])))))))));
                    var_21 += ((/* implicit */int) arr_3 [i_2]);
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((int) var_17))))) ? (((((/* implicit */_Bool) ((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) var_19)) ? (16140901064495857664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)145))))))) : (((/* implicit */unsigned long long int) var_18))));
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_17))));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((signed char) var_8)))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 3; i_3 < 7; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                arr_17 [i_3] [i_4] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(784512122197406214ULL)))) ? (((/* implicit */int) ((_Bool) var_1))) : (((((/* implicit */int) arr_0 [i_3] [0ULL])) * (((/* implicit */int) var_3))))));
                arr_18 [i_3] = (unsigned short)65531;
                arr_19 [i_5] [i_5] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 2179666608204399503ULL))))) >= (((((/* implicit */int) (unsigned short)65514)) & (((/* implicit */int) (short)10185))))));
                /* LoopSeq 2 */
                for (int i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)52228))))) : (arr_10 [i_4])));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        arr_27 [i_3] [7U] = ((((/* implicit */int) arr_25 [i_5])) / (var_10));
                        arr_28 [i_6] [i_7] [i_6] [(_Bool)0] [i_4] [(signed char)4] [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) (short)573)) && (((/* implicit */_Bool) ((int) arr_20 [i_4] [(unsigned short)2] [i_5] [(unsigned char)4])))));
                        var_26 = (!(((/* implicit */_Bool) (unsigned short)65531)));
                    }
                }
                for (short i_8 = 3; i_8 < 9; i_8 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) ((int) (-(var_10))));
                    var_28 ^= ((/* implicit */int) ((((/* implicit */int) arr_22 [i_3 + 3] [i_3 + 1] [i_4] [i_8 - 2])) != (((((/* implicit */_Bool) 4210042168246462475LL)) ? (((/* implicit */int) (unsigned short)5)) : (arr_6 [i_3] [i_3] [i_3] [(unsigned short)0])))));
                    var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4])) ^ (((/* implicit */int) (unsigned short)3))));
                }
            }
            for (short i_9 = 1; i_9 < 10; i_9 += 3) 
            {
                arr_35 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned short)65530))))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)6330))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9 + 1] [i_3] [i_3 - 3] [i_3 + 2]))) : (max((((((/* implicit */long long int) ((/* implicit */int) arr_34 [1ULL] [i_3] [i_4]))) / (arr_20 [i_3] [i_4] [i_4] [(short)0]))), (((/* implicit */long long int) ((var_1) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4])))))))));
                var_30 -= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_24 [i_4]))))));
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) arr_31 [i_3 - 1] [0ULL] [i_9 - 1] [(unsigned char)8] [i_4] [i_3])) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_4])) < (((/* implicit */int) (unsigned short)5)))))))) ? (((/* implicit */int) (!(arr_7 [i_9 - 1] [i_9 - 1] [i_3 + 4] [i_3 + 4])))) : (((/* implicit */int) arr_2 [i_4] [i_4])))))));
            }
            var_32 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) > (((((/* implicit */unsigned int) arr_23 [(_Bool)1] [i_3 + 3] [i_3 - 1] [i_3 - 1] [i_3 + 3] [i_3 + 3])) % ((-(arr_5 [i_3] [i_4] [i_4] [i_3])))))));
        }
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_39 [3] [i_3] = ((/* implicit */signed char) (+(((min((var_14), (((/* implicit */unsigned long long int) arr_38 [i_3] [i_3] [i_3])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 4168896874156238313ULL))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 4) 
                {
                    {
                        arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (_Bool)1);
                        arr_46 [i_11] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_32 [i_3 - 2] [i_3 - 1] [i_3 + 4]), ((unsigned short)65530))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_13 = 3; i_13 < 9; i_13 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) ((arr_23 [i_3] [i_3] [i_13] [i_13] [i_13 - 3] [i_13]) >= (((((/* implicit */_Bool) arr_25 [7LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_43 [i_3 + 2] [i_3] [i_3] [6ULL]))))));
            var_34 ^= ((/* implicit */_Bool) var_19);
            arr_50 [i_3 - 3] [0] [i_3] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)235))))));
        }
        var_35 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned short) (short)17522)), (arr_0 [i_3] [i_3])))), ((+(((/* implicit */int) var_12))))))), (((unsigned int) arr_42 [i_3 - 1] [i_3 - 3] [(signed char)0] [i_3 + 2]))));
    }
}
