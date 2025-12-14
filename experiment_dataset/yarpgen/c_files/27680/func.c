/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27680
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 4; i_3 < 8; i_3 += 3) 
                    {
                        var_11 = (unsigned char)4;
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            arr_15 [i_0 - 1] [i_1] [i_2] [i_2] [i_2] [i_3] [i_4 + 1] = ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (10520118729038410245ULL));
                            arr_16 [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((var_5) + (((/* implicit */int) var_0)))));
                            arr_17 [i_2] [i_1] [i_2] = ((/* implicit */int) ((unsigned int) (short)-14395));
                        }
                        arr_18 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (16578629730183833362ULL) : (arr_2 [i_3 - 4] [i_0 - 1])));
                        var_12 -= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_7)))) : (((/* implicit */int) var_8))));
                    }
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1]))) : (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1])) & (((/* implicit */int) var_10)))))));
                        var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_4)))));
                        var_15 ^= ((/* implicit */unsigned long long int) (unsigned short)63253);
                        arr_22 [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) min((var_10), (var_1)))) / (1872759740)))));
                    }
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((long long int) ((short) min((var_5), (((/* implicit */int) var_9)))))))));
                    arr_23 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) arr_12 [1ULL] [1ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1])))))));
                    arr_24 [i_2] = -1872759741;
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    arr_27 [i_1] [i_0] = min((((/* implicit */long long int) ((int) arr_2 [i_1] [i_0 - 1]))), (var_4));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) var_3)))))));
                                var_18 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [i_7] [i_6] [i_0 + 1])), ((+(-1872759764)))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)63269))))) : ((-(2890925611U)))))));
                                arr_33 [i_0 - 1] [i_0 - 1] [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? ((+(1607584058))) : (((/* implicit */int) max(((short)-14395), (var_6)))))));
                                var_19 = ((/* implicit */int) (((+(var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) | (max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_3)))))))));
                arr_34 [i_0] [i_1] = ((/* implicit */int) ((((arr_6 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((+(16578629730183833375ULL))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_1] [i_1] [(signed char)2] [(signed char)2])))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) max(((+(var_5))), (((/* implicit */int) var_6))))) ? (((((long long int) 1868114343525718247ULL)) - (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)15804), (((/* implicit */unsigned short) var_8)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_9)))))))));
}
