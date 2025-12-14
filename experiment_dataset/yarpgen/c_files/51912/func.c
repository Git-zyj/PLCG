/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51912
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (signed char)127))));
        var_17 = ((/* implicit */long long int) (((+(1468229694U))) | ((+(min((((/* implicit */unsigned int) (_Bool)1)), (1151690774U)))))));
        arr_4 [i_0] &= arr_2 [i_0];
        var_18 = ((/* implicit */int) (+((+(var_8)))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) (-(-7713293702806282654LL)));
        var_20 &= ((/* implicit */short) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-18410))) % (2826737602U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_4)))))));
                        var_22 &= ((/* implicit */unsigned long long int) var_10);
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ ((~(arr_6 [i_1])))));
    }
    for (short i_5 = 3; i_5 < 7; i_5 += 2) 
    {
        arr_18 [i_5] |= ((/* implicit */long long int) var_2);
        var_23 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (min((((/* implicit */unsigned int) (unsigned char)132)), (1151690774U))));
    }
    var_24 = ((/* implicit */unsigned short) (+(2026626864)));
    /* LoopSeq 2 */
    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_25 += ((/* implicit */short) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_22 [(short)3] [i_6])))) < (((/* implicit */int) min((var_12), (arr_7 [i_6]))))));
        var_26 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_5))))))) >= (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2826737602U))))));
        var_27 = ((/* implicit */short) ((arr_13 [12] [i_6]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (var_9)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))));
    }
    for (unsigned int i_7 = 2; i_7 < 13; i_7 += 3) 
    {
        var_28 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_7 - 2])) % (((/* implicit */int) var_6)))) % (((/* implicit */int) var_13))));
        arr_25 [(unsigned char)8] = ((/* implicit */short) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_7 - 2]))))) - (var_8)))));
    }
    var_29 &= ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned short) (short)-24766))));
    var_30 = ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */_Bool) var_5)) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (1124001104U))));
}
