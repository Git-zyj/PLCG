/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3453
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
    var_15 = ((/* implicit */unsigned long long int) 5081990782532699281LL);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23353)) ? ((~(((/* implicit */int) (short)-23353)))) : (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0]) : (arr_3 [i_0])))))))));
                    var_16 = min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 762986134U)), (3526548874501410592ULL))))))), (max((arr_5 [i_0] [(signed char)6] [i_0]), ((signed char)-108))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_1] [i_1] [(signed char)6] [i_0] [i_1] [(signed char)6] [i_1]);
                                arr_12 [21LL] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */short) arr_0 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [(signed char)0] [7LL]);
    }
    var_17 = ((/* implicit */unsigned long long int) ((unsigned char) max((((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)141)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_4)), (var_5)));
}
