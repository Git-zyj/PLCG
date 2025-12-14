/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45166
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
    var_20 = ((/* implicit */short) ((unsigned short) (unsigned short)51329));
    var_21 = ((((/* implicit */int) (unsigned short)51329)) % (((/* implicit */int) (short)-9653)));
    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (11334415376221748138ULL)));
    var_23 = ((/* implicit */short) min((((unsigned int) ((int) var_1))), (((/* implicit */unsigned int) max(((short)2138), (((/* implicit */short) (signed char)90)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2139))) == (11334415376221748138ULL))), ((!(((/* implicit */_Bool) var_3)))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_6 [i_2 - 3] [i_1] [i_2 + 3]) <= (1634902492U)))) & (max((131071), (((/* implicit */int) (unsigned short)53432))))));
                }
            } 
        } 
    } 
}
