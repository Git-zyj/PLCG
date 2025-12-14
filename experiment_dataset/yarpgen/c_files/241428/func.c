/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241428
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
    var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((max((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned char)106)))) < (((/* implicit */unsigned int) (~(1481472048)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_2] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)35))))));
                    var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((arr_1 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42669))))))) ? (min(((+(var_7))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (var_2)));
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((/* implicit */signed char) ((arr_3 [i_0]) == (arr_3 [i_0])))), (var_0))))));
    }
}
