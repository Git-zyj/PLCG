/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238088
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_17 [6LL] [i_4] [i_3] [i_3 + 2] [i_4] = (+(4493352983853197599LL));
                                var_17 = min((((1251676628224359814LL) | (arr_11 [i_3 + 2] [i_4] [i_4] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_0 [17LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_16)))))) : (min((-6355557866564752233LL), (4493352983853197599LL))))));
                                var_18 = -4493352983853197599LL;
                            }
                        } 
                    } 
                    var_19 = (+(-4493352983853197599LL));
                    arr_18 [i_1] [i_0] = var_7;
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 14; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                var_20 = var_13;
                /* LoopSeq 1 */
                for (long long int i_7 = 2; i_7 < 16; i_7 += 3) 
                {
                    arr_27 [i_7 - 1] [i_6] = ((max((arr_15 [i_5 - 1] [i_7 - 1] [i_7 - 1]), (arr_15 [i_5 - 1] [i_7 - 1] [i_7 - 1]))) >> (((((long long int) 1312652262101575494LL)) - (1312652262101575436LL))));
                    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -5508068265068018781LL)) ? (arr_20 [i_6]) : (var_14)))) ? (((((/* implicit */_Bool) arr_4 [i_7])) ? (var_11) : (arr_8 [i_7] [i_5]))) : (arr_1 [i_5 - 1]))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_5] [i_5 + 3] [i_5 + 3] [i_7 + 1]) == (min((-4611686018427387904LL), (-4493352983853197599LL)))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) 2828188871289515721LL)) ? ((+(arr_9 [i_8] [i_8] [i_10] [i_10]))) : (((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (4493352983853197599LL)))) ? (min((6193450067697207783LL), (arr_30 [i_8] [i_10]))) : (((-1LL) / (-4409107117255121567LL))))));
                    arr_35 [i_8] [i_10] [i_10] [i_10] = (((((+(3675669115914597243LL))) % (max((-4493352983853197599LL), (arr_30 [i_9] [i_9]))))) + (2828188871289515721LL));
                }
            } 
        } 
    } 
    var_23 = var_11;
    var_24 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (1312652262101575494LL) : (var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (4493352983853197599LL) : (var_15))) : (((((/* implicit */_Bool) -8793948150264051447LL)) ? (var_9) : (var_9))))) & (max((((/* implicit */long long int) ((-5457337336808177571LL) >= (var_12)))), (((((/* implicit */_Bool) var_5)) ? (var_8) : (5126117811422341726LL))))));
}
