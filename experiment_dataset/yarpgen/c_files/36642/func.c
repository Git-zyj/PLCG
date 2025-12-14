/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36642
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~((+(var_4)))))) - (max((((1522062430U) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned short) var_5)))))))));
    var_12 = ((/* implicit */long long int) (unsigned short)25855);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = var_4;
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (((+(arr_7 [i_2] [i_2] [i_2]))) <= (max((1485371612308305674LL), (((/* implicit */long long int) 2644311733U))))))) >> (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2]))))), (min((((/* implicit */unsigned int) (_Bool)0)), (262140U)))))));
                    var_15 = ((/* implicit */long long int) ((short) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_2])))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_6 [i_2]);
                }
            } 
        } 
    } 
    var_16 = -7404974746946931253LL;
}
