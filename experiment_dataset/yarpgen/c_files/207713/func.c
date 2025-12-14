/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207713
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = (_Bool)1;
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]);
                arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
            {
                arr_15 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                arr_16 [i_0] [i_1] = ((/* implicit */short) (+(485490568U)));
            }
            var_21 = ((/* implicit */_Bool) ((unsigned int) 9223372036854775804LL));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
        {
            arr_19 [(unsigned short)6] [i_0] [i_4 + 1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (-1150207393))));
            var_22 |= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_4 + 1])) - ((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_4 + 1]))))));
            var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) & (((/* implicit */int) (unsigned char)121))))) || (arr_13 [i_0] [i_4] [i_4 + 1] [i_4 + 1])));
        }
        var_24 = ((/* implicit */short) (((+(3809476738U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) 4294967295U))))))));
    }
    var_25 = ((/* implicit */unsigned short) var_9);
    var_26 = ((/* implicit */short) ((var_1) < (((/* implicit */unsigned long long int) var_2))));
}
