/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249995
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-51))) > (-7696772626061221917LL)))), (var_8)))) : (((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)-89)), (var_2))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)126))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_2] [(short)5] = ((/* implicit */long long int) ((signed char) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)10597)) > (((/* implicit */int) (signed char)88))))), (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_2 [i_1] [i_1])))))));
                    var_12 -= ((signed char) ((((/* implicit */int) ((short) arr_3 [i_0] [i_1] [i_2]))) | (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_2]))))));
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) (short)-1);
                    arr_12 [i_3] = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) (short)-3607))))) >= (((/* implicit */int) var_3)))))));
                }
                var_13 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (~(((/* implicit */int) var_5)))))));
}
