/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245076
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
    var_12 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) var_5)) >= ((+(1433339271))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) arr_0 [(unsigned short)17])) : (((/* implicit */int) (unsigned short)30684)))), (((/* implicit */int) ((arr_4 [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23772))))))))) && (((/* implicit */_Bool) min(((~(2491647220U))), (((/* implicit */unsigned int) 1433339280)))))));
                    var_14 *= ((/* implicit */unsigned int) (unsigned short)9841);
                }
            } 
        } 
    } 
}
