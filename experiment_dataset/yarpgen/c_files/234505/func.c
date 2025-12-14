/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234505
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) % (((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-7726)))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25014)) ? (((/* implicit */int) (short)-25028)) : (((/* implicit */int) (short)24998))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) > (min((((/* implicit */int) (short)-25014)), (669918837))))))) : (((((/* implicit */_Bool) ((var_9) * (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)1732)) ^ (((/* implicit */int) arr_0 [i_1]))))) : (((var_5) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((5255712769573308335LL), (((/* implicit */long long int) (short)-1))));
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25009)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (short)-10687)))))))) >> (((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)9000)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_6)))))) + (27))))))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_11 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                var_12 = ((/* implicit */long long int) (signed char)(-127 - 1));
                var_13 = ((/* implicit */_Bool) var_1);
                arr_13 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_2])) <= (((/* implicit */int) (short)8414)))))));
            }
            for (short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0])) && (((/* implicit */_Bool) (unsigned short)4095))))), (((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_14 [i_4]) : (arr_14 [i_0])))));
                arr_16 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (min((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))))) : (((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_4] [i_4])) : (arr_14 [i_0])))));
            }
        }
    }
    var_15 = ((/* implicit */signed char) min(((short)25005), (((/* implicit */short) (_Bool)0))));
}
