/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54640
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
    var_11 = var_0;
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((2256759059U), (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_13 = ((/* implicit */long long int) (short)23307);
        arr_3 [i_0] = ((/* implicit */unsigned short) min(((-((+(((/* implicit */int) (short)-29426)))))), (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    arr_14 [18ULL] [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_2]);
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */int) var_3);
                    arr_16 [i_2] = ((/* implicit */short) min((min((((/* implicit */long long int) var_9)), (max((arr_9 [i_3] [i_3]), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) max((arr_13 [0] [0] [i_1]), (arr_13 [i_1] [i_2] [i_3]))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((int) arr_7 [i_2 + 1])), (((((/* implicit */int) arr_0 [i_2 + 1])) % (((/* implicit */int) arr_0 [i_2 - 1])))))))));
                }
            } 
        } 
        var_15 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((3317647484454519891ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23308)))))) >= ((-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))))));
        var_16 += ((/* implicit */short) (-(max((((/* implicit */long long int) min(((short)23296), ((short)24284)))), (((long long int) 2256759059U))))));
        var_17 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) (short)-4700))), (((unsigned int) arr_6 [i_1]))));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_18 [i_4])))) <= (((/* implicit */int) ((short) arr_4 [i_4])))));
        arr_19 [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23296))) * (1103998047281619804ULL));
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned short) ((((unsigned int) min((arr_9 [i_5] [i_5]), (((/* implicit */long long int) 95863844))))) + (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5])) && (var_8)))))));
        var_19 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_17 [(short)4]), (((/* implicit */unsigned long long int) var_4))))) && (((/* implicit */_Bool) ((short) arr_0 [i_5])))))), ((unsigned short)37795)));
    }
}
