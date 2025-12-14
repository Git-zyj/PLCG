/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27353
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = (((+(arr_3 [i_1] [i_1] [i_1]))) <= (((arr_3 [i_0] [i_1] [i_1]) << (((arr_3 [(unsigned char)9] [i_0] [i_1]) - (14721540965454133541ULL))))));
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min(((short)-8132), (((/* implicit */short) arr_5 [i_1] [i_0])))))) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)116)))));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [0ULL] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)22))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) arr_2 [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) ((unsigned char) var_9)))), (var_6)));
}
