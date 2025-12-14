/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54415
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max(((unsigned short)46401), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) 971454937U))))))) ^ (((((/* implicit */_Bool) ((unsigned int) 12721948394414645323ULL))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)231)), ((unsigned short)13200)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)34)), ((short)7112))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-28372), (((/* implicit */short) (unsigned char)104))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 5U)))) : (((((/* implicit */_Bool) (signed char)120)) ? (3323512356U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
                    arr_10 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) min(((short)31), ((short)28372)))) < ((-(((/* implicit */int) (unsigned short)46401)))))));
                }
            } 
        } 
    } 
}
