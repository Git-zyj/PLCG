/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243204
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
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) arr_7 [6LL] [4ULL] [i_0]);
                    arr_9 [i_0] [i_0] [i_0] = (!((!(((/* implicit */_Bool) (short)10564)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_7);
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_5))))) / (var_2))) ^ (((/* implicit */unsigned long long int) var_8))))));
    var_17 += ((/* implicit */_Bool) ((((int) ((short) var_5))) & (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) (unsigned char)255)))))));
}
