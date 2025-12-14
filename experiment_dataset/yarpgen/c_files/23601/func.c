/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23601
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((1135322872U) ^ (((/* implicit */unsigned int) arr_6 [i_0] [i_1])))))))))));
                    arr_12 [i_0] [i_0] [10ULL] [10ULL] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (short)-10667)) || (((/* implicit */_Bool) arr_8 [i_0]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) (((+(var_15))) >= (63)));
    var_19 = ((/* implicit */unsigned char) ((short) (~((~(((/* implicit */int) (short)9790)))))));
}
