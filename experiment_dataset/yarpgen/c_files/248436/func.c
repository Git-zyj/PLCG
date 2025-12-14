/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248436
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [11U]) : (((/* implicit */int) var_5))))))), (var_1)));
                var_18 = ((/* implicit */unsigned long long int) var_13);
                var_19 |= ((/* implicit */short) var_7);
                var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_0]))));
                arr_6 [(short)11] [i_1] = ((/* implicit */int) (((-((+(((/* implicit */int) arr_3 [(short)10] [8ULL] [i_0])))))) != ((((!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (max((((((/* implicit */_Bool) 6477720264844948518LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3900763126U))), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (max((var_5), (var_10)))))))));
    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1778927324U)) ? (var_7) : (((/* implicit */long long int) var_6))))) ? (max((var_8), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60666))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
}
