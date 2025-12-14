/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210941
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) >> (((arr_2 [i_0]) + (1544272080)))))) * (max((max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 - 1])) >= (((/* implicit */int) arr_0 [8U]))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((max((arr_4 [i_0] [i_0] [i_0]), ((_Bool)1))) ? (arr_2 [i_1 + 3]) : (((/* implicit */int) max(((short)-24570), (((/* implicit */short) arr_1 [i_0] [(signed char)19])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_11 [i_2] = min((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27626))) != (var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24559)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24556))))) ? (2267040871U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))));
        arr_12 [(short)8] [i_2] = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2]);
    }
    var_11 = ((/* implicit */_Bool) (-(var_1)));
}
