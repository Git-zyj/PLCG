/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33958
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */short) (-(26ULL)));
                    var_16 = ((/* implicit */short) min((((int) ((((/* implicit */_Bool) var_4)) ? (2485933792087584989ULL) : (var_0)))), (((/* implicit */int) ((short) 2485933792087584989ULL)))));
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((18446744073709551590ULL) > (18ULL))))))), (arr_7 [i_0] [i_1] [(_Bool)1])));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_11)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_7 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) (-(1057920624U)))) ? (17974151391185810318ULL) : (((/* implicit */unsigned long long int) (~(3237046672U)))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3469005748U)) ? (var_8) : (((/* implicit */int) arr_2 [i_0])))))))));
                    arr_9 [i_1] = ((/* implicit */_Bool) 3237046668U);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_1);
    var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned long long int) (-(3237046651U)))) + ((~(var_0))))));
}
