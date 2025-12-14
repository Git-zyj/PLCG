/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237578
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((_Bool) (_Bool)1))));
    var_14 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-7383)) || (((/* implicit */_Bool) 8578557336896724370ULL))))) - (((/* implicit */int) ((unsigned short) ((int) var_1))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_2 + 3])) ? (arr_2 [i_1 + 2] [i_2 + 2]) : (arr_2 [i_1 + 1] [i_2 + 3]))));
                        var_16 = ((/* implicit */_Bool) (~((+(arr_2 [i_2 + 3] [i_1 - 1])))));
                        var_17 += ((/* implicit */signed char) arr_9 [i_1 - 1] [i_1 + 2]);
                        var_18 = ((/* implicit */unsigned char) arr_2 [2LL] [i_2 + 2]);
                        var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 9868186736812827246ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8578557336896724383ULL)) ? (((/* implicit */long long int) 2272930915U)) : (((((/* implicit */_Bool) (short)24576)) ? (arr_0 [i_2]) : (((/* implicit */long long int) arr_2 [i_0] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */short) ((14820858417671246048ULL) - (((/* implicit */unsigned long long int) 3189783268U))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_2 - 2] [i_2])))))));
                        var_21 |= ((/* implicit */_Bool) ((unsigned char) arr_2 [i_1 - 1] [10LL]));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [(short)5] [i_2 - 2] [i_4])) ? (arr_8 [i_1] [i_1 - 3] [i_1] [i_4]) : (arr_8 [i_1] [i_1] [i_2] [i_2])));
                    }
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5] [i_5 + 1] [i_1])) ? (((/* implicit */long long int) arr_7 [i_5 + 2] [i_5 + 2] [i_5] [i_1])) : (arr_8 [i_1] [i_5 + 1] [i_2 + 2] [i_1 - 2])));
                            var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 3] [i_2 - 1])) : (((/* implicit */int) arr_1 [i_1 - 3] [i_2 - 1]))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (min((arr_4 [i_0] [i_0]), (554153860399104ULL))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (9868186736812827249ULL))))), (((/* implicit */unsigned long long int) 1700241462U)))))));
                            var_25 = ((/* implicit */int) arr_11 [(unsigned char)6]);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned int) arr_6 [i_0] [6LL] [i_0])))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11)) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1])))))) ? (((int) arr_22 [i_1] [i_1])) : (min(((+(((/* implicit */int) arr_6 [i_0] [i_0] [20LL])))), ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))))));
                        }
                        for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_28 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)34)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9637))))))) ? (((unsigned long long int) arr_15 [i_5 + 1] [i_1] [i_8] [i_1 + 2] [i_8])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [i_8])))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((long long int) arr_24 [i_0] [i_0] [i_0] [(signed char)8] [i_0] [14LL]))));
                            var_30 ^= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2930908766U)) ? (arr_9 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_5] [i_8] [i_8]))))), (arr_8 [i_8] [i_1] [i_2 + 2] [i_1 - 2])))) ? (((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_8]))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1470535823U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1 + 1] [i_2] [(unsigned char)16] [(unsigned char)16] [i_8] [i_5]))) : (2930908766U))))));
                        }
                        var_31 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(short)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_24 [i_0] [i_2] [i_0] [i_5] [i_0] [(unsigned char)6])))) : (((((/* implicit */_Bool) (unsigned char)27)) ? (arr_11 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1])))))))) ? (((/* implicit */int) (unsigned char)243)) : (((((/* implicit */_Bool) arr_19 [i_1] [i_1 - 1] [i_1] [i_2 + 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_19 [i_0] [i_1 + 1] [10U] [i_2 - 1] [i_5 + 2] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_0] [i_1 - 1] [i_2 + 3] [i_2 + 1] [i_5 + 2] [i_5]))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14127434399537441357ULL)) ? (((/* implicit */unsigned long long int) 1364058525U)) : (8578557336896724367ULL)));
                        var_33 += ((/* implicit */long long int) max(((+(arr_21 [i_2 - 1] [(signed char)17] [12] [i_2 - 1]))), (((((/* implicit */_Bool) arr_21 [i_2 + 2] [i_2] [i_2] [i_2 + 1])) ? (arr_21 [i_2 + 1] [(unsigned char)5] [i_2] [i_2 + 2]) : (arr_21 [i_2 + 3] [i_2 + 3] [0LL] [i_2 + 3])))));
                    }
                    var_34 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((unsigned int) arr_1 [i_0] [16LL])), (((/* implicit */unsigned int) ((int) 13750301364809825774ULL))))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((short) var_10)))));
    var_36 += ((/* implicit */unsigned long long int) var_7);
}
