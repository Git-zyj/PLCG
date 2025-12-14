/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50884
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
    var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2406735637U)) ? (18446744073709551615ULL) : (1591657211187981031ULL)));
    /* LoopSeq 4 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_15 *= (-(((((((/* implicit */int) (unsigned short)39430)) < (arr_0 [14U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50035))) : (((((/* implicit */_Bool) (unsigned short)26106)) ? (((/* implicit */unsigned long long int) 3352550132U)) : (2312872237952801271ULL))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)32))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)14843))))) ? (min((var_8), (((/* implicit */unsigned long long int) arr_7 [i_2 + 2] [i_0 - 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) var_0)) : (var_2))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0 - 2] [(unsigned short)2] [i_0 - 2]))))) ? (max((var_6), (((/* implicit */unsigned int) arr_5 [i_0] [i_0 - 2])))) : (((arr_5 [i_0] [i_0 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 - 3]))) : (arr_6 [i_0] [6ULL] [i_0 - 2])))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39453)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))));
        var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_4] [i_4]))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)31)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
        arr_13 [i_4] = (-((~(var_6))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))) & (1591657211187981055ULL)))) ? (((/* implicit */unsigned long long int) var_7)) : (18446744073709551607ULL)));
        var_22 = var_4;
        arr_17 [(unsigned short)6] [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 1067333841U)) : (0ULL)));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (131071U)));
                    var_25 = ((/* implicit */unsigned int) ((int) 5845317489787397749LL));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(arr_0 [i_6]))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) var_13))));
                    var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)28672))))) ? (((/* implicit */int) ((3352550123U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)7914)))))));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        arr_25 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551579ULL))) | (1308703592090041072ULL)));
        var_29 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)15512), (((/* implicit */unsigned short) (_Bool)0))))) >> (((((/* implicit */int) ((unsigned short) (unsigned short)32640))) - (32623)))));
    }
    var_30 += ((/* implicit */long long int) (!(var_3)));
    var_31 = ((/* implicit */short) var_7);
}
