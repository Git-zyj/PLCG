/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/422
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 4172385949526300951LL)))) && (((((/* implicit */_Bool) 2677534891U)) || (((/* implicit */_Bool) 11143486U))))));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 1382660662U)) ? (-1570820423490097155LL) : (((/* implicit */long long int) 4294967295U)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])) : (arr_12 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((283722920176251245LL), (((((/* implicit */_Bool) 1570820423490097154LL)) ? (1867263265216319975LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61734))))))))));
                        arr_13 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_11 [i_0] [i_0] [i_0] [i_0])))) % (var_10)))));
                    }
                } 
            } 
        } 
    }
    var_15 |= var_3;
}
