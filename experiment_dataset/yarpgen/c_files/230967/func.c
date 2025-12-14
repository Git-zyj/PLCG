/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230967
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
    var_15 = ((((/* implicit */long long int) ((/* implicit */int) var_2))) % (var_6));
    var_16 = var_12;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) var_12)) <= (134209536U)))), (((((/* implicit */_Bool) 6400459370549529900LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) arr_8 [i_0]))))) == (max((((/* implicit */unsigned int) arr_8 [(_Bool)1])), (4294967294U)))))))));
                    arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [(unsigned short)8] [i_0] [i_0]))))) >> (((/* implicit */int) ((short) arr_9 [i_2] [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((min((((int) (_Bool)1)), (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (unsigned short)31191))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((-6745050488205742774LL) < (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (1547776998)))), (1125899906842624LL)))))));
}
