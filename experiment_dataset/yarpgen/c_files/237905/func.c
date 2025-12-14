/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237905
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
    var_14 = ((/* implicit */_Bool) (-(((max((var_13), (((/* implicit */unsigned long long int) var_3)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)116))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_2 [i_1]) : (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)11] [(unsigned char)11]))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((unsigned short) (_Bool)1));
                                arr_13 [i_2] = ((/* implicit */short) min((var_8), (((/* implicit */unsigned short) (signed char)116))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */int) arr_4 [11ULL] [i_1]);
                /* LoopSeq 3 */
                for (unsigned char i_5 = 4; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */int) max((var_17), ((((~(arr_10 [i_0] [i_0] [i_5] [i_5 - 2]))) ^ (((/* implicit */int) arr_1 [i_0]))))));
                    var_18 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((arr_14 [i_1] [i_1] [i_1] [i_1]) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_5]))))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_5 - 4]))) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [5]))));
                    arr_17 [i_0] [i_5] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_5] [(signed char)10]);
                    var_19 = ((/* implicit */int) var_7);
                }
                for (unsigned char i_6 = 4; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [i_6 - 3] [i_6] [i_6] [i_6 + 3]))));
                    var_21 = ((/* implicit */unsigned char) arr_4 [i_0] [i_6]);
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 21; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((signed char) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), ((signed char)116))));
                                arr_27 [(signed char)19] [i_1] [i_6] [i_7] [i_8] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_6 - 3])) ? (max((((/* implicit */long long int) arr_26 [i_6 + 2])), (-8667443123150999650LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_6 - 1])))))));
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_8] = max((((/* implicit */int) ((((arr_14 [i_7] [i_7] [i_6] [i_7]) % (arr_14 [i_8] [i_8] [i_8] [i_8]))) <= ((+(arr_15 [i_8] [i_0] [i_1] [i_0])))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [i_6 + 1] [i_6 - 3])) : (((/* implicit */int) (signed char)127)))));
                                arr_29 [i_1] [(unsigned short)8] [(unsigned short)8] = ((int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) arr_26 [(unsigned char)18])) : (((/* implicit */int) arr_23 [i_0] [i_6] [i_7]))))) + (((((/* implicit */_Bool) -8667443123150999650LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_7]))) : (-8667443123150999653LL)))));
                            }
                        } 
                    } 
                    arr_30 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((((/* implicit */int) arr_26 [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [10ULL] [15LL]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118)))))));
                    var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) arr_0 [i_0]))))));
                }
                /* vectorizable */
                for (unsigned char i_9 = 4; i_9 < 20; i_9 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (arr_19 [(unsigned short)12] [i_9 + 2] [i_9])));
                    arr_33 [i_0] = ((/* implicit */long long int) ((signed char) arr_23 [i_9] [i_9 - 2] [i_9]));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_1] [i_1])) / (((/* implicit */int) arr_18 [i_9 - 3] [i_9 + 3]))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 1) 
    {
        for (int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            {
                arr_39 [i_10] [i_10] [i_11] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)-109)) % (((/* implicit */int) (signed char)120))))))), (var_13)));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (((unsigned short) arr_8 [i_10]))))), (((((/* implicit */_Bool) (signed char)-116)) ? (8667443123150999632LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96))))))))));
            }
        } 
    } 
}
