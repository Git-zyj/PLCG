/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221374
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
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)504))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)65032)), (1021926271U)));
                    var_18 = ((/* implicit */unsigned int) ((unsigned char) var_13));
                    var_19 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((var_0), (((/* implicit */unsigned long long int) var_11))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1 - 2] [i_2] [i_1 - 2]))))), (((((_Bool) 1021926271U)) ? (((/* implicit */int) ((1477735129) > (((/* implicit */int) (unsigned char)251))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [6] [i_0])) : (((/* implicit */int) arr_4 [i_1 - 2]))))))));
                    arr_10 [i_2] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)65032))))));
                }
            } 
        } 
    } 
}
