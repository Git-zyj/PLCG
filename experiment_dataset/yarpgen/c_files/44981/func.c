/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44981
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
    var_13 *= ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_14 = ((/* implicit */unsigned int) var_5);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned short)65244)))), (var_6)))) ? (max((((((/* implicit */int) (unsigned short)65219)) - (((/* implicit */int) var_11)))), (((/* implicit */int) min((var_8), (var_12)))))) : ((+(((/* implicit */int) var_8))))));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) var_10));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_14 [i_1] [i_2] [i_2] = min((((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [3ULL] [i_2] [2ULL])) >= (((/* implicit */int) arr_3 [i_2] [i_2 + 1] [i_1]))))), (((unsigned short) arr_13 [i_3 + 2] [i_2] [i_1] [i_2] [i_1])));
                        arr_15 [i_2] [i_1] [i_1] [i_2] = (i_2 % 2 == 0) ? ((((+((~(((/* implicit */int) (unsigned short)0)))))) + (((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) << (((((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 3])) - (43241))))))) : ((((+((~(((/* implicit */int) (unsigned short)0)))))) + (((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) << (((((((/* implicit */int) arr_12 [i_2] [i_2] [i_2 + 3])) - (43241))) + (19728)))))));
                        var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_10)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) var_9))))))));
                        var_18 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned short)65250)) ? (((/* implicit */int) arr_3 [i_3] [i_3 + 1] [(short)3])) : (((/* implicit */int) min(((unsigned short)1), (var_4)))))));
                        arr_16 [i_2] [i_1] [i_2] = ((/* implicit */short) ((unsigned short) -1554332805));
                    }
                } 
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
    }
}
