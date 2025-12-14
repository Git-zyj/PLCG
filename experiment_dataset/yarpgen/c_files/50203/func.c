/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50203
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((min((2147483647), (((/* implicit */int) (short)9350)))) << (((((min((-1943630600), (((/* implicit */int) (short)-20748)))) + (1943630626))) - (26)))))));
                var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_4)) % (min((var_3), (((/* implicit */int) var_7))))))));
                var_15 = ((/* implicit */short) var_8);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 3; i_2 < 17; i_2 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746))) <= (((max((var_10), (((/* implicit */unsigned long long int) var_7)))) % (max((var_5), (var_0))))))))));
        var_17 &= ((/* implicit */unsigned char) max((min((2147483635), (((/* implicit */int) (short)28367)))), ((-(((/* implicit */int) (short)28380))))));
        arr_8 [0] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (short)9753)), (6393066651035082525ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((253952) == (((/* implicit */int) var_9))))))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)-32744)) * (((/* implicit */int) (short)-4559))))));
        var_18 = ((((16863245588699922885ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28385))))) ? ((~(var_3))) : (-253945));
        var_19 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (short)-13932)), (2049702151882721902ULL))), (((/* implicit */unsigned long long int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28360))))))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (short)-28365);
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) 70366596694016ULL))));
    }
}
