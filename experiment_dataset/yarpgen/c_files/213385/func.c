/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213385
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
    var_10 = ((/* implicit */short) (unsigned short)25927);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) arr_2 [i_0])) >= (((((/* implicit */_Bool) 4047127942U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-1396537846630674926LL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) min((var_3), (((/* implicit */unsigned long long int) arr_0 [9ULL] [i_0])))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) min((((arr_2 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))) | (arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 313596489U)) : (var_4))) - (((/* implicit */unsigned long long int) (~(arr_6 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1770643337)) ? (536870911U) : (((/* implicit */unsigned int) arr_4 [i_1]))));
        var_14 = ((unsigned long long int) (~(((/* implicit */int) (unsigned char)166))));
    }
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (var_4)));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 4; i_3 < 17; i_3 += 4) 
        {
            arr_15 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) : (1357826355U))), (((/* implicit */unsigned int) (unsigned short)39592))))) ? (((((/* implicit */int) arr_12 [i_2 - 2])) - (((/* implicit */int) arr_10 [i_3 + 1])))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (unsigned short)11889)), (3185284643U)))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_16 = ((/* implicit */int) min((var_16), ((-(((/* implicit */int) (unsigned char)48))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */unsigned char) ((_Bool) arr_12 [i_4]))), (var_5))))));
                    var_18 = ((/* implicit */unsigned long long int) var_9);
                }
                arr_21 [i_2] [i_3] [i_4] [i_4] = ((((unsigned int) ((((/* implicit */_Bool) 4231512960100594935ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)98))) : (var_2)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)39602)))));
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_11 [(unsigned short)13] [i_3] [i_3])), (var_3)));
                var_20 = min((((/* implicit */unsigned long long int) ((arr_11 [i_3 - 4] [i_3] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))), (min((((/* implicit */unsigned long long int) 8184LL)), (var_3))));
            }
        }
        var_21 = ((/* implicit */unsigned int) max((var_21), (var_7)));
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) 9304613371379532162ULL)) ? (((((3295865984U) << (((((/* implicit */int) (unsigned char)39)) - (34))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))))) : (min((((((/* implicit */_Bool) 1311728371)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) : (arr_13 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 373357877)) ? (((/* implicit */int) (short)-28850)) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])))))))));
    }
    var_23 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)-14811)), (((unsigned int) (-(((/* implicit */int) (unsigned char)217)))))));
    var_24 += var_9;
    var_25 ^= ((/* implicit */int) var_5);
}
