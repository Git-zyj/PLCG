/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206273
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) >> (((((((/* implicit */_Bool) (unsigned char)167)) ? (82546782U) : (((/* implicit */unsigned int) -1285889579)))) - (82546754U)))))) ? (min((max((4187809746U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)63814)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_15 = ((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_0 - 1]) | (826032201)));
                    arr_8 [i_0] [(unsigned short)13] [i_1] [i_2] = arr_2 [i_0];
                }
                arr_9 [i_0] = ((/* implicit */unsigned short) 4187809749U);
            }
        } 
    } 
}
