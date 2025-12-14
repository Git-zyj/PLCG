/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223500
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [5U] = ((/* implicit */int) ((4007705204U) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1641477474))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((-968222939) ^ (968222939)));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((long long int) arr_1 [i_1])))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((2016967165U) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_1] [i_1])))))))));
                    var_19 = ((/* implicit */unsigned int) ((unsigned short) -2076796966));
                    arr_8 [i_0] [i_1] [(signed char)21] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)102)) / (var_0)));
                }
            } 
        } 
        var_20 = 968222968;
        var_21 = var_0;
    }
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_7))) ^ (((((/* implicit */int) ((short) arr_10 [i_3]))) ^ (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_4)))))))));
        var_23 ^= ((/* implicit */short) ((signed char) ((int) arr_1 [i_3 + 1])));
        var_24 = ((/* implicit */short) var_3);
        arr_11 [i_3 + 1] = ((/* implicit */unsigned int) var_9);
    }
    /* LoopSeq 4 */
    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) 968222938)) * (arr_4 [i_4] [6LL] [i_4 + 1])));
        arr_14 [i_4 + 1] = ((/* implicit */signed char) var_0);
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 2278000110U))))), (arr_0 [i_5] [i_5]))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_5] [i_5])), (-776008132)))) ^ (max((((/* implicit */long long int) arr_4 [i_5] [i_5] [i_5])), (min((8896959534234176730LL), (((/* implicit */long long int) (unsigned short)690)))))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        arr_21 [i_6] = (+((-(-968222939))));
        var_28 *= ((/* implicit */unsigned short) max((4235161785U), (((/* implicit */unsigned int) ((signed char) ((short) (unsigned short)32103))))));
        var_29 ^= ((/* implicit */unsigned int) var_0);
    }
    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned short) ((var_0) >= ((+(-1651274686)))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            {
                                arr_37 [i_7] [i_8] [i_8] [11U] [i_8] = ((/* implicit */long long int) min((1392505915), (max((106665797), (-1911504210)))));
                                var_30 = ((int) max((((/* implicit */unsigned int) arr_28 [i_9] [(unsigned short)2])), (((unsigned int) (unsigned char)124))));
                            }
                        } 
                    } 
                    arr_38 [(short)5] [1U] [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) (-(1474632750)))) ^ (arr_1 [i_7])))));
                    arr_39 [(signed char)1] [i_8] [i_8] [(signed char)1] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */short) arr_0 [i_7] [i_9])), ((short)-1343)))), (((2333975801U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-854)))))));
                    var_31 += ((/* implicit */short) var_3);
                    arr_40 [i_8] = ((/* implicit */unsigned short) min(((short)-11235), (((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                }
            } 
        } 
        arr_41 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_7] [i_7] [i_7])) * (((/* implicit */int) arr_31 [i_7] [i_7] [i_7]))))) * (((((long long int) var_1)) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (arr_1 [i_7]))))))));
    }
    var_32 = ((/* implicit */unsigned char) ((((int) var_1)) * (((((/* implicit */int) ((unsigned short) (signed char)120))) / ((+(var_8)))))));
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */int) var_13)) < (968222933))))));
    var_34 = max((((/* implicit */int) ((unsigned char) var_12))), (var_0));
}
