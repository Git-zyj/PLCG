/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/334
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((unsigned int) (unsigned short)26709)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 -= ((/* implicit */unsigned short) arr_1 [i_0] [7]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))), (((((/* implicit */_Bool) 262154536U)) ? (var_2) : (((unsigned int) (-2147483647 - 1)))))));
                    var_14 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)129)), (((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))) ? (min((((/* implicit */long long int) (short)18)), (-1782553823443816140LL))) : (((/* implicit */long long int) min((1894011693U), (1894011694U))))))));
                    var_15 = ((/* implicit */unsigned long long int) 1894011672U);
                    arr_7 [i_1] [i_2 - 3] = ((/* implicit */_Bool) ((signed char) (+((-(((/* implicit */int) (unsigned short)10092)))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1894011682U)) ? (1894011697U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20238)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)10092))) ? (((/* implicit */long long int) 2400955599U)) : (var_0))))));
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (var_0) : (((/* implicit */long long int) 2400955602U))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57554)) ? (((((/* implicit */_Bool) (~(2857756644U)))) ? (((/* implicit */long long int) var_5)) : (((-5311613035050782483LL) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (arr_13 [(_Bool)1] [i_4])))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) -5311613035050782476LL)))) ? (((/* implicit */int) ((5311613035050782483LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) ((4356121986507307457ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [(unsigned short)3])))))) ? (((((/* implicit */_Bool) var_11)) ? (arr_12 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88))))) : (((/* implicit */long long int) arr_11 [i_4]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_20 = arr_15 [i_5] [i_5];
        arr_16 [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (((/* implicit */int) arr_13 [i_5] [i_5])) : (((/* implicit */int) (unsigned short)10092))))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_6))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) (signed char)-21))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_11))));
    }
    var_23 ^= ((/* implicit */long long int) (short)-7710);
}
