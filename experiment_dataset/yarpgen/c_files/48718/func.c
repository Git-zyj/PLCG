/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48718
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
    var_10 = ((/* implicit */signed char) min((var_10), ((signed char)-2)));
    var_11 = 12744328383292861628ULL;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] &= ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) > (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (1287569627U) : (((/* implicit */unsigned int) -1433947115)))));
                var_12 = ((/* implicit */unsigned short) (-(arr_3 [i_0])));
                var_13 = ((/* implicit */unsigned int) (signed char)-18);
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) 2526636635U))));
            }
        } 
    } 
}
