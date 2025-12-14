/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237934
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) (_Bool)0);
                        var_13 = ((/* implicit */short) (-(16926845828006247204ULL)));
                    }
                } 
            } 
        } 
        arr_13 [i_0 + 1] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_8 [i_0] [i_0])), (((((/* implicit */int) arr_9 [(short)4])) * (((/* implicit */int) (signed char)4))))));
        var_14 = ((/* implicit */unsigned int) min((3431788402818150820ULL), (15014955670891400800ULL)));
        var_15 = ((/* implicit */signed char) max((((unsigned long long int) (+(arr_10 [i_0] [i_0] [i_0] [i_0] [9LL])))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)48)))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 15014955670891400795ULL)))) != (((unsigned long long int) var_4))));
}
