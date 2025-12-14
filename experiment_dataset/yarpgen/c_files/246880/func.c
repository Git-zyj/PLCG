/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246880
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
    var_19 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (+(3416777972U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18))))) : (min((16LL), (((/* implicit */long long int) -1540443116)))))));
    var_20 = var_3;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)137)))) == (((/* implicit */int) (!(((/* implicit */_Bool) -2005862371))))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_14)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_16) : (((/* implicit */int) var_18)))) : (((/* implicit */int) (unsigned short)16293)))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) min(((~(arr_4 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
                arr_8 [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (short)-236)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_4))))) - (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : (((arr_3 [i_0] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                arr_9 [i_0] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) (-(var_16)))), (((var_17) ^ (4335466019129983577LL))))), (((/* implicit */long long int) arr_0 [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_18)) ? (((var_4) << (((((/* implicit */int) var_8)) - (106))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))))));
}
