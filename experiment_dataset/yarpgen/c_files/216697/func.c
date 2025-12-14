/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216697
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
    var_11 = ((/* implicit */unsigned long long int) min((((unsigned char) min((var_9), (((/* implicit */unsigned short) var_6))))), (((/* implicit */unsigned char) (((-(415180154))) <= ((~(((/* implicit */int) (short)-15897)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((16800810411649752460ULL) ^ (arr_5 [i_0] [i_1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28325)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned short) var_6)), (var_1))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0])))) / (min((arr_5 [(short)1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                var_13 *= ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))), (((16800810411649752477ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13)))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) (short)-11336)) < (((/* implicit */int) var_8))))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_6)))))))))))));
    var_15 = ((/* implicit */short) var_3);
}
