/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238744
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 = min((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0]));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2925592971U)) ? (1369374325U) : (1369374330U)));
            arr_5 [(short)2] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) 1369374323U)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)241)))))))));
            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1369374325U)) ? (1369374325U) : (1369374325U)));
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)252)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)12])))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                arr_10 [i_1] [5ULL] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) (short)-16568)), (618663918U)));
                var_13 -= 2925592971U;
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_14 [i_1] [i_0] = ((/* implicit */int) 3676303377U);
                var_14 -= (-(((/* implicit */int) (short)32739)));
            }
        }
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            arr_17 [i_0] [6U] [i_0] = ((/* implicit */short) (signed char)-35);
            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16568)))));
        }
        var_16 *= ((/* implicit */short) (-(4662189894515769247LL)));
        var_17 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [8U] [4U]);
    }
    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(min((((long long int) (signed char)-80)), (((/* implicit */long long int) arr_8 [(short)4] [16U] [(short)4])))))))));
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-7656)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : (307637729U)));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(3676303377U)))) ? (((((/* implicit */_Bool) 2925592977U)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_0)))) : (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 5031597526949183964ULL))) ? (var_6) : ((~(((/* implicit */int) (unsigned char)247)))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_0 [i_6])), (var_3)))))) ? (((/* implicit */unsigned int) 112002093)) : ((+(max((((/* implicit */unsigned int) var_4)), (2212115613U)))))));
        var_23 = ((/* implicit */long long int) arr_11 [i_6] [i_6] [i_6] [12ULL]);
    }
}
