/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47974
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 6; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_1] [i_1] [i_1 + 4]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 3] [i_1 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 140737488355327LL))))) : (((/* implicit */int) (!(arr_5 [i_1 - 3] [i_1 + 2] [i_2]))))));
                arr_8 [i_0] = ((signed char) min((arr_2 [i_1 - 1] [i_1 + 4] [i_1 - 3]), (((/* implicit */unsigned char) arr_5 [i_1 - 1] [i_1 + 4] [i_1 - 3]))));
                var_14 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_3 [i_1 + 3] [i_1 - 2] [i_1 + 4])) + (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned char) arr_3 [i_1 - 3] [i_1] [i_1 + 3])))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [(signed char)3]);
                arr_11 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((short) arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 3]));
            }
        }
        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_16 -= ((/* implicit */long long int) var_0);
            var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_4])) == (((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_5 [i_0] [i_4] [i_4])))))))));
        }
        arr_14 [i_0] [i_0] = min(((short)4), (((/* implicit */short) min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))));
    }
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-9)))))))) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
    var_19 += ((/* implicit */unsigned int) (~(((((var_10) ? (((/* implicit */int) (unsigned short)63146)) : (((/* implicit */int) var_4)))) - ((+(((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8))) : (var_11)))) ? (min((var_6), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) < (min((((((/* implicit */_Bool) (short)-23)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9))) : (5820622543214056576LL))), (((/* implicit */long long int) var_13))))));
}
