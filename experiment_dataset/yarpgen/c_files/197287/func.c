/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197287
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(-434694934))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)-56)))))))) ^ (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)5), ((unsigned short)1)))) << (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1] [i_0]))))))));
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 7250369136071174443LL)) ? (((/* implicit */unsigned long long int) var_12)) : (11136701700369633097ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) (short)-10)) && (((/* implicit */_Bool) arr_0 [(_Bool)1] [(_Bool)1])))), ((!(((/* implicit */_Bool) arr_2 [i_1])))))))) : (((0LL) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
                var_16 = ((/* implicit */short) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
