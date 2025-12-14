/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39337
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (short)27033))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)27009)), (var_4)))), (arr_3 [i_0])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (17179869183ULL))))) : (var_10)));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (short)0);
                    var_18 = ((((/* implicit */int) (short)0)) != (((/* implicit */int) (signed char)58)));
                }
            } 
        } 
        var_19 = (~(max((arr_8 [i_0] [8LL] [i_0]), (((/* implicit */long long int) arr_3 [i_0])))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_13 [i_3] [4U] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [1LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [(signed char)7] [i_3]))) : (var_11)))));
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_5 [i_3])))));
        arr_14 [i_3] [i_3] = ((/* implicit */short) ((var_14) ? (((/* implicit */int) arr_6 [i_3] [i_3] [(_Bool)0])) : ((-(((/* implicit */int) (short)-27034))))));
    }
    var_21 -= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned short) (_Bool)1))))), (var_8))) >= (var_11)));
    var_22 ^= ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_5))))));
}
