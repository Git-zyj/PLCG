/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204430
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (~(((/* implicit */int) (signed char)-38)))))));
    var_11 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((arr_4 [(unsigned short)9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) var_6))))))))))))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
            {
                arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)47590))));
                var_13 = ((/* implicit */unsigned char) var_8);
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0 + 1]);
            }
            for (int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) arr_8 [2LL] [2LL])))), ((-(((/* implicit */int) arr_13 [8])))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (short)2047)) > (1610612736))))));
            }
        }
        var_16 = ((/* implicit */unsigned char) ((((min((arr_5 [i_0 - 3] [i_0 + 1] [i_0 - 3]), (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 3])))) + (2147483647))) >> ((((~(var_4))) - (1702554354U)))));
        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((3952288133U) * (((/* implicit */unsigned int) 2147483647)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 + 2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47590))) : ((+(((long long int) 576451956210401280ULL))))));
    }
}
