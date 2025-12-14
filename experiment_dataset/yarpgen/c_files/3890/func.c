/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3890
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((unsigned short) var_4)))));
    var_18 = ((/* implicit */unsigned char) (signed char)52);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0 - 1] [5ULL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4397203820424152723LL)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)21401))));
                    arr_9 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9)));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_2]) : (arr_0 [i_1] [0U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12)))) : ((~(var_13)))))) ? (arr_5 [i_2] [i_2] [(signed char)12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15700)))));
                    var_20 = ((/* implicit */unsigned short) (_Bool)0);
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_3])), (arr_11 [i_3] [i_3]))))));
        var_22 = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3]);
    }
}
