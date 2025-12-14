/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36436
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) (_Bool)1))))), (((((/* implicit */int) ((signed char) var_7))) | (((/* implicit */int) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((long long int) (_Bool)1));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (signed char)118);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_3)))))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_1])) : (((/* implicit */int) arr_0 [i_0 + 3] [i_1])))))))));
                    arr_10 [(unsigned short)10] [10U] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)225)) && (((/* implicit */_Bool) (short)3584)))))))) == (arr_1 [i_1])));
                }
            }
        } 
    } 
    var_15 = var_5;
}
