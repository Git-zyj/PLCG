/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206197
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
    var_10 = ((/* implicit */unsigned char) var_6);
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) << (((var_7) - (1785605828159955100ULL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((((/* implicit */int) arr_3 [i_0 - 2])) % (((/* implicit */int) arr_3 [i_0 - 2])))))))));
                    var_13 = ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((signed char) ((arr_3 [i_2 - 2]) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_2 + 2]))))))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(max((arr_2 [i_2 + 3]), (arr_2 [i_2 - 2]))))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] [i_1] [(short)3] = ((/* implicit */short) ((((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2 - 2] [i_0] [i_0])), (arr_6 [i_2] [i_2]))) != (((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_0] [i_2] [i_2] [i_2] [i_0]))))) ^ (((/* implicit */int) arr_9 [i_2] [i_2] [(_Bool)1] [i_0]))));
                }
                for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_0 - 2])) ? (((/* implicit */int) arr_12 [i_5 + 4] [i_5] [i_0 + 2] [i_6] [i_0])) : (((/* implicit */int) (short)9407))));
                        var_16 = ((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [13ULL] [(short)13] [i_5] [i_1]);
                    }
                    var_17 = ((/* implicit */unsigned char) (~(max(((~(((/* implicit */int) (unsigned char)96)))), (((/* implicit */int) var_4))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_8))))))) ? ((~(((/* implicit */int) arr_1 [12U] [i_1])))) : ((-(((/* implicit */int) arr_1 [i_1] [i_5]))))));
                }
                var_19 = min(((short)10318), (((/* implicit */short) (_Bool)1)));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) ((arr_17 [i_1]) / (arr_17 [i_1])))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)-10319))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_7 = 4; i_7 < 23; i_7 += 4) 
    {
        var_22 = ((/* implicit */int) ((unsigned int) ((short) (_Bool)1)));
        arr_21 [(short)21] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_8 = 3; i_8 < 11; i_8 += 3) 
    {
        arr_26 [i_8] = ((/* implicit */int) ((unsigned int) arr_24 [i_8] [i_8]));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) < (((/* implicit */int) ((arr_2 [i_8]) == (((/* implicit */long long int) arr_14 [i_8 - 2] [i_8 - 2] [12U] [i_8]))))))))) : (min((max((arr_23 [i_8 + 1]), (((/* implicit */long long int) (unsigned char)89)))), (((/* implicit */long long int) (unsigned char)185))))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        arr_34 [i_8] [i_9] [i_9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_12 [i_8 - 3] [i_9] [i_9] [i_10] [i_11]))) << (((/* implicit */int) var_2))));
                        var_24 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) (_Bool)1)))));
                    }
                    arr_35 [i_8] [i_8] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)107)), (2083210838945402014ULL)))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-181873888558053369LL)))) ? (((arr_7 [i_10] [i_9] [i_10]) - (((/* implicit */int) arr_4 [i_8 - 3] [i_9] [i_10] [i_9])))) : (((/* implicit */int) arr_9 [i_10] [i_9] [i_10] [i_10])))) : (min((((/* implicit */int) ((unsigned char) arr_24 [i_10] [i_9]))), (((((/* implicit */_Bool) arr_28 [i_8])) ? (-653296940) : (((/* implicit */int) (short)10495))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_39 [i_8] = ((/* implicit */long long int) ((unsigned char) (~(-1742478704))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-30574)) * (((/* implicit */int) var_1)))), (((/* implicit */int) ((0ULL) < (arr_15 [i_8] [i_8] [i_10]))))))) % ((~(max((var_7), (((/* implicit */unsigned long long int) arr_0 [i_9]))))))));
                        var_26 = ((/* implicit */short) (((_Bool)1) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_11 [i_8] [i_8] [i_9] [i_9] [i_10] [i_10] [i_12])))), (((long long int) (unsigned char)240)))) : (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)120))))) & (arr_8 [i_8 - 3] [i_9] [i_10] [i_10])))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) max((var_27), (min((min((arr_2 [i_8]), (arr_31 [i_8]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-120)))))))));
    }
}
