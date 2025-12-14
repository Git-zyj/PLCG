/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33804
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    var_13 = ((/* implicit */int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_6))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (short)-21904)) : (((/* implicit */int) (short)21903))))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */short) var_7)), ((short)21903)));
                    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_8 [(unsigned short)2]))))))), (((((var_10) <= (((/* implicit */long long int) ((/* implicit */int) (short)21887))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-21904)), (arr_1 [i_0] [i_0]))))) : (17592184995840ULL)))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_10);
}
