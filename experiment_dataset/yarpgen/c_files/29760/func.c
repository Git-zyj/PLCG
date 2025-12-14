/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29760
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-10)) + (2147483647))) << (((((/* implicit */int) (signed char)35)) - (35)))))) < (var_2)))) : (var_1)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned int) ((unsigned short) var_0));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) (_Bool)1)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-4)))))))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_0]))))))))));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */unsigned int) min((9223372036854775781LL), (((/* implicit */long long int) 4102447073U))));
    }
    var_18 = ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (!(((4455807877996719078LL) == (var_3)))))))))));
    var_20 = ((/* implicit */_Bool) var_1);
}
