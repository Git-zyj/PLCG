/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230277
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
    var_20 = ((/* implicit */int) max(((unsigned char)224), ((unsigned char)30)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_21 = ((/* implicit */signed char) min(((short)6198), (min((var_19), (min((((/* implicit */short) (unsigned char)42)), ((short)-6199)))))));
                    arr_7 [i_0] [i_1 + 3] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((unsigned int) (signed char)-114));
                }
                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 1] [(_Bool)1] [(unsigned short)16]))))) ? ((-(((/* implicit */int) (short)6198)))) : (((((/* implicit */int) min((((/* implicit */short) (signed char)-12)), ((short)-25825)))) % (((/* implicit */int) ((signed char) var_7)))))));
                var_23 = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((signed char) 8ULL))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59539)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_1);
    var_25 = ((/* implicit */int) var_4);
}
