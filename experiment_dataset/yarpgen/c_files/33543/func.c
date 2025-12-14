/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33543
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((/* implicit */_Bool) var_10)) ? (min((var_1), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26313)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */short) var_5)))))))))))));
    var_13 = ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */short) (-(((max((((/* implicit */long long int) var_5)), (var_10))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) arr_3 [(short)2] [i_1])), (var_4)))))))))));
                    var_16 = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) arr_1 [(short)14] [12LL])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2 + 1]))))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) ((6955597905498825034ULL) < (max((6955597905498825010ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))) | (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)0] [(short)5]))))) << (((min((14282623843944979203ULL), (((/* implicit */unsigned long long int) var_2)))) - (805190285ULL))))));
                }
            } 
        } 
    } 
}
