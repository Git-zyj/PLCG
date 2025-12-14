/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209291
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
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6))))) & (((((/* implicit */int) var_4)) + (((/* implicit */int) var_6))))))) ^ (var_1)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) & (((/* implicit */int) var_0)))) >= (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_3 [i_0]))))));
                    var_13 *= ((/* implicit */short) ((((((-910630644) + (2147483647))) << (((((/* implicit */int) var_3)) - (1))))) > (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-55))))));
                    arr_10 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 4188730967U)) ^ (arr_1 [i_1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_1 [i_0])))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)29530)) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)29506)) && (((/* implicit */_Bool) 12883770219927895076ULL))))))) % (((((/* implicit */int) (signed char)25)) * (((/* implicit */int) var_10))))));
                    var_14 = ((((/* implicit */int) ((((/* implicit */int) (signed char)-35)) > (((/* implicit */int) var_9))))) * (((((/* implicit */int) var_9)) >> ((((((-2147483647 - 1)) - (-2147483629))) + (48))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_3);
}
