/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53136
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [2LL] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((unsigned long long int) (short)-12)))));
                    arr_8 [i_2] [12] [i_2] = ((/* implicit */unsigned long long int) (unsigned short)6681);
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_6 [14LL] [i_0 - 1] [i_0 - 1]));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_5 [6LL] [6LL] [i_0 - 1] [i_0 - 1]) | (arr_5 [6] [6] [i_0 - 1] [i_0 - 1])));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned char) (~(arr_1 [i_0 - 1] [i_3 + 4])));
            arr_16 [i_3 - 2] [(_Bool)1] [i_0] = ((_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)0))));
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3]))) / (((((/* implicit */_Bool) (short)18487)) ? (10572228378089376554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4356)))))));
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (+(arr_3 [i_3 + 1] [i_3]))))));
        }
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_16 &= ((/* implicit */unsigned short) (~(((int) ((0ULL) >> (((((/* implicit */int) (unsigned short)65535)) - (65510))))))));
        arr_22 [i_4] = ((/* implicit */unsigned int) (unsigned char)141);
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_25 [i_5] &= ((/* implicit */long long int) arr_24 [i_5 - 1]);
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_5 - 1])) + (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_5 - 1])), (var_1))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_21 [0LL] [0LL])), (arr_3 [i_6] [i_6])));
        var_19 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)6)), (3877966637317969539LL)))) ? (min((var_6), (((/* implicit */unsigned long long int) arr_2 [i_6] [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_28 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6]))) + (var_11)));
    }
    var_20 = ((/* implicit */unsigned long long int) var_5);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_1))));
}
