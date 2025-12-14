/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45960
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) < (((((/* implicit */_Bool) -6806695348276040102LL)) ? (var_5) : (var_6))))))) >= (var_9)));
    var_11 = ((var_1) & (var_4));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((var_2) ^ (var_6))) : (((arr_6 [i_0] [i_1] [i_2] [i_2]) - (var_2))));
                    var_13 &= ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 2] [i_1 + 2])) ? (var_0) : (arr_3 [i_0 - 4] [i_0 - 2] [i_1 + 1]));
                }
            } 
        } 
        arr_7 [i_0 - 3] = (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (5208713868158194465LL) : (var_8))));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            arr_12 [i_0] [i_3] [i_3 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (arr_8 [i_0 - 4] [1LL])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (9084965002612310092LL) : (arr_2 [i_0] [i_3 + 1]))) : (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0 - 2] [i_3]) : (var_1))));
            /* LoopNest 3 */
            for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 8; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_14 = ((9223372036854775807LL) ^ (-9084965002612310115LL));
                            arr_21 [i_5] = ((arr_18 [i_3 + 1] [i_0 - 1]) ^ (arr_18 [i_3 + 1] [i_0 - 1]));
                            var_15 ^= (-(((((/* implicit */_Bool) -5033047756249873602LL)) ? (arr_3 [i_6] [8LL] [i_4 + 2]) : (arr_4 [i_4] [i_5]))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (long long int i_7 = 4; i_7 < 11; i_7 += 2) /* same iter space */
    {
        arr_24 [i_7 - 4] = arr_9 [8LL] [i_7] [i_7 - 4];
        arr_25 [0LL] = arr_9 [i_7 - 1] [i_7] [i_7];
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            for (long long int i_9 = 1; i_9 < 9; i_9 += 4) 
            {
                {
                    var_16 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_7] [i_7] [i_7])) ? (1158042744034512017LL) : (-47675903538181366LL)))) || (((-1LL) >= (9223372036854775807LL)))));
                    var_17 &= ((((((/* implicit */_Bool) var_8)) ? (-1LL) : (0LL))) ^ (((arr_14 [i_8]) + (arr_4 [i_8] [i_9]))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_18 [i_7] [i_7 - 3]) : (arr_18 [i_7 - 3] [i_7 - 2])))));
                }
            } 
        } 
    }
    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        arr_33 [i_10] [i_10] = 7360632643730534161LL;
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))));
        arr_34 [i_10] = ((((((/* implicit */_Bool) ((long long int) var_6))) ? (-3590776337903142144LL) : (min((0LL), (var_3))))) + (((((arr_32 [i_10]) & (var_0))) ^ (var_8))));
        var_20 = ((/* implicit */long long int) max((var_20), ((~(((((var_2) | (arr_30 [4LL]))) | (((((/* implicit */_Bool) var_7)) ? (var_3) : (18LL)))))))));
        var_21 = ((long long int) ((arr_30 [10LL]) << (((arr_30 [12LL]) - (92390349208766545LL)))));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (0LL)));
}
