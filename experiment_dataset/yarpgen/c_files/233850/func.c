/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233850
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
    var_18 = ((/* implicit */long long int) var_5);
    var_19 &= var_15;
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((short) (_Bool)0)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1] [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [11LL])))) : (((/* implicit */int) arr_6 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) / ((-(arr_0 [i_0]))))))));
                    var_22 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)65535)), (176510140)));
                }
            } 
        } 
    } 
}
