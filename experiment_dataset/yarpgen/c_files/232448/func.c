/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232448
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_5)))))) % (((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))) - (((/* implicit */int) arr_0 [i_0]))))));
        var_12 ^= ((/* implicit */long long int) arr_1 [i_0 - 1]);
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0 + 3]);
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_8 [16LL] &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1 + 3]))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1] [(unsigned char)9]))))) ? ((~(((/* implicit */int) arr_6 [(unsigned char)3] [i_1])))) : ((+(((/* implicit */int) arr_7 [i_1]))))))));
    }
    for (long long int i_2 = 3; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) min(((~(max((((/* implicit */long long int) arr_6 [i_2] [i_2 + 1])), (var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -8868701431929084588LL)) ? ((~(((/* implicit */int) arr_5 [i_2])))) : (((/* implicit */int) ((unsigned char) arr_9 [i_2]))))))));
        var_14 = arr_7 [i_2];
        arr_12 [i_2] &= ((/* implicit */long long int) (((-(((((/* implicit */_Bool) 143974450587500544LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (4290421271923125379LL))))) <= (((/* implicit */long long int) ((/* implicit */int) min((max((var_11), (arr_5 [i_2]))), (((/* implicit */unsigned char) ((4290421271923125370LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))))))))));
        arr_13 [i_2] [i_2] = var_11;
    }
    /* LoopNest 2 */
    for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_14 [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))) : (arr_18 [i_3]))) : (arr_17 [i_3 - 2] [i_3 + 2] [i_3 + 2]))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            arr_26 [i_3] [i_3] = ((/* implicit */unsigned char) ((long long int) (~(4290421271923125379LL))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_17 [i_3 - 2] [i_3 - 2] [i_3 - 2])))) && (((/* implicit */_Bool) (unsigned char)7))));
                            var_17 = ((((/* implicit */_Bool) (~((+(arr_24 [i_3] [i_4] [i_5] [i_6] [i_3])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -8704557767675116142LL)) ? (((/* implicit */int) max(((unsigned char)254), ((unsigned char)213)))) : (((/* implicit */int) max((var_0), ((unsigned char)145))))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (7276084126862772198LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = var_5;
    /* LoopSeq 1 */
    for (unsigned char i_7 = 2; i_7 < 11; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 2; i_8 < 12; i_8 += 4) 
        {
            for (unsigned char i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        arr_38 [i_7] [i_9] [(unsigned char)4] [i_7 - 1] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [13LL] [i_10] [i_8 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8)))) ? ((~(arr_34 [i_8] [i_8 - 1] [i_8 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_34 [i_7] [i_8] [i_8 + 2]))))));
                        arr_39 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)0)))), ((~(((/* implicit */int) arr_10 [i_7 + 1]))))));
                        arr_40 [i_9] [i_9] = ((/* implicit */unsigned char) 8704557767675116142LL);
                        var_19 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_22 [i_9] [i_9] [i_9]))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) min((var_20), (((long long int) ((((/* implicit */int) (unsigned char)0)) >> (((arr_24 [i_7] [i_7] [i_7] [i_7 + 2] [i_7]) - (7094260702822233743LL))))))));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
                {
                    {
                        var_21 = ((/* implicit */long long int) (unsigned char)171);
                        arr_49 [i_7] [i_7] [(unsigned char)9] [i_11] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [18LL])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10)))))));
                    }
                } 
            } 
        } 
        var_22 ^= ((long long int) var_7);
        var_23 = arr_35 [i_7] [12LL] [i_7];
    }
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_7))));
}
