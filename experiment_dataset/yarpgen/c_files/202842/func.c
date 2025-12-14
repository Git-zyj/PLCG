/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202842
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
    var_11 += var_9;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = (-(((((/* implicit */_Bool) ((-3270276373173198001LL) - (-3270276373173198013LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-3270276373173198001LL) > (36028797018947584LL))))) : (var_10))));
        arr_3 [i_0] [i_0] = ((long long int) ((max((3270276373173198013LL), (var_5))) - (((long long int) arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = (+(((((/* implicit */_Bool) arr_2 [3LL] [i_2 + 3])) ? (3270276373173197983LL) : (-1LL))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((4930764886670734106LL), (arr_5 [i_0])))))))) >= (arr_7 [i_0] [i_1] [i_2])));
                    var_14 = ((((/* implicit */_Bool) var_1)) ? (min((arr_7 [i_2 + 1] [i_2] [i_2]), (arr_7 [i_2 + 1] [8LL] [i_2]))) : (min((3270276373173197989LL), (((long long int) -1LL)))));
                    var_15 = var_6;
                }
            } 
        } 
        var_16 = ((((/* implicit */_Bool) ((var_10) % (-6636826421953126761LL)))) ? (((((/* implicit */_Bool) -3270276373173198004LL)) ? (-3270276373173198013LL) : (((3270276373173198013LL) / (7916476360014256603LL))))) : (-79542243364938649LL));
    }
}
