/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196955
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (min((var_3), (((/* implicit */unsigned int) (signed char)-38)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (4519700414281343714ULL)))) ? ((-(((/* implicit */int) (signed char)19)))) : (((var_4) % (var_4))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) ((long long int) 9958373315814217802ULL))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (var_3))) : (var_9)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            var_12 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) ((arr_4 [i_0]) - (((/* implicit */int) (signed char)-34))))))))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) var_1);
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2 - 2] [i_1])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_4) : (((/* implicit */int) arr_2 [i_0] [i_2] [i_4])))) : (((/* implicit */int) (signed char)15)))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_3])))))));
                            arr_11 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_1] [i_0 - 1]), (((/* implicit */unsigned short) (signed char)21))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_1] [i_0 + 1]), (arr_2 [i_3] [i_0] [i_0 - 2])))))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */signed char) arr_10 [i_0] [i_1] [i_0] [i_1] [i_1]);
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((signed char) arr_4 [i_5]));
            var_17 = ((/* implicit */signed char) (-((~((-2147483647 - 1))))));
        }
    }
}
