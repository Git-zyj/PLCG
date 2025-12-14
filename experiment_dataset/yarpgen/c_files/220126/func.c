/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220126
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max(((((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) var_8)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_9))) : (((/* implicit */unsigned long long int) var_0)))))))));
    var_12 = ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) != ((-(((var_0) * (var_8))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((unsigned char) max((((/* implicit */int) ((((/* implicit */long long int) var_8)) > (var_5)))), (((((/* implicit */int) (short)527)) << (((2098017434U) - (2098017425U))))))));
        var_14 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) ((var_1) >= (var_1))))))) <= (((((/* implicit */long long int) ((((/* implicit */int) (short)-18423)) | (((/* implicit */int) (short)-11724))))) ^ (((arr_1 [i_0]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)6946)))))))));
    }
    for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) min((var_10), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-11705)) * (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */long long int) var_0)) : ((~(var_5)))))));
        var_16 = ((/* implicit */int) max((var_16), (((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) (((~(-8144946340304132598LL))) > (((/* implicit */long long int) (+(((/* implicit */int) (short)6946))))))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 3; i_3 < 21; i_3 += 4) 
            {
                {
                    var_17 = max((((/* implicit */long long int) (_Bool)1)), (17179869183LL));
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1 - 2]))));
                    arr_10 [i_1] = ((/* implicit */int) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_6 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_9 [9ULL] [9ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [(unsigned char)21])) ? (var_8) : (var_0))))));
                }
            } 
        } 
    }
}
