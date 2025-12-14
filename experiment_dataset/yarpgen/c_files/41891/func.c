/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41891
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (short)-32760);
        arr_4 [(unsigned short)7] = ((/* implicit */short) ((signed char) (short)-32745));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_2])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (short)-32736)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [(unsigned short)15]))))));
            var_19 = var_14;
            var_20 *= arr_7 [i_1] [i_1] [(signed char)3];
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1 - 2])) / (-1339910718)));
            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) var_3))));
            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_3] [i_1 + 1] [i_3])) | ((~(((/* implicit */int) var_17))))));
            var_24 = ((/* implicit */signed char) ((arr_11 [i_3] [i_1 - 1] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        }
        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_25 *= ((/* implicit */int) (short)-1);
            arr_17 [i_1] [i_4] = ((/* implicit */int) arr_7 [i_1 + 1] [(signed char)19] [i_1]);
        }
        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-82)) ^ (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((unsigned short) (_Bool)1)))));
            var_27 = ((/* implicit */int) var_13);
        }
        var_28 *= ((/* implicit */short) ((_Bool) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2]));
        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1339910718)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-100))));
    }
    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_16))));
}
