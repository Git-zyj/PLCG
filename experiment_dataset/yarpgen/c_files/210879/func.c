/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210879
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
    var_14 = ((/* implicit */int) (~((~(var_0)))));
    var_15 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned char)121))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0])))))) : (min((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_2])), (arr_1 [i_0] [i_0])))))));
                    var_17 = ((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (var_0))))));
                }
            } 
        } 
    } 
}
