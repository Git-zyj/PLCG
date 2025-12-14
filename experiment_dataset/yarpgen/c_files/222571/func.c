/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222571
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) var_0);
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
        var_19 -= ((/* implicit */unsigned char) var_11);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)28661)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (9347595212671069880ULL)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (signed char)-14);
                    var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7862161876186386831LL)) ? (((unsigned int) arr_0 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 7720662289240642801ULL))))));
                    var_23 = ((/* implicit */signed char) (+(268435456)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (arr_1 [i_3] [i_3])));
        var_25 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 2LL)))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        arr_12 [i_4] = ((((/* implicit */_Bool) (signed char)-9)) ? (arr_3 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32591)))))));
        var_26 = arr_8 [i_4];
    }
    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_27 = ((int) ((unsigned long long int) arr_14 [i_5]));
        var_28 |= ((/* implicit */_Bool) var_14);
        var_29 = ((/* implicit */unsigned char) arr_4 [i_5] [(short)16] [(signed char)11]);
    }
    var_30 = ((/* implicit */long long int) ((var_16) ^ (max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
    var_31 |= var_4;
}
