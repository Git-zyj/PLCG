/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227275
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
    var_19 = ((/* implicit */int) max((var_19), ((-(((/* implicit */int) ((unsigned short) var_10)))))));
    var_20 = ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */signed char) var_12)), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)-98))))))));
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_18)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */signed char) (_Bool)0);
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_3 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (68719214592ULL)))));
    }
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-383744029)));
        arr_7 [i_1] |= ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
        var_24 = ((/* implicit */unsigned long long int) (+(min((((unsigned int) -1)), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)511))))))));
    }
    var_25 = ((/* implicit */unsigned short) ((unsigned int) var_4));
}
