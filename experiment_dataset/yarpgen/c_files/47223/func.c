/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47223
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (signed char)70);
        arr_3 [i_0] = ((/* implicit */long long int) (+((-2147483647 - 1))));
        var_14 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_6 [i_2 - 1] [i_2 + 2] [i_2 + 2]));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9))) : (arr_5 [i_2] [i_2]))) : (arr_7 [i_1] [i_2] [i_2])));
        }
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
            {
                arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) 7079850110371822568ULL));
                var_16 = ((/* implicit */unsigned long long int) max((max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_3)))), (((/* implicit */int) arr_10 [11] [11]))));
                arr_14 [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned short)63962))))))), (arr_7 [(short)2] [i_1] [i_4])));
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (((signed char) var_10))))));
            }
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */int) arr_16 [i_3] [i_3] [i_5]);
                arr_17 [i_1] [i_1] [i_1] [2] = ((/* implicit */_Bool) (unsigned short)63962);
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_19 = ((/* implicit */signed char) (((-((+(arr_7 [i_5] [i_1] [i_3]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [(_Bool)1]))))))));
                    var_20 -= ((/* implicit */_Bool) (short)19957);
                }
                arr_21 [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_18 [i_1] [i_1] [(_Bool)1] [i_1] [21LL]))))) & (8160U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_1] [i_3]), (((/* implicit */unsigned long long int) var_11)))))))) : (((/* implicit */int) var_1))));
            }
            arr_22 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_3])) / (((/* implicit */int) ((unsigned short) (unsigned short)54450)))));
            var_21 = ((/* implicit */long long int) var_5);
            var_22 = ((/* implicit */long long int) arr_5 [(unsigned char)5] [(_Bool)1]);
            var_23 = ((/* implicit */signed char) (~(140736951484416LL)));
        }
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) ((var_12) < (var_8)))))) : (((/* implicit */int) var_6))));
    var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (var_6)))) ? ((-2147483647 - 1)) : ((+(((/* implicit */int) max(((unsigned short)44503), (((/* implicit */unsigned short) var_6)))))))));
    var_26 -= ((/* implicit */unsigned char) var_2);
}
