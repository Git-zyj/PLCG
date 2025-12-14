/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234432
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
    var_14 = ((/* implicit */int) (+(4579480831552108284ULL)));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) max((var_11), (var_2))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) var_5)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_11)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (~(arr_7 [i_0] [i_0] [i_2] [i_2])))))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) >= (arr_7 [12LL] [i_1] [6] [i_0]))) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [12LL] [i_2]), (arr_0 [i_2]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_8 [i_0]))) != (((/* implicit */int) min((arr_8 [7LL]), (arr_0 [i_0])))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_13))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9)))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_11))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((long long int) var_4)))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_13)))))) : ((-(((/* implicit */int) var_0))))));
}
