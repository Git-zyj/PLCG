/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45722
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
    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1791722889))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (var_4)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 = (+(((/* implicit */int) (_Bool)1)));
                    var_20 *= ((/* implicit */unsigned char) max((33554428U), (9U)));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (4294967275U) : (((/* implicit */unsigned int) var_17))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 4261412868U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_1 [i_0]))))))))) ? ((~(((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_3) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))) : (((((/* implicit */_Bool) min(((unsigned char)107), (arr_0 [i_0] [i_2])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_2 - 2])) ? (((/* implicit */int) (signed char)-14)) : (var_17))) : (arr_6 [i_1] [i_0]))));
                }
            } 
        } 
    } 
}
