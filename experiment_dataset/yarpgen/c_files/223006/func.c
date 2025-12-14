/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223006
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
    var_20 -= ((/* implicit */short) (unsigned short)60203);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)200)))) >> (((((/* implicit */int) ((short) var_1))) + (31813)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((7508585162823124337ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)29695)) + (((/* implicit */int) (signed char)2)))), (((/* implicit */int) var_10))))))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */signed char) var_10);
}
