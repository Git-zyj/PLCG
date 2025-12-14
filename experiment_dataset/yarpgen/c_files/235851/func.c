/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235851
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_4))))))));
                var_10 *= ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
                var_11 = (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 12535963416736790912ULL)) ? (((/* implicit */unsigned long long int) -1466920456)) : (5910780656972760703ULL)))))));
                var_12 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_3 [(_Bool)1] [(short)8])))), (((/* implicit */int) arr_1 [i_0] [i_0])))))));
                arr_6 [i_0] [i_0] [(unsigned short)16] &= ((unsigned long long int) ((unsigned long long int) (!(((/* implicit */_Bool) 12535963416736790896ULL)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) (short)126))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(var_9))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
    var_14 -= ((/* implicit */unsigned short) (-((~(max((((/* implicit */unsigned long long int) var_8)), (var_1)))))));
    var_15 = ((/* implicit */unsigned char) (short)140);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)98))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1)))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned char)112), (var_5)))))))));
}
