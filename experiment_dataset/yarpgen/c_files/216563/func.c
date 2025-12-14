/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216563
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_7);
        var_18 = ((/* implicit */short) ((long long int) 134217727));
        var_19 |= ((/* implicit */long long int) (short)24179);
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_20 -= ((/* implicit */short) ((unsigned short) ((((-134217727) + (2147483647))) >> (((134217727) - (134217701))))));
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) 439422438);
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((((((/* implicit */int) var_14)) - (1859198377))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) var_10))) - (243)))));
            var_21 = ((/* implicit */long long int) ((int) (_Bool)1));
            var_22 ^= ((/* implicit */long long int) var_9);
        }
    }
    for (int i_3 = 4; i_3 < 16; i_3 += 3) 
    {
        var_23 |= 134217743;
        var_24 = var_1;
        var_25 = ((/* implicit */long long int) ((short) -439422422));
    }
    var_26 -= ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) 863710956)));
}
