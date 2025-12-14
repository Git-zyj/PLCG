/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243909
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)4923))) != (((/* implicit */int) var_3))))) <= (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (min(((unsigned char)94), ((unsigned char)107))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_12 = (signed char)29;
            var_13 = ((/* implicit */signed char) (unsigned char)117);
        }
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [12U] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [9LL] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1] [i_0 - 1]))))), (((((/* implicit */long long int) max((2374829631U), (((/* implicit */unsigned int) (unsigned char)88))))) - (((long long int) 0ULL))))));
        var_14 = ((/* implicit */unsigned char) var_5);
    }
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_15 |= ((/* implicit */long long int) max((((arr_1 [i_2 + 2]) > (((/* implicit */unsigned long long int) 1920137665U)))), (((((/* implicit */int) var_5)) <= (((/* implicit */int) (short)16383))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 4) 
        {
            var_16 &= ((/* implicit */unsigned short) (-((+(4889674072496460559ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                arr_13 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (arr_8 [i_2]) : (1742224838U))) % (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_3] [i_4])))))));
                var_17 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (arr_0 [i_2 + 2])));
            }
        }
        arr_14 [i_2] [i_2 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (short)-24118)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((short) var_3))) - (((/* implicit */int) var_8))))) : (max((((34359738367LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (arr_3 [i_2])))));
        var_18 = max((max((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) var_4))))), (((long long int) (short)-27303)))), (((/* implicit */long long int) max((arr_2 [i_2] [i_2 + 3] [i_2 + 3]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27290))) == (var_6))))))));
    }
    var_19 = ((/* implicit */int) var_9);
}
