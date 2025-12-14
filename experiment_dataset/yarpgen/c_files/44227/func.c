/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44227
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
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned short)9] [(unsigned short)9] [5] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-40))))) ? (var_12) : (var_12))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-18479)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_18))))))));
                    var_20 = ((/* implicit */short) ((((unsigned int) ((short) var_18))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((unsigned char) var_9)))))));
                    var_21 = ((/* implicit */unsigned short) var_0);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (short)-18470);
}
