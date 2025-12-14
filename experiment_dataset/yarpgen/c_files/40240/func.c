/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40240
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
    var_19 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) <= (((/* implicit */int) var_7))))), (arr_3 [i_0 - 1] [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_3 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)5051))))))))));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_6 [i_0 - 1])) / (((/* implicit */int) (unsigned short)52056))))));
                }
            } 
        } 
    } 
}
