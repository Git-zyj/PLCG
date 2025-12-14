/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27371
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min(((((_Bool)0) ? (15831875360404551709ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [6ULL] [(_Bool)1] [i_2]))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7223592267961553779ULL)) ? (2082903568326924439LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1202))) : (arr_7 [i_0])))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned long long int) var_2);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) 255613842344270842ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)7168))))) | (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29494))) : (var_7)));
}
