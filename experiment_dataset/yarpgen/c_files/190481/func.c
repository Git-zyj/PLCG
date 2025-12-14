/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190481
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (min((11451261795178101090ULL), (9465673660479744105ULL))) : (((/* implicit */unsigned long long int) var_3))));
                    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16483))))) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 6235981307520860744ULL)) ? (-4385395854123939065LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))))))));
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) max((min(((signed char)38), (((/* implicit */signed char) (!(var_1)))))), ((signed char)-101)));
                    var_11 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min(((unsigned short)61625), (((/* implicit */unsigned short) var_1)))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)0)), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (8981070413229807518ULL)))));
}
