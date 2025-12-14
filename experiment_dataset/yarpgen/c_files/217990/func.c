/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217990
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
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)248))) ? (((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) (unsigned short)11515)))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -6400376093183999224LL)) ? (((/* implicit */int) (short)12595)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)37), ((unsigned char)51))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) : (var_5))))) < (((/* implicit */long long int) (+((((_Bool)1) ? (arr_1 [i_1]) : (((/* implicit */int) var_15))))))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [(signed char)5])))) - (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max((max((var_10), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (1863157438239627171ULL))))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_16))))))))))));
}
