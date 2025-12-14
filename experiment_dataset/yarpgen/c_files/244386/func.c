/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244386
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
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))))))));
        arr_2 [i_0] = (+((-((+(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) (+(max((7ULL), (((/* implicit */unsigned long long int) arr_1 [i_1 + 1] [i_0 - 2]))))));
            arr_6 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) 1337047312);
            var_16 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 18446744073709551591ULL))))))), (((((/* implicit */unsigned int) arr_4 [i_1] [6LL] [i_0])) * (((((/* implicit */_Bool) 7ULL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-138)))))))));
            arr_8 [i_0] [i_0] = (((+(((/* implicit */int) var_4)))) * (((((/* implicit */_Bool) (unsigned short)40773)) ? (124925866) : (((/* implicit */int) (short)31757)))));
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            arr_11 [i_0] = ((/* implicit */_Bool) var_6);
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_2]);
        }
        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((124925866) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)138))))))))) : (max(((~(18446744073709551609ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0)))))))));
    }
}
