/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42906
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
    var_12 = ((/* implicit */unsigned char) 2703790111215596570LL);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_5 [i_2] [i_2]))))));
                    arr_8 [i_0] [i_1] [(unsigned short)3] = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) arr_5 [1ULL] [i_2]);
                        var_15 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_6 [i_2 - 1])))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_6 [i_2 - 1])))));
                    }
                    var_17 = ((((((/* implicit */_Bool) 2703790111215596570LL)) ? (2703790111215596561LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2 - 1] [(unsigned char)10] [i_2 + 2]))))))) >> (((arr_6 [i_2 + 2]) - (11858417561389458025ULL))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (max((((/* implicit */unsigned char) (signed char)49)), ((unsigned char)184)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_11);
}
