/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49270
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) max((min((arr_1 [i_0]), (min((var_11), (((/* implicit */unsigned long long int) (unsigned char)0)))))), (((/* implicit */unsigned long long int) ((long long int) (short)0)))));
        var_14 = var_8;
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_15 &= ((/* implicit */int) ((((/* implicit */_Bool) (short)-28759)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (2787712936U)))));
                    var_16 |= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((2918304947U), (2787712952U)))), (max((((/* implicit */long long int) max((arr_6 [i_0] [i_2] [i_2] [(unsigned char)14]), (((/* implicit */unsigned short) (_Bool)1))))), (var_12)))));
                    var_17 -= ((/* implicit */unsigned char) (short)2);
                    var_18 -= ((/* implicit */signed char) max(((short)0), ((short)-21)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_19 = ((/* implicit */long long int) (-(var_0)));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned char) (-(arr_4 [i_3 + 1])));
    }
    var_20 ^= ((/* implicit */long long int) var_9);
    var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -9LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8125))) : (13225611840077361952ULL)));
}
