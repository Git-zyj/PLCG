/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228053
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
    var_12 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((((/* implicit */_Bool) -1897283140)) ? (7718816888122452156LL) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))))))))), (max(((-(var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (short)-8119)))))))));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81))) : ((+(arr_2 [i_1])))));
                var_14 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_8))))) > (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((449775992U), (((/* implicit */unsigned int) (signed char)62)))))));
            }
        } 
    } 
}
