/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221504
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)45102)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)19] = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) (unsigned short)45089)), (min((arr_0 [i_0]), (((/* implicit */unsigned int) var_6))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
            {
                var_14 &= ((/* implicit */long long int) var_4);
                arr_9 [i_2] [13ULL] [i_1] [13ULL] = ((/* implicit */unsigned int) min(((-(arr_5 [i_2] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)15)), ((~(-524358877))))))));
                var_15 = var_7;
            }
            for (short i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_3] [(short)6]);
                var_17 = ((/* implicit */long long int) min(((~((~(arr_5 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_0]))));
            }
            for (short i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
            {
                arr_17 [i_4] [i_1] [i_1] = min((((/* implicit */unsigned int) (unsigned char)0)), (((unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0])));
                var_18 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-119))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))));
                arr_18 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((min((-2568130605030562647LL), (((/* implicit */long long int) 0U)))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_4] [i_1]))))));
            }
            var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) var_4))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)0)))))));
                arr_26 [i_0] [i_6] = var_6;
            }
            var_21 *= ((/* implicit */_Bool) (-(((8388607LL) + (((/* implicit */long long int) (+(((/* implicit */int) (short)15)))))))));
        }
    }
}
