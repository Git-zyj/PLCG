/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243176
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
    var_10 = var_2;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned int) ((short) min((arr_2 [i_0] [i_0]), (((/* implicit */short) arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_1] |= (+(1480001590));
            /* LoopSeq 2 */
            for (short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)-97);
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            var_11 |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((var_5), (var_5)))) ? (((/* implicit */int) ((short) arr_14 [i_0] [i_1] [i_2] [i_1] [(unsigned char)12]))) : (max((var_5), (((/* implicit */int) var_9)))))));
                            var_12 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (signed char)96)))));
                            arr_17 [7] [i_1] [1] [3] [i_4] &= ((/* implicit */unsigned short) 1689275319854914074ULL);
                        }
                    } 
                } 
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_1] [i_2]))));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                arr_21 [i_0] [i_5] = ((/* implicit */_Bool) arr_2 [i_5] [0]);
                var_14 = ((/* implicit */unsigned short) ((1689275319854914074ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_5] [i_1])))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_5]))) : (arr_18 [i_0] [i_1])));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
        {
            arr_25 [(unsigned char)10] [i_6] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_6])) ? (arr_22 [i_0] [i_6]) : (((/* implicit */int) arr_0 [i_0] [i_6]))));
            arr_26 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((signed char) ((var_1) >> (((((/* implicit */int) arr_24 [i_0] [i_0])) - (112))))));
            arr_27 [i_0] [i_6] = ((/* implicit */int) arr_5 [i_0] [i_6]);
        }
        var_16 ^= ((/* implicit */signed char) (((+(arr_11 [i_0] [i_0] [i_0]))) << ((((~(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) + (4084427562495681253LL)))));
        arr_28 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((min((((/* implicit */unsigned int) var_5)), (421382931U))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        arr_32 [(short)3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_7])) ? (((/* implicit */int) arr_31 [i_7])) : (arr_29 [i_7])));
        arr_33 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_7])) ? (arr_29 [i_7]) : (arr_29 [i_7])));
        var_17 |= ((/* implicit */signed char) (+(arr_29 [i_7])));
    }
    var_18 = ((/* implicit */int) var_3);
    var_19 |= var_3;
}
