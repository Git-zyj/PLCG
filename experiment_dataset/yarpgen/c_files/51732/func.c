/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51732
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
    var_11 = ((/* implicit */unsigned int) (~(var_7)));
    var_12 = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-14886)) - (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (var_6)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2047108374)) || (((/* implicit */_Bool) 2047108383))))), (((((/* implicit */_Bool) 697772875U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_1 [15]))))) : (((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_3)) - (4737)))))) : (((unsigned long long int) var_3))))));
                arr_7 [9ULL] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_5), (((/* implicit */short) arr_4 [i_0] [i_1])))))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) var_10)))) - (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (-2047108404) : (-1807488562)))))) : (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1433598771586905494ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)225)))))))));
            }
        } 
    } 
}
