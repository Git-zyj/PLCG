/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32795
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_13 = ((16ULL) * (72057594037927936ULL));
        var_14 = arr_0 [i_0] [i_0];
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
            {
                {
                    var_15 = var_2;
                    var_16 *= ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [9ULL])) ? (max((arr_6 [i_2]), (arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))));
                }
            } 
        } 
        arr_13 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((13593136848796096015ULL) / (4853607224913455602ULL)))) ? (18374686479671623686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) || (((/* implicit */_Bool) arr_4 [i_1]))))))))) ? (min((((var_12) % (14556920897507827070ULL))), ((~(var_3))))) : (((((/* implicit */_Bool) ((unsigned long long int) 16192752292381871653ULL))) ? (((arr_5 [i_1] [i_1]) - (var_4))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (arr_8 [i_1] [i_1]) : (var_1))))));
        arr_14 [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (72057594037927930ULL) : (18446744073709551599ULL)));
    }
    var_17 = ((/* implicit */unsigned long long int) ((var_4) == (((unsigned long long int) ((unsigned long long int) 37041896738403219ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_18 ^= ((unsigned long long int) 10829772058049173921ULL);
        var_19 ^= ((unsigned long long int) 4ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 24; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16383ULL)) ? (0ULL) : (18409702176971148397ULL))) == (((unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_4] [i_8] [i_6] [i_7]))))))))));
                                arr_26 [i_7] = arr_21 [i_7] [i_5];
                                arr_27 [i_4] [i_4] [i_7] [i_7] [i_6 - 3] [i_7] [i_8] = ((unsigned long long int) (+(((((/* implicit */_Bool) 10ULL)) ? (7377878502595555445ULL) : (12019319402874228171ULL)))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 15617397936242847752ULL)) ? (6427424670835323444ULL) : (10581053202981842807ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_6 - 4] [i_6 - 4] [i_6 - 3] [i_6 - 2] [i_6]) > (arr_23 [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_6 - 3])))))));
                    arr_28 [i_4] [i_4] [i_4] [i_4] = max((((unsigned long long int) 18446744073709551615ULL)), (min((min((13593136848796096015ULL), (18437739076711446672ULL))), ((-(7377878502595555445ULL))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 1ULL)) && (((/* implicit */_Bool) 37041896738403219ULL))))) + (((/* implicit */int) ((arr_18 [i_4] [10ULL]) == (((((/* implicit */_Bool) 14556920897507827075ULL)) ? (16882122952999230167ULL) : (0ULL))))))));
                    arr_29 [i_4] [i_5] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6] [i_5])) ? (arr_23 [i_4] [i_4] [i_4] [i_6 - 1] [i_6 - 2]) : (18164401450922835837ULL)))) ? (arr_20 [i_6 - 2] [i_5] [i_6 - 4] [i_4]) : (arr_16 [i_6 - 3]))) | (((unsigned long long int) arr_21 [i_4] [i_5])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) ((unsigned long long int) max((arr_23 [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_19 [i_4] [i_4] [i_4])))))));
    }
    var_24 ^= var_4;
}
