/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228091
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) -872266419)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)46)))), (min((-872266417), (872266420))))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)96)), (-872266421)))) ? (max((872266418), (-815107886))) : (-872266421)))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)45388);
                var_13 = ((/* implicit */_Bool) (unsigned short)63);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)65527), ((unsigned short)1)))))))));
}
