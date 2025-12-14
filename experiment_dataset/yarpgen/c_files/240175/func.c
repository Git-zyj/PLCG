/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240175
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (short)0);
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60)))))) && (((arr_2 [i_2]) == (((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_1] [(unsigned char)3] [i_2 - 4]))))))) <= (((/* implicit */int) arr_6 [i_2] [i_1] [(signed char)4] [i_0]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_5);
    var_17 = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned char)221))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33873))))) < (((/* implicit */long long int) ((int) 1662425922))))))));
}
