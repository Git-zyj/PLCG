/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5126
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((unsigned long long int) max((5660856759783305393ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 3]))))))));
                    var_11 += ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)45)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4493))))) << (((((((/* implicit */_Bool) 7U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21754))) : (0LL))) - (21691LL)))));
                    var_12 = ((/* implicit */short) min((max((arr_3 [i_2] [i_1 - 2] [6ULL]), (((/* implicit */unsigned long long int) var_4)))), (min((arr_3 [i_0] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_9))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) (short)-26119)))) >= (((/* implicit */int) arr_7 [i_3]))));
        var_14 ^= ((/* implicit */unsigned int) var_4);
        var_15 = ((/* implicit */unsigned long long int) max((max((min((var_1), (((/* implicit */unsigned int) (unsigned char)16)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)2))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)0)))))));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_5))))) < (min((((/* implicit */unsigned long long int) (short)32767)), (arr_11 [i_4])))));
        var_17 = ((/* implicit */short) min((((/* implicit */int) arr_10 [i_4])), ((+(((/* implicit */int) (short)11))))));
    }
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 22; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)3))));
                    var_19 = ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)218)), ((short)-19797)));
                }
            } 
        } 
    } 
}
