/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243960
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = (!(((/* implicit */_Bool) arr_2 [i_0])));
                var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_4 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) (_Bool)1))))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) (short)-18576)) ? (((/* implicit */int) (unsigned short)31370)) : (-1034897040));
    var_19 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)34165)))) * (((/* implicit */int) var_13))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)141)) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1929929261))))) : (((/* implicit */int) var_11))))));
}
