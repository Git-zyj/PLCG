/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220439
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) 255U);
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(4611686018427387392LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_1])))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_0] [i_2] [(unsigned char)21] = ((/* implicit */int) arr_9 [i_0] [18U] [i_2]);
                        var_21 = ((/* implicit */short) (_Bool)1);
                    }
                    var_22 ^= ((/* implicit */unsigned long long int) var_18);
                }
            } 
        } 
    } 
    var_23 = var_11;
    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) min((var_18), (((/* implicit */short) (_Bool)1))))))));
    var_25 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (short)8255)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (short)(-32767 - 1))))))));
    var_26 = (short)63;
}
