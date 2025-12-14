/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213139
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(3638243859093585520LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)15018)))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)27)), ((unsigned char)0)))) ? (min((2367140641U), (((/* implicit */unsigned int) (signed char)-27)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [0LL])))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */signed char) arr_7 [i_0])), ((signed char)-27)))), (((((/* implicit */_Bool) (+(852990384U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3638243859093585520LL)))))) : (arr_6 [8LL] [i_0] [i_2]))))))));
                    var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((-3638243859093585521LL), (((/* implicit */long long int) 3441976916U))))) ? ((+(arr_6 [i_0] [i_2] [i_2]))) : (((/* implicit */long long int) min((1927826673U), (((/* implicit */unsigned int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_18);
}
