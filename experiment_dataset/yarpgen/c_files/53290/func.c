/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53290
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_10 += arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1];
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)3640)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (134)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3651)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (-(331915786U)))) : (arr_3 [i_0] [i_0] [i_1])));
                }
            } 
        } 
    } 
    var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned int) -1348081605)) == (1407388407U)))), (max((((/* implicit */short) (unsigned char)102)), ((short)5587)))))) ? (min((((/* implicit */int) ((((/* implicit */int) (unsigned short)16120)) == (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 1914733874U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))) : ((-(((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)-46))))))));
}
