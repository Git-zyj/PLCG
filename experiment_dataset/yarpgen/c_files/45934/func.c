/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45934
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) max((arr_0 [i_0 + 4]), (arr_0 [i_1 - 1]))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)6] [i_2] [i_2])) ? (var_16) : (arr_1 [i_1] [(unsigned char)16])))) ? (((((/* implicit */_Bool) var_1)) ? (2072918099565256363LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) var_14))))))));
                    var_22 = ((/* implicit */unsigned long long int) -3401467187122334362LL);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_12);
    var_24 |= ((/* implicit */signed char) var_5);
}
