/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2715
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
    var_13 -= ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_7 [i_1 - 1] [i_0 - 3] [i_0 - 3] [i_0]) || (((/* implicit */_Bool) var_11))))) | (((arr_0 [i_0]) + (((/* implicit */int) arr_7 [i_1 - 1] [i_0 - 3] [i_0 - 3] [i_0]))))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (-(((unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))));
                    arr_10 [i_0 - 3] [i_0 - 3] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4137)) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) - (102)))))) >= (var_0));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))) * (((/* implicit */int) (unsigned char)108))));
        arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)148)) + (((/* implicit */int) (unsigned short)3995))))) > (((unsigned int) (unsigned short)61371))));
        var_15 = ((/* implicit */unsigned int) (unsigned short)61398);
    }
    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 3) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((4194303U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) 0LL)))))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((6299133424939020015LL), (((/* implicit */long long int) var_1)))))))) == ((+(((/* implicit */int) (unsigned short)61537))))));
    }
}
