/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247087
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(((/* implicit */int) var_9)))))));
    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((((/* implicit */signed char) min(((_Bool)0), ((!(((/* implicit */_Bool) (signed char)-27))))))), (arr_2 [0U] [i_0] [i_0])));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (signed char)-27)))), (((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1))))), (max((arr_0 [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
}
