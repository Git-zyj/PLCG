/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238239
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_2]))));
                    arr_9 [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(max((8193349466263769201LL), (((/* implicit */long long int) (unsigned short)58495))))))) - (arr_8 [(unsigned short)8] [i_2])));
                    var_21 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)-19606))))));
                    arr_10 [i_1] = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_5 [0U] [i_1 + 1] [i_2])), ((~(((/* implicit */int) var_7))))))));
                    var_22 |= ((/* implicit */unsigned short) (+((((+(((/* implicit */int) var_13)))) - (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_2])) == (((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
}
