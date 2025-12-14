/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247325
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
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 += ((/* implicit */int) (((_Bool)1) ? (14169077112062271097ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)34))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_2 [i_0]))))) % (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 3]))))));
                    var_18 = ((/* implicit */unsigned short) (~(max((((2992273150U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)5351))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (1102487694))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max(((short)-5351), (max(((short)-1), (((/* implicit */short) (unsigned char)2))))));
                                var_19 *= ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) >= (arr_5 [(_Bool)1] [i_2 + 3] [(_Bool)1])))) | (((/* implicit */int) var_3)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
