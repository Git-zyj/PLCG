/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49423
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
    var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_10)) ? (var_5) : (var_8))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))))) >= (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) - ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9021141516835782832ULL)))))));
    var_13 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) var_2)))), (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_0))))));
    var_14 = ((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)18)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 5762888706936812005ULL))))) : (((/* implicit */int) (unsigned char)98))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [(unsigned char)4] [i_1] [i_2] = ((/* implicit */unsigned char) 9021141516835782852ULL);
                    var_15 = arr_1 [(unsigned char)6];
                    var_16 ^= (unsigned char)36;
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_2] [i_1])), ((unsigned char)219)))))))))));
                }
            } 
        } 
    } 
}
