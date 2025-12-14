/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29129
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51622)) ? ((-(((/* implicit */int) (unsigned short)5)))) : (((/* implicit */int) (unsigned short)65532))))), (((((/* implicit */_Bool) max(((unsigned short)13888), ((unsigned short)51626)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [11U]);
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((((/* implicit */int) (unsigned short)65512)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) << (min((((/* implicit */unsigned long long int) var_17)), (((arr_3 [i_0] [i_1] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) 2097024);
}
