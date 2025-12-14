/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/410
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
    var_16 = ((/* implicit */unsigned char) ((((unsigned int) (short)27921)) + (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_12))) * (((/* implicit */int) ((_Bool) (_Bool)0))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3081329905428466115LL)) && (((/* implicit */_Bool) -1568649921))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (((((/* implicit */_Bool) 7180419467409752183LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10498))) : (146587061U)))))));
                    arr_8 [i_0] [i_1 - 3] [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_3 [i_2] [i_2] [i_1 + 2])), (arr_5 [i_1 - 3]))), (((arr_5 [i_1 - 1]) % (arr_5 [i_1 - 3])))));
                }
                arr_9 [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) (short)21728)))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) var_14);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-972116272907790436LL) % (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) max((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 5306492760944751967LL)))), ((!(((/* implicit */_Bool) (unsigned char)159))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))));
}
