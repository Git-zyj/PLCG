/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247645
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (short)-9795)), (494934629U))), (((/* implicit */unsigned int) ((unsigned short) var_2))))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            var_16 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_4 [i_0])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) : (max((2025156907U), (4005681317U)))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-512))) * ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)35020)) ? (((/* implicit */unsigned int) -919139266)) : (4294967285U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) : (var_15)));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2 + 1])) ? (((/* implicit */int) var_3)) : (arr_0 [3ULL] [i_2 + 1])));
        }
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(15797375001325708851ULL)))) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0])))))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3] [i_3])) && (((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3 - 2]))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) (unsigned char)237);
            arr_12 [i_4 + 1] = ((/* implicit */_Bool) ((short) 140736414613504LL));
            var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) (~(((/* implicit */int) var_0)))))))));
            var_24 ^= var_13;
        }
    }
    var_25 = ((/* implicit */unsigned short) var_3);
    var_26 = ((/* implicit */unsigned long long int) var_5);
}
