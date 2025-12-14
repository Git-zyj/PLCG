/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199310
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 4788588557309899925LL))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 12582912)) ? (((int) (short)16352)) : (((/* implicit */int) (((((_Bool)1) ? (59444321) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1])))))));
                    arr_9 [i_0] = (+(((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1]))));
                    arr_10 [i_0] [i_0] [i_0] = var_15;
                    var_21 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1] [i_2])) ? (arr_6 [i_0] [i_2]) : (685373626))) : (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3]))))));
                    arr_11 [8LL] [8LL] [i_1] [i_0] = ((/* implicit */unsigned char) var_12);
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_19)))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (min((2584652065274873877LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [4ULL]))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) 503316480)) ? (arr_0 [i_0 + 3]) : (var_4))), ((-(((/* implicit */int) var_10))))))))))));
        var_23 = ((/* implicit */_Bool) min((((((/* implicit */int) ((((/* implicit */_Bool) -4)) && (((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0]))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483639)) != (var_18)))))), (((((/* implicit */int) var_3)) / (((/* implicit */int) var_17))))));
    }
    var_24 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)42)))))));
}
