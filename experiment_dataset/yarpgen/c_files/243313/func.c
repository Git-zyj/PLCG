/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243313
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) (-(((min((((/* implicit */unsigned long long int) var_11)), (arr_0 [i_0]))) << (((((unsigned int) (short)-2237)) - (4294965022U)))))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))) : (var_9)));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_2 [i_0])) <= (((((_Bool) var_3)) ? (((/* implicit */long long int) arr_2 [i_0])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (arr_4 [i_0] [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((short) (short)-24717));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 0U)) ? (-1507791093521207527LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))) << (((((/* implicit */int) var_6)) - (14485)))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)28305)) | (((/* implicit */int) (short)-28305))))) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
                }
                /* LoopNest 3 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (unsigned char i_4 = 4; i_4 < 22; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (((-(((/* implicit */int) (short)-11300)))) << (((((((/* implicit */_Bool) -5443762883708495946LL)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))))))) - (96))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                                arr_19 [i_5 + 3] [i_5 + 3] [i_4 - 2] [(_Bool)1] [i_3] [i_1] [i_0] |= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (short)22247)), (13023065645098429176ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) var_13))))) <= (arr_2 [i_4 + 3]))))));
                                arr_20 [i_0] [i_0] [i_3] [4U] [i_5 - 1] [i_5 + 2] [i_4] = ((/* implicit */_Bool) var_14);
                                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22247)) ? (((var_8) << (((arr_3 [i_0] [i_0] [i_0]) - (404499501U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (2299904961392092678ULL))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((var_14) % (((/* implicit */unsigned long long int) 551898555U))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)28305))))))));
    var_22 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_13)))) < (((/* implicit */int) ((_Bool) var_8)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)511)) || (((/* implicit */_Bool) arr_4 [i_6 + 2] [i_6 + 2])))) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 1] [i_6 - 1]))));
        arr_25 [i_6] = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_6 - 1]))));
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_23 = ((arr_12 [i_7] [(short)3] [i_7] [i_7]) / (((/* implicit */unsigned long long int) (~(min((551898552U), (((/* implicit */unsigned int) arr_8 [i_7]))))))));
        arr_30 [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7])) ? (min((arr_3 [16ULL] [i_7] [i_7]), (arr_3 [i_7] [i_7] [i_7]))) : (arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
    }
    var_24 = ((/* implicit */_Bool) var_0);
}
