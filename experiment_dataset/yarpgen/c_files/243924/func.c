/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243924
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) arr_3 [(unsigned short)18] [9ULL]);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((1687899972U), (((/* implicit */unsigned int) (short)-8863)))))))) ^ (((((/* implicit */int) arr_3 [i_0] [i_0 - 1])) - (((/* implicit */int) ((signed char) arr_2 [(unsigned char)2])))))));
                var_20 = ((/* implicit */unsigned int) ((max((((unsigned long long int) arr_1 [i_1])), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)-56)), ((unsigned short)25797)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (short)-23978)))) < (((((/* implicit */_Bool) (short)23948)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned char)141))))))))));
                var_21 = ((/* implicit */signed char) (unsigned char)102);
                var_22 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) arr_4 [i_0] [17] [(unsigned short)13])))) ^ (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)687))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_4);
}
