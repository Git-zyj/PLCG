/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51178
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
    var_16 = var_11;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) arr_0 [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_6 [i_2] [i_2] [(_Bool)1] = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((max((max((arr_5 [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1)))), (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1536))))))) % (((((min((arr_5 [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1)))) + (9223372036854775807LL))) >> (((((((/* implicit */int) (unsigned short)36003)) ^ (var_12))) - (17962186)))))))) : (((/* implicit */unsigned short) ((max((max((arr_5 [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1)))), (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1536))))))) * (((((((min((arr_5 [i_2] [i_2]), (((/* implicit */long long int) (_Bool)1)))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */int) (unsigned short)36003)) ^ (var_12))) - (17962186))))))));
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_13 [i_2] [i_2] [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_2 [i_0] [i_0] [11LL]));
                            arr_14 [i_2] [(unsigned short)12] [i_1] [i_2] [(signed char)5] [(signed char)1] = ((/* implicit */int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_11)))), (((/* implicit */int) arr_8 [i_3] [i_2] [i_4 - 1])))))));
                        }
                    } 
                } 
            }
        }
        arr_15 [i_0] = arr_10 [i_0] [i_0];
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_5]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)29533)))))))) ? (((/* implicit */int) (unsigned short)36003)) : (1395204849)));
            var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_16 [i_0])), (var_8)))) ? (((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (var_3)))) : ((~(1395204833)))))), (max((arr_2 [i_5] [i_0] [i_0]), (var_14)))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_20 ^= arr_9 [10LL] [i_6] [i_7];
                            var_21 = ((/* implicit */long long int) arr_24 [i_6] [i_8 + 1] [i_8 + 1] [i_6]);
                            arr_29 [i_6] [i_7] [10] [i_6] = (~(((/* implicit */int) var_9)));
                            var_22 ^= (+(arr_11 [i_0] [i_8 + 1] [i_7] [i_9 + 2] [i_0]));
                        }
                    } 
                } 
            } 
            arr_30 [i_0] [0LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39994)) ? (var_6) : (((((/* implicit */int) arr_23 [i_6] [0] [i_6] [(unsigned short)10])) - (((/* implicit */int) (unsigned short)29532))))));
            arr_31 [i_6] [i_6] = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
            arr_32 [(signed char)2] [i_6] [(signed char)2] |= ((/* implicit */unsigned short) -1218436233);
        }
    }
    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
    {
        arr_35 [i_10 + 1] [i_10 + 1] = ((/* implicit */_Bool) ((var_7) ? (((((/* implicit */long long int) max((-1395204850), (2024297625)))) / (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */int) arr_21 [i_10 + 1]))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) max((var_1), (arr_25 [i_10] [(unsigned short)5] [(signed char)4] [13LL] [(unsigned short)5])))))))));
        var_23 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (signed char)0)))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_15))));
}
