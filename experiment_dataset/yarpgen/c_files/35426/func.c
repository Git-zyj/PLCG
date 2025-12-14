/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35426
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
    var_19 = ((/* implicit */_Bool) ((unsigned short) var_6));
    var_20 = ((/* implicit */signed char) min((var_5), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -8331984665864035782LL)) || (((/* implicit */_Bool) 8331984665864035782LL)))), (((((/* implicit */int) var_6)) <= (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 1])), (0ULL)))) ? (((/* implicit */int) ((_Bool) (short)-17))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0] [i_0 + 1])), (arr_1 [i_0] [i_0 + 1]))))));
                var_22 = ((/* implicit */short) (-(15406134171189632957ULL)));
                var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_1))))) ^ (3786859533675154849ULL)))));
                var_24 = ((/* implicit */unsigned short) ((((max((arr_3 [i_0] [(signed char)7]), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [2LL])))) & (max((((/* implicit */unsigned long long int) arr_2 [(signed char)7] [i_1] [i_1])), (15406134171189632928ULL))))) / (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18))) < (arr_3 [i_0 - 1] [(_Bool)1])))), (15406134171189632960ULL)))));
            }
        } 
    } 
}
