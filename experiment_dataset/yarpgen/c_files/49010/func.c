/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49010
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
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) ((((-163240530) >= (((/* implicit */int) var_16)))) ? (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0 + 2] [i_0 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1]))))))));
                    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 16187662354566596630ULL)))))), (min((((((/* implicit */_Bool) 2259081719142954969ULL)) ? (arr_5 [(signed char)10] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_1] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((short) arr_1 [i_2] [i_2])))))));
                    arr_7 [i_1] &= ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) arr_5 [i_2] [i_0 - 2] [i_0 - 2])));
                    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) ((short) arr_3 [i_0])))), (((((/* implicit */_Bool) ((long long int) var_15))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_1 [i_2] [i_1])))));
                }
            } 
        } 
    } 
}
