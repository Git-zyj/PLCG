/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222431
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [23LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 228964276U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_0] [i_1] [i_0] [i_2]) != (((/* implicit */unsigned long long int) 4286578688U)))))) - (arr_4 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [(_Bool)1]))));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (~(arr_8 [4LL] [4LL] [i_2] [i_2 + 1])));
                                var_17 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_4] [i_0] [i_2] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) var_0))))));
                                var_18 ^= (!(((/* implicit */_Bool) 72057594037927936ULL)));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(var_5))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */signed char) arr_1 [i_2]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (var_5)));
                        var_22 += ((/* implicit */short) 4066003020U);
                    }
                } 
            } 
        } 
        arr_26 [i_5] = ((/* implicit */unsigned long long int) var_4);
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5 + 1] [i_5 - 1])) ? (var_6) : (5855562077249668911LL)));
        arr_27 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_5] [i_5 + 1])) : ((+(((/* implicit */int) var_10))))));
    }
    for (short i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((18374686479671623679ULL), (((/* implicit */unsigned long long int) ((long long int) 72057594037927937ULL)))))) ? ((~(((((/* implicit */long long int) 4286578660U)) - (arr_1 [21LL]))))) : (((((/* implicit */_Bool) var_7)) ? (((var_5) / (((/* implicit */long long int) 66977792)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)985)), (arr_0 [i_9] [i_9])))))))));
        var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */unsigned long long int) 6478027504273348202LL)))) < (((/* implicit */unsigned long long int) min((arr_1 [i_9]), (((/* implicit */long long int) arr_11 [i_9] [i_9] [i_9] [i_9] [i_9])))))))), ((+(arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))));
    }
    var_26 &= ((/* implicit */_Bool) var_14);
    var_27 = ((/* implicit */unsigned short) (+(max(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) 5855562077249668911LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))))));
    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((var_5) == (((/* implicit */long long int) ((/* implicit */int) var_15)))))) % (((/* implicit */int) var_15))))) != (((unsigned int) ((((/* implicit */_Bool) 126100789566373888LL)) ? (7393422461508618944ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
}
