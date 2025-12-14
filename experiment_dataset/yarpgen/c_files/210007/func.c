/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210007
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_2 [i_0]))) & (((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (short)-12234)))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
                {
                    var_15 += ((unsigned short) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) var_1))));
                    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_2]))));
                    arr_12 [i_0] [i_0] [i_1] [i_3 - 1] [i_0] [i_3] = ((/* implicit */int) ((short) ((((((/* implicit */int) arr_0 [i_3 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_3] [i_1])) - (32))))));
                }
                for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (-(arr_7 [(signed char)12] [i_0] [i_2] [(signed char)12])))) : (arr_9 [i_0] [i_1] [i_2] [i_4]))))));
                    arr_16 [i_0] [i_1] [(_Bool)1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)69)) ^ (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 3) 
                {
                    var_18 = ((/* implicit */int) ((var_2) == (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_2 [i_0]))))));
                    arr_20 [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_9))) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)182)) <= (var_11))))));
                    arr_21 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)49)))));
                }
                for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 2) 
                    {
                        arr_28 [i_1] = ((/* implicit */unsigned int) (unsigned char)71);
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_25 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7]));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_2] [i_1] [i_8] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0]);
                        var_20 -= ((((/* implicit */unsigned int) ((var_6) | (arr_11 [i_6])))) == ((+(arr_25 [i_0] [i_1] [i_1] [i_2] [i_0] [i_2]))));
                        arr_32 [i_1] = ((/* implicit */unsigned int) ((arr_29 [i_8 - 1] [(unsigned char)2] [(unsigned char)2] [13U] [i_1]) - (((/* implicit */int) arr_6 [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8 + 1]))));
                    }
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_11 [i_1]) : (-1191796059)))) ? (((/* implicit */int) arr_1 [i_1])) : (var_2)));
                    arr_33 [i_0] [i_1] [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) (unsigned char)169);
                }
                var_22 += ((/* implicit */short) (~(((arr_26 [i_2] [i_1] [10U]) & (((/* implicit */unsigned int) arr_7 [i_2] [i_0] [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (int i_9 = 4; i_9 < 15; i_9 += 4) 
                {
                    var_23 = ((unsigned short) arr_14 [i_0] [(short)1] [i_1] [i_9 - 2]);
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)79)) - (178653921)));
                }
            }
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)8763)) & (((/* implicit */int) (short)8763))))) && (((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_10]))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_11 [i_1]) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3297265540U)))));
                var_27 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0]))));
            }
            arr_38 [i_0] [i_1] = ((/* implicit */_Bool) arr_26 [i_1] [(_Bool)1] [i_0]);
        }
        arr_39 [i_0] [(short)0] = ((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0]));
    }
    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((_Bool) (_Bool)1))) + (((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((unsigned char) ((var_8) / (4294967295U)))))));
    var_29 = ((/* implicit */short) var_6);
}
