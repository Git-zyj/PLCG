/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227862
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [(unsigned char)5]))) <= (-7678029954154218556LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0])) << (((var_4) - (16852866561785451803ULL)))))) : (((unsigned long long int) -7678029954154218556LL))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned int) ((arr_1 [i_0] [i_0 + 2]) >> (((/* implicit */int) ((_Bool) -7678029954154218532LL))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7678029954154218556LL)) ? (((((/* implicit */unsigned long long int) max((arr_6 [i_1] [i_3]), (((/* implicit */int) var_7))))) - (((unsigned long long int) arr_9 [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_8 [i_3] [22ULL] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_3] [i_3])))) : (((unsigned long long int) arr_8 [i_3] [i_3] [i_3]))))));
                    arr_10 [i_3] [i_3] &= ((/* implicit */signed char) ((unsigned short) var_5));
                    var_14 = ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                    arr_12 [i_1 + 1] [i_1] = ((/* implicit */_Bool) ((int) -7678029954154218571LL));
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */int) arr_9 [i_1] [12ULL])) < (((/* implicit */int) arr_9 [(signed char)6] [(signed char)6]))))) - (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_3 [i_1] [i_1])) - (((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_8 [10ULL] [i_1] [i_1 - 1]))))))));
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((((unsigned int) -7678029954154218556LL)) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [15] [i_1 + 1])) - (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])))))));
    }
    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        var_16 += ((/* implicit */unsigned char) ((((-7678029954154218571LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)127)) - (127)))));
        var_17 = ((/* implicit */unsigned char) min((arr_7 [i_4]), (((/* implicit */unsigned int) ((((long long int) arr_8 [18] [i_4] [i_4])) > (((/* implicit */long long int) arr_6 [(_Bool)0] [(_Bool)0])))))));
        arr_18 [(unsigned short)16] [i_4] = max((7678029954154218555LL), (((/* implicit */long long int) ((-7678029954154218560LL) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((var_10) >> (((7678029954154218571LL) - (7678029954154218565LL))))), (var_5))))));
}
