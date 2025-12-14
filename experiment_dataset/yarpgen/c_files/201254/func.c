/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201254
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
    var_10 = var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (8288238329759254200ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)10901)))))));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((short) arr_4 [i_0]))))) & (min((((/* implicit */unsigned int) arr_0 [i_0])), (max((3450018279U), (3210987529U)))))));
                arr_8 [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) arr_2 [(_Bool)1] [(short)3] [i_1])) & (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)18])) : (((/* implicit */int) (_Bool)1))))));
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) + (((((/* implicit */_Bool) 5918018805836248619LL)) ? (9460613327636734535ULL) : (72193412098003907ULL)))));
                arr_10 [i_1] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */unsigned short) -5156432449869174042LL);
}
