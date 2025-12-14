/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236558
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
    var_19 = ((/* implicit */int) ((signed char) (+(var_4))));
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) 281474976710655ULL);
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((int) ((((/* implicit */int) var_2)) << (((2147483647) / (2147483618)))))))));
                    var_23 = ((/* implicit */unsigned int) (-(max((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_0])))));
                    var_24 = ((/* implicit */int) 18446462598732840960ULL);
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_2])));
                }
            } 
        } 
    } 
    var_25 = var_4;
}
