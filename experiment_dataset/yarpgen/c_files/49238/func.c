/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49238
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
    var_17 -= ((/* implicit */long long int) 18446744073709551615ULL);
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (max((((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)46230)))), (((/* implicit */int) (unsigned short)19325)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_8)) : (var_5)))) ? ((~(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) var_13)) ? (1023) : (var_15)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = (~(((arr_0 [i_0]) << (((arr_0 [i_0]) - (4835069735360013216ULL))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_19 = ((/* implicit */signed char) (((+(((/* implicit */int) (short)32767)))) ^ (((((/* implicit */_Bool) (short)19777)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)127))))));
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_7 [i_1 - 2] [i_1 - 4] [i_1 - 4] [i_1 + 2]), (arr_7 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1 - 4]))))));
                        var_20 = max((((/* implicit */long long int) (-2147483647 - 1))), (max((-6945723925813651246LL), (((/* implicit */long long int) (short)-3905)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) 4294967294U)), (5ULL)))));
        var_21 = ((unsigned short) (!(((/* implicit */_Bool) max((1ULL), (var_0))))));
        arr_14 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(9ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (arr_12 [i_4 + 1]))))));
        var_22 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) max(((unsigned char)224), (arr_11 [i_4] [i_4 - 1])))), ((+(16815313898023108102ULL))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -9223372036854775800LL)) <= (var_9))))) ^ ((-(907125414U))))) - (3387841827U)))));
    }
}
