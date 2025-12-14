/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236884
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                arr_8 [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 34359738367LL)) ? ((+(((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))));
                var_14 = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0 + 1] [i_0 - 2]));
            }
            arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)496)) / (var_11)))) ? (((/* implicit */int) arr_3 [i_0] [8])) : (((((/* implicit */int) arr_3 [i_0] [(unsigned short)6])) * (((/* implicit */int) (unsigned char)154))))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    {
                        arr_17 [i_3] [i_3] [i_4] [i_3] [i_3] [(unsigned char)5] = ((/* implicit */int) arr_16 [i_0] [i_0] [4ULL] [i_0 + 1] [i_0]);
                        arr_18 [i_5 - 2] [i_3] [i_3] [i_3] [i_0 - 1] = ((unsigned long long int) arr_1 [i_5 + 2] [i_0 + 1]);
                        arr_19 [i_0] [i_5] [(unsigned short)0] [i_5] [(signed char)8] [i_4] = ((/* implicit */unsigned int) (unsigned short)26298);
                        arr_20 [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_2 [i_5]) : (((/* implicit */int) (unsigned char)3)))) | ((+(((/* implicit */int) (unsigned char)168))))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */long long int) var_12);
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) (signed char)-33)))) : ((~(var_11))))), ((+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)(-127 - 1))), (var_10))))))));
    var_17 |= ((/* implicit */long long int) (signed char)-33);
}
