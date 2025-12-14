/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230471
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (!(arr_2 [i_0 - 2])));
                        var_10 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_3]);
                        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_1] [i_1]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_12 = ((/* implicit */short) ((unsigned long long int) (unsigned char)196));
            arr_16 [i_0] [i_4] = ((/* implicit */short) arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 1]);
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            arr_19 [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_5])) ? (arr_8 [i_0 + 1] [i_5] [i_5] [(unsigned char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_0])))))) : ((+(18446744073709551612ULL)))));
            var_13 = ((/* implicit */long long int) var_9);
        }
    }
    var_14 = ((/* implicit */unsigned short) var_7);
}
