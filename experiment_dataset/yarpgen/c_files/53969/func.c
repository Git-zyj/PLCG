/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53969
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
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (var_2)))) ? ((+(((/* implicit */int) (short)-1)))) : (var_3)))) ? (((((((/* implicit */int) var_5)) == (((/* implicit */int) var_8)))) ? (1040187392) : ((~(((/* implicit */int) (unsigned short)9214)))))) : ((((+(((/* implicit */int) var_6)))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0 - 1] = -1;
        var_14 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) (+(268427264)))), (var_11)))));
        var_15 = ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]);
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (short)-25967);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((((long long int) ((((/* implicit */_Bool) 268427264)) ? (((/* implicit */int) var_6)) : (arr_6 [i_1])))) | (((/* implicit */long long int) ((/* implicit */int) min(((short)-25967), ((short)-1))))));
        var_17 -= ((/* implicit */unsigned int) ((long long int) 14));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    var_18 *= ((((/* implicit */_Bool) var_2)) ? (min((arr_3 [i_4] [i_3 + 2]), (((/* implicit */unsigned int) (unsigned char)110)))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)6325)), (1023)))));
                    var_19 ^= ((/* implicit */short) (~(9097520283695416313LL)));
                }
            } 
        } 
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (arr_17 [(_Bool)1]) : (((/* implicit */unsigned long long int) var_7))));
    }
}
