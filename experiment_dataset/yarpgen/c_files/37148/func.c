/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37148
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
    var_16 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)16))))), (((unsigned int) var_15)))));
    var_17 += ((/* implicit */_Bool) var_4);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned short)19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) | (8324788813081986782LL)))) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_5))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2] [i_1 - 1])) ? (((arr_6 [i_1 + 1] [i_2] [i_2] [i_1 + 1]) - (arr_6 [i_2] [i_2] [i_2] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2] [i_1 - 3])) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 3])))))))));
                    arr_9 [i_0] [i_1 - 3] = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)-108)), (max((min((var_14), (((/* implicit */unsigned short) (signed char)-69)))), (max((var_14), (((/* implicit */unsigned short) (unsigned char)3))))))));
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-125))));
                }
            } 
        } 
    } 
}
