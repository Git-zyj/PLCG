/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50060
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)127)), (6941333608087054530LL)));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)20991)) || (((/* implicit */_Bool) (+(47471720))))));
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */int) arr_7 [i_1])) | (((/* implicit */int) ((_Bool) var_6))))) : (((/* implicit */int) arr_7 [i_1])))))));
        var_12 = ((/* implicit */unsigned short) (~(-6588637829998307305LL)));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (((+(var_2))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-16740)), (var_4)))))))) & (((/* implicit */int) (short)-18184))));
        arr_12 [9LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -500191726)) : (8238683722532256215LL))))))));
        arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) min((min((((/* implicit */short) (signed char)(-127 - 1))), (var_7))), (var_7)))) & (((/* implicit */int) ((((/* implicit */int) arr_9 [(short)12] [i_2])) < (((/* implicit */int) arr_9 [i_2] [i_2])))))));
    }
    var_13 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) var_8)), (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)54402)), ((-(var_5)))));
    var_15 = ((/* implicit */signed char) var_1);
}
