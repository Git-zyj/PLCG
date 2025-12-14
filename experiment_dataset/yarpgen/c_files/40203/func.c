/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40203
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
    var_17 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) var_2))))) + (max((var_12), (((/* implicit */long long int) var_2)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((18187041739598891897ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((arr_1 [21LL] [21LL]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3597400538U)) || (((/* implicit */_Bool) (signed char)68)))))))) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [7U]))))));
        arr_3 [i_0] [(unsigned char)13] = ((max((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(_Bool)1])), ((unsigned short)44806)))), (((int) arr_0 [i_0])))) % ((~(((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775791LL)) ? (2334305986U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_2]);
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(var_10)))))) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) (short)-8207)))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */short) (signed char)0)), (var_6)))))));
            arr_9 [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [(short)0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (max((((/* implicit */unsigned int) arr_5 [16LL])), (arr_4 [i_1] [i_1]))))), (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_7)))));
        }
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
            var_21 = ((/* implicit */short) arr_0 [i_1]);
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)8180)))))) ? (((/* implicit */unsigned long long int) arr_7 [i_1])) : (((unsigned long long int) arr_5 [i_3 + 4]))));
            var_23 += ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_8 [i_1] [(_Bool)1])), ((+(arr_4 [20ULL] [20ULL]))))) < (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [21U] [i_3 + 4]), (arr_1 [i_3 + 1] [i_3 + 1])))))));
            var_24 = ((/* implicit */int) ((arr_6 [i_3 + 2]) <= (((((/* implicit */_Bool) arr_6 [i_3 + 4])) ? (arr_6 [i_3 + 1]) : (arr_6 [i_3 + 4])))));
        }
        arr_13 [(unsigned char)20] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) == (((((/* implicit */unsigned long long int) var_12)) / (max((0ULL), (((/* implicit */unsigned long long int) var_5))))))));
        arr_14 [(signed char)7] = ((/* implicit */signed char) max((max((var_13), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (17199071502416344566ULL) : (((/* implicit */unsigned long long int) var_9)))))), (((((/* implicit */_Bool) max((-6343888536273479492LL), (((/* implicit */long long int) arr_1 [i_1] [i_1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [3ULL]))) % (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) != (-6421491019301126208LL)))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            var_25 = arr_19 [i_4];
            var_26 ^= ((/* implicit */short) arr_1 [i_4] [22LL]);
            var_27 = ((/* implicit */unsigned short) (+(var_10)));
        }
        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_4])) != (((/* implicit */int) arr_16 [i_4])))) ? (max((((long long int) -1525447077)), (((/* implicit */long long int) arr_19 [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) <= (((/* implicit */int) var_1))))))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1025794176)) ? (((8866650765323934446ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)(-127 - 1))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_4])) && (((/* implicit */_Bool) var_0)))), (arr_8 [i_4] [i_4])))))));
    }
    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_6])) ? (arr_15 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [18LL]))) + (var_7)))) ? (var_13) : (min((10486230513643285458ULL), (((/* implicit */unsigned long long int) arr_21 [i_6] [6])))))))))));
        arr_23 [i_6] = ((/* implicit */unsigned short) (~(-4437322029529275976LL)));
    }
}
