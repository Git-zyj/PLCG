/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213991
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
    var_20 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_1)) / (((/* implicit */int) var_8)))) + (((/* implicit */int) ((var_6) < (var_6)))))) % (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_4 [i_0 + 1] = ((/* implicit */signed char) 104690205U);
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((318649858U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4035))))))));
        }
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_7 [i_0 - 1] [i_0 + 1] = ((/* implicit */short) var_11);
            arr_8 [i_0 + 1] [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2 + 2] [i_0 - 1])) + (arr_1 [i_2 + 2])));
            var_23 = ((/* implicit */signed char) ((_Bool) arr_5 [(unsigned char)3] [i_2]));
        }
        var_24 = ((/* implicit */int) ((unsigned int) 1979621075U));
    }
    var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)65531)), (2608609004899821796ULL)));
}
