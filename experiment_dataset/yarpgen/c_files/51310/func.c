/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51310
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
    var_12 = ((/* implicit */unsigned int) ((unsigned char) ((max((var_11), (((/* implicit */unsigned int) var_6)))) < (((/* implicit */unsigned int) var_2)))));
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_1 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [3] = ((/* implicit */int) ((short) (short)31958));
            arr_8 [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_0 [i_0] [i_0 + 1])));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned int) var_4);
            arr_11 [i_2] = ((/* implicit */unsigned char) var_6);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                arr_15 [1LL] = ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) (short)-31970)))));
                arr_16 [i_0] [i_0] [(unsigned char)10] [i_0] = ((/* implicit */signed char) ((int) ((signed char) var_8)));
            }
        }
    }
    var_15 = var_8;
}
