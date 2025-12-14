/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30074
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) < (-1752103112)));
        var_12 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1752103112)) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (((unsigned int) arr_2 [i_0]))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_13 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_10)), (var_9)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1752103111)) ? (((/* implicit */int) arr_6 [0ULL])) : (1752103111)))) ? (((var_3) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)6]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)10])))))));
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [(unsigned short)12])) - ((+(max((1752103136), (((/* implicit */int) var_0))))))));
        var_15 ^= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_5 [i_1 + 3]))) >> (((/* implicit */int) min((arr_5 [i_1 + 1]), (arr_5 [i_1 + 1]))))));
    }
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((-6843509076218181200LL) ^ (-2725160766129551453LL)));
        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46367)) ? (1752103136) : (-1752103124))))));
        var_17 = ((/* implicit */short) ((max((((6843509076218181199LL) - (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) 1752103111)) / (arr_7 [i_2])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_19 [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) arr_13 [i_2] [i_3] [i_3]);
                        arr_20 [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((-1752103121) / (((/* implicit */int) ((_Bool) 2725160766129551452LL)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_18 *= ((/* implicit */short) arr_7 [i_5]);
                            arr_23 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_5)))) & (1752103127)));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) 595354809);
                            arr_28 [i_3] [i_3] [i_3] [i_5] [i_7] = ((/* implicit */short) var_4);
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) -1752103111))));
                            arr_29 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_26 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]);
                        }
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (arr_12 [i_4]) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_24 [i_2] [i_3] [i_2] [i_5])), (-1752103113)))))))));
                    }
                } 
            } 
        } 
    }
    var_22 ^= ((/* implicit */_Bool) var_9);
}
