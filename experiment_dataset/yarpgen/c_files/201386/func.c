/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201386
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
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) 3280192597283250295ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)24146)) || (((/* implicit */_Bool) (signed char)-82)))))) : (9223372036854775807LL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            arr_8 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_1 + 1])) ? (2147483647) : (((/* implicit */int) ((short) arr_6 [i_0] [i_1])))));
            var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_3 [i_0]))));
            var_13 -= (!((!(((/* implicit */_Bool) 3351777485U)))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_14 [i_2] = ((/* implicit */int) 3280192597283250295ULL);
                        var_14 = ((/* implicit */int) (-(4928487774417620580ULL)));
                    }
                } 
            } 
            var_15 = ((/* implicit */_Bool) var_8);
        }
        for (short i_4 = 1; i_4 < 11; i_4 += 1) 
        {
            var_16 = ((/* implicit */long long int) 4481668812528704134ULL);
            var_17 = ((/* implicit */int) (short)2808);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            arr_22 [2ULL] [i_5] [i_5] = ((/* implicit */long long int) arr_1 [i_0 + 2]);
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((-9109352935793548754LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
            arr_24 [i_0] [0LL] [i_0 + 2] = ((/* implicit */unsigned short) 8033954410539967094ULL);
        }
        var_18 *= ((/* implicit */short) var_2);
        var_19 = ((/* implicit */int) min((((long long int) arr_9 [i_0 + 4])), (((/* implicit */long long int) var_8))));
    }
    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        var_20 -= ((/* implicit */unsigned int) arr_4 [i_6] [i_6]);
        arr_27 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-24141))));
    }
    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        var_21 *= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_28 [i_7 - 1] [6LL])), (min((arr_29 [i_7 + 1] [i_7]), (arr_29 [i_7 - 1] [12LL])))));
        arr_30 [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_28 [i_7] [(short)11])) >> (((unsigned long long int) (signed char)31))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_28 [i_7] [i_7]))));
        var_23 += arr_28 [i_7] [i_7];
        arr_31 [i_7] [i_7] = ((/* implicit */_Bool) (((-(arr_29 [i_7 - 1] [i_7 - 1]))) % (((((/* implicit */_Bool) 6526626570610036670ULL)) ? (arr_29 [(_Bool)1] [i_7 - 1]) : (var_9)))));
    }
    var_24 = ((/* implicit */int) 8033954410539967096ULL);
}
