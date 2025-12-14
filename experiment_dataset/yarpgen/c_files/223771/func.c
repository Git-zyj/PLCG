/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223771
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
    var_18 &= ((/* implicit */unsigned int) var_1);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_9))))) & (((/* implicit */int) ((signed char) (unsigned char)76)))))) : (((var_8) & (((/* implicit */long long int) ((4294967294U) << (((((/* implicit */int) (short)27386)) - (27385))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_20 = ((/* implicit */_Bool) ((arr_0 [i_0]) - (arr_0 [i_0])));
        arr_3 [(unsigned short)6] &= ((/* implicit */unsigned char) (+(((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_21 |= ((/* implicit */short) (((+(arr_5 [i_1]))) % (((/* implicit */long long int) (+((-(((/* implicit */int) var_3)))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_12 [i_3] [9U] [10U] [i_3] = ((/* implicit */signed char) (unsigned short)56297);
                    arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3])) ? ((+((+(arr_10 [i_1] [(signed char)5] [i_1]))))) : (3349958026634969290LL)));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)125)))), (((/* implicit */int) arr_9 [i_2 + 2] [i_3 + 1])))))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) (signed char)124))))), (arr_5 [i_1]))) / (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)38867), (((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_1] [i_1])))))) * (max((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [(signed char)5])), (1387898304U)))))))))));
    }
}
