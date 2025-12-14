/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28131
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) -12)) != (13753633582017726416ULL))) && (((/* implicit */_Bool) var_13)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_4 [i_0] [8ULL] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9)) ? (2303254393848174885ULL) : (((/* implicit */unsigned long long int) var_9)))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((16143489679861376720ULL), (((/* implicit */unsigned long long int) 2637910941U)))))));
                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) var_17)))) : (((/* implicit */int) max((var_4), ((signed char)-112))))))) ? ((+(2147483632))) : (((/* implicit */int) var_14)));
                arr_6 [i_0] [i_0] = ((((((/* implicit */_Bool) 1507423033)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99))) & (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))))) % (((/* implicit */unsigned long long int) var_8)));
                var_20 = ((((/* implicit */_Bool) 13753633582017726405ULL)) ? (((((/* implicit */_Bool) 2147483647)) ? (min((-3LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)44))))) : ((((!(((/* implicit */_Bool) -1382048470)))) ? (((/* implicit */long long int) 2147483647)) : (min((((/* implicit */long long int) (signed char)93)), (-8064399855382478503LL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
}
