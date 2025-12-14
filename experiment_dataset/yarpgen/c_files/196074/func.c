/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196074
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 1388779133U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), (((((/* implicit */int) var_6)) + (((/* implicit */int) var_6)))))))));
    var_13 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_2))) - (2667725751U)))))), (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_10)))) ? (((((/* implicit */unsigned long long int) ((long long int) 5750650811058693115LL))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) | (268435455ULL))))) : (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) % (var_3)))) ? (min((var_8), (((/* implicit */long long int) arr_5 [i_1] [i_0])))) : (((/* implicit */long long int) arr_5 [i_0] [i_1]))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) ((arr_2 [13ULL]) | (var_2)))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_2])) | (((/* implicit */int) arr_6 [(short)13] [i_0]))))) && (((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [15LL] [(unsigned char)7] [(unsigned short)19] [i_0])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_16 [23ULL] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2]))) > (var_1)))))) | (((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_4])) || (((/* implicit */_Bool) arr_6 [(short)1] [8ULL])))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [1U])) ? (((/* implicit */int) arr_6 [i_4] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((arr_4 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_11 [i_0] [i_4] [i_2] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)228))))))));
                                var_17 = ((/* implicit */unsigned char) max((max(((-(arr_5 [19LL] [i_2]))), (arr_5 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_13 [i_0] [(short)0])) + (arr_14 [i_4] [i_4] [i_4] [(_Bool)1] [(unsigned char)12])))) ? (((/* implicit */int) arr_11 [i_4] [i_3] [(_Bool)1] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) var_3)) <= (arr_14 [i_0] [i_0] [22ULL] [22ULL] [14ULL])))))))));
                                var_18 = arr_9 [i_0] [i_1] [i_2] [i_3];
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_1] [i_0] [i_0])) / (((/* implicit */int) arr_8 [(unsigned char)8] [i_1] [i_1]))))), (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2])), (arr_12 [i_0] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])), (11327093749733297212ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) var_2)))))) : (((arr_14 [i_2] [i_2] [i_1] [(signed char)13] [(signed char)13]) >> (((3406373803U) - (3406373780U)))))))))))));
                    arr_17 [(signed char)4] &= ((/* implicit */signed char) (+(((/* implicit */int) var_9))));
                    var_20 *= ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) arr_9 [i_2] [i_2] [i_1] [i_0]))))) * (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_2])) < (((/* implicit */int) var_9)))))));
                }
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) ((_Bool) arr_6 [17LL] [i_0]));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_7] &= ((/* implicit */_Bool) ((unsigned short) ((long long int) ((((/* implicit */int) (short)32761)) % (((/* implicit */int) (short)9511))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_5] [i_0])) % (((/* implicit */int) arr_23 [i_7] [i_5] [i_1] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_7] [i_5] [i_1] [i_0])) % (((/* implicit */int) arr_6 [i_0] [i_6]))))) : (arr_13 [i_0] [i_1])))) ^ (((unsigned long long int) arr_6 [i_0] [i_5 - 2]))));
                            }
                        } 
                    } 
                }
                arr_27 [i_0] = ((/* implicit */unsigned int) arr_24 [i_0] [i_0]);
            }
        } 
    } 
}
