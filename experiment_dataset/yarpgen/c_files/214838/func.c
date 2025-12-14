/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214838
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_13 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) 432345564227567616ULL)) ? (arr_9 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2]))))));
                        arr_14 [i_1] = ((/* implicit */int) ((unsigned long long int) var_10));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */unsigned short) (~(arr_6 [i_0 + 3] [i_0 + 4] [i_0 - 2])));
    }
    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) arr_4 [i_4] [i_5]);
            arr_21 [i_5] [i_5] = ((/* implicit */_Bool) arr_4 [i_4] [i_5]);
        }
        arr_22 [i_4] = ((/* implicit */unsigned char) var_11);
        var_18 ^= arr_6 [i_4] [i_4] [i_4];
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (signed char)-60)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        arr_25 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */int) (short)14468)) : (arr_24 [i_6] [i_6])))) != ((~(var_12)))));
        arr_26 [i_6] = ((/* implicit */unsigned long long int) arr_24 [i_6] [i_6]);
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (short)14468))) && (((/* implicit */_Bool) arr_24 [i_6] [i_6]))));
        var_21 |= ((/* implicit */unsigned long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_16);
    var_23 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) ((((/* implicit */_Bool) (short)-28328)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28211)))))));
}
