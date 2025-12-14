/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3127
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */short) arr_4 [i_0]);
                var_16 = ((/* implicit */short) min((var_16), (var_6)));
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (max((var_5), (((/* implicit */int) var_14)))) : (((var_0) % (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((((/* implicit */int) (unsigned char)253)) > (((/* implicit */int) var_11)))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) var_0)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_0)) * (var_13))), ((((!(((/* implicit */_Bool) arr_0 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_18 |= ((/* implicit */unsigned int) min((arr_15 [i_3] [i_3] [i_3] [i_3 + 1]), (((/* implicit */unsigned long long int) ((long long int) min((var_12), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_3] [i_4]))))))));
                    arr_16 [i_2] [i_3 + 1] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)127))))), (18446744073709551614ULL)));
                    arr_17 [i_4] [i_3 + 1] [i_3] = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) ((unsigned char) (unsigned short)65420))))));
                    arr_18 [i_2] [i_3] [i_4] |= ((/* implicit */_Bool) (+(((/* implicit */int) (short)32763))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] [i_5] = ((/* implicit */short) max(((~(((/* implicit */int) (signed char)-12)))), (((/* implicit */int) (short)-7515))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        arr_30 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 8469321268305128412ULL)) ? (((/* implicit */int) arr_28 [i_5] [(unsigned short)7] [i_5] [i_7] [(unsigned short)7] [i_5])) : (((/* implicit */int) (_Bool)1))))))) ? (((arr_19 [i_6] [i_7]) + (arr_19 [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned short) (short)7518)))))));
                        var_19 = ((/* implicit */int) min((var_19), (((((((((int) var_12)) + (2147483647))) >> (((var_12) - (7883341534584296718ULL))))) + (((((/* implicit */_Bool) arr_26 [7LL] [7LL] [7LL])) ? (((((/* implicit */int) arr_26 [i_5] [11LL] [(short)16])) % (((/* implicit */int) arr_25 [i_5] [i_5] [(signed char)6])))) : (((/* implicit */int) arr_26 [i_8] [i_6] [i_7]))))))));
                        var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))));
                        var_21 = min((((unsigned int) max((var_4), (((/* implicit */long long int) arr_26 [i_5] [i_5] [i_5]))))), (((/* implicit */unsigned int) (unsigned short)24576)));
                    }
                } 
            } 
        } 
        arr_31 [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [(unsigned short)5])) & (((/* implicit */int) (unsigned short)29215)))) <= ((-(((int) var_8))))));
        var_22 = arr_29 [i_5] [i_5] [i_5] [i_5];
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_19 [i_9] [i_9]), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9])) ? (((unsigned long long int) arr_27 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 8388607))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            var_23 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(var_9)))) << (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))))))));
            arr_39 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_9] [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_32 [i_9]))))) / (arr_24 [i_9] [i_9] [i_10]))) << (((/* implicit */int) ((var_7) > (var_7))))));
        }
        arr_40 [(_Bool)1] |= ((/* implicit */unsigned short) var_0);
    }
}
