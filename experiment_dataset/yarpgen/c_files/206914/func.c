/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206914
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 ^= ((/* implicit */int) (((~(11939636205717073715ULL))) < (((/* implicit */unsigned long long int) var_3))));
                    var_12 = (-((((+(-2147483642))) - (((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) var_10)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) min((var_13), (var_2)));
    var_14 ^= ((/* implicit */unsigned long long int) var_5);
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 3) 
    {
        for (int i_4 = 3; i_4 < 22; i_4 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) (~(max((min((arr_9 [i_4 - 2] [i_4 - 2] [i_3 + 2] [i_3 + 2]), (2147483647))), ((~(((/* implicit */int) var_10))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4])) ? ((~(arr_15 [i_4 - 2] [i_4 - 3]))) : (arr_15 [i_4 + 1] [i_4 + 1])))));
                                arr_21 [i_7] [i_6] [i_5] [i_4] [i_7] |= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_7]))));
                                var_18 |= ((/* implicit */unsigned long long int) arr_19 [i_3] [4] [4LL] [i_3] [(unsigned short)4] [i_7] [14]);
                                var_19 ^= ((/* implicit */unsigned char) (unsigned short)65527);
                            }
                            for (unsigned char i_8 = 2; i_8 < 20; i_8 += 4) 
                            {
                                arr_24 [i_4] [i_3] = (~(((((/* implicit */_Bool) (~(11191398061552337353ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (max((((/* implicit */long long int) (unsigned char)187)), (arr_5 [i_3] [i_6] [i_3]))))));
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)54)) | (((/* implicit */int) var_2))))))));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) arr_29 [i_4 + 1])) || ((_Bool)1)))));
                                arr_30 [i_6] [i_3] [(_Bool)1] [i_6] [i_9] = ((/* implicit */unsigned long long int) arr_23 [i_3 - 2] [i_3 - 2] [9] [i_3 + 1] [i_3 + 1]);
                                arr_31 [8LL] [i_4 + 1] [i_6] [i_3] = ((/* implicit */int) ((unsigned short) (_Bool)0));
                            }
                            for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
                            {
                                arr_35 [i_3] [i_4 - 1] [i_3] [i_6] [5] = ((/* implicit */unsigned char) (signed char)119);
                                arr_36 [i_10] [i_3] [(unsigned short)14] [i_5] [i_5] [i_3] [5U] = ((/* implicit */unsigned int) ((int) ((((_Bool) (signed char)87)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-7609)) && (((/* implicit */_Bool) arr_20 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_3 + 2]))))))));
                                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((arr_7 [i_3] [i_4 - 1] [i_5]), (((/* implicit */long long int) (unsigned short)65525))))))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_4 [i_5])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3 - 4] [i_4] [i_4]))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_10]))))));
                                arr_37 [i_3] [(signed char)13] [i_4 - 3] [i_3] [i_6] [i_10] = ((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_4 - 2]);
                            }
                            /* LoopSeq 3 */
                            for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((short) arr_0 [i_3] [9LL])))));
                                var_23 ^= ((/* implicit */unsigned char) (short)17741);
                            }
                            for (unsigned char i_12 = 2; i_12 < 21; i_12 += 4) 
                            {
                                arr_42 [(unsigned char)8] [i_3] [(unsigned char)8] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) -1LL)) || (((/* implicit */_Bool) var_10)))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (((~(((/* implicit */int) var_0)))) <= (((/* implicit */int) arr_2 [i_6])))))));
                                var_25 = ((/* implicit */unsigned short) (~(((unsigned long long int) arr_23 [i_4 - 2] [i_6] [i_5] [i_4 - 2] [12ULL]))));
                            }
                            for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                            {
                                arr_45 [i_3] = var_6;
                                arr_46 [(signed char)4] [i_4] [i_5] [(signed char)22] [(signed char)22] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)28))));
                                arr_47 [i_13] [i_3] [19LL] [i_5] [19LL] [i_3] [19LL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_14 [i_3 - 2] [i_4] [i_4 + 2] [i_4 + 1])))))));
                                arr_48 [i_3] [4LL] [i_5] [4LL] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned short) (short)7632)), (arr_18 [i_4] [i_3]))))) ? ((~(var_1))) : (((/* implicit */long long int) (~(2417284429U))))));
                            }
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
                arr_49 [(unsigned short)16] [i_4] [i_3] = ((/* implicit */short) (~((~(((/* implicit */int) arr_3 [i_3]))))));
            }
        } 
    } 
}
