/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232370
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned short) ((((arr_2 [i_1] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) ? (max((var_7), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_1]))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                var_18 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)40655)) ? (((/* implicit */int) (unsigned short)40661)) : (((/* implicit */int) (unsigned short)40665))))));
                var_19 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_14)) ? (max((4985737389991968071LL), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_2 + 4]) - (arr_4 [i_0] [i_2 + 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))) : (arr_6 [7ULL])));
            }
        }
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_21 -= ((/* implicit */unsigned short) arr_1 [i_0] [i_3]);
            arr_9 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4985737389991968089LL)) ? (((/* implicit */int) (unsigned short)24880)) : (((/* implicit */int) (unsigned short)65529))))) ? (arr_2 [i_0] [i_3]) : (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
        }
        arr_10 [i_0] [i_0] = ((/* implicit */int) var_9);
    }
    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) 1743236851U)), (-4985737389991968058LL)))) ? (((((/* implicit */_Bool) var_2)) ? (5458996051944056956ULL) : (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))))), (((/* implicit */unsigned long long int) (unsigned short)57645))));
    var_23 = ((/* implicit */unsigned short) var_12);
}
