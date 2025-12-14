/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54222
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
    var_12 = ((/* implicit */signed char) min((2587573860529464470ULL), (((/* implicit */unsigned long long int) (unsigned char)55))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */long long int) -74902491)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 + 2])) ? (var_9) : (((/* implicit */long long int) arr_2 [i_1 + 2] [i_1] [i_1 + 3]))))));
                var_13 = var_5;
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((arr_1 [i_1 + 3]) ^ (arr_1 [i_1 + 3]))))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (arr_3 [i_1]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_4)) : (18014398509481983LL)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) 15700156552604476351ULL)) && (((/* implicit */_Bool) 15700156552604476351ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) 16363315851121592589ULL)) || (((/* implicit */_Bool) 2746587521105075273ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [1LL] [i_1] [i_1])))))));
            }
        } 
    } 
}
