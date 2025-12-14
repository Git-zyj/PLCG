/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201335
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-101)) | ((+(((/* implicit */int) (unsigned char)255))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_1]));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */short) max((893154020324354751ULL), (((/* implicit */unsigned long long int) (unsigned short)46913))));
                            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_4)))) : ((+(((/* implicit */int) (unsigned short)0)))))));
}
