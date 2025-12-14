/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207541
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
    var_12 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned long long int) var_9))));
    var_13 = ((/* implicit */unsigned short) (~((~(12661163264561348220ULL)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_14 = ((/* implicit */long long int) var_4);
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */short) var_11);
            var_15 ^= ((/* implicit */unsigned int) ((((max((arr_3 [(unsigned char)0] [i_1] [i_1]), (((/* implicit */unsigned long long int) 4294967295U)))) & (((/* implicit */unsigned long long int) 20U)))) / ((((!(((/* implicit */_Bool) arr_0 [i_0 - 1] [8ULL])))) ? (((/* implicit */unsigned long long int) 1520287145)) : (min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) 14U))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) -1477567277);
            var_17 = (-(((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) << (((((/* implicit */int) var_2)) - (10121))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)236)) & (((/* implicit */int) arr_1 [i_0]))))))));
            var_18 ^= 20U;
        }
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) max((max((((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 - 3])), (var_8))), (((((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3 + 3] [i_0 + 1])) ? (arr_10 [i_3 + 1] [i_3 + 1] [i_0 - 1]) : (arr_10 [i_3 - 1] [i_3] [i_0 - 1])))));
                        arr_17 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) (signed char)126);
                    }
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 3330449058U)) : (12509001654449483233ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) / (1170007090U))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6]))) < (((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))));
        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) arr_18 [i_6])))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5178483334628644298LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7]))) + (arr_21 [i_7] [i_7])))));
        var_23 = ((/* implicit */short) ((1027560969U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_7]))) == (var_1)))) <= (((/* implicit */int) var_2))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_1);
}
