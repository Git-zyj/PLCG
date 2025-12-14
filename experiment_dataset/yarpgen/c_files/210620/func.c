/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210620
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1 + 1] [i_1] = (unsigned short)37044;
                var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65066)) < (((/* implicit */int) (signed char)-109))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -816761354)) ? (((((/* implicit */_Bool) (unsigned short)13996)) ? (((/* implicit */int) (unsigned short)13992)) : (((/* implicit */int) (unsigned short)13996)))) : ((-(((/* implicit */int) (signed char)-62))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)51539)) < (((((/* implicit */_Bool) (unsigned short)13996)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) (unsigned short)62810))))))) : (((((/* implicit */_Bool) (unsigned short)62918)) ? (((/* implicit */int) (unsigned short)51539)) : (((/* implicit */int) (unsigned short)21806)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_2);
}
