/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201026
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) max((max((var_0), (((/* implicit */short) (unsigned char)0)))), (((/* implicit */short) ((signed char) (signed char)(-127 - 1))))))) * (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) max(((signed char)(-127 - 1)), ((signed char)(-127 - 1))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2] [i_3 + 1])) || (((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_3 - 2]), (arr_8 [3] [i_0] [3] [i_2] [i_3 - 1]))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_4] [i_4] [i_1] [i_3 - 3] [i_2] [i_1] [i_4]))))) ? ((+(18446744073709551600ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))));
                            var_18 = ((/* implicit */unsigned char) ((18446744073709551590ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_0] [i_1] [i_2] [i_3 - 1]) : (arr_9 [i_3] [i_1] [i_2] [i_3 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            var_19 = 1593698842781172216ULL;
                            var_20 = ((/* implicit */long long int) var_5);
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_19 [i_1] [i_1] [i_3] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned char) (~(arr_6 [i_3] [i_3] [i_3] [i_3])));
                            var_21 = ((/* implicit */unsigned char) (short)-28023);
                            var_22 ^= ((/* implicit */signed char) var_10);
                        }
                        for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (16ULL)))) ? (21ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [14LL] [i_3 + 1] [i_1])) + (((/* implicit */int) arr_12 [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3] [i_2])))))))));
                            arr_24 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_3 - 3])), (1237403278U)))));
                        }
                    }
                } 
            } 
        } 
        var_24 += ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0] [i_0] [i_0]));
        var_25 = (+(max((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (!((_Bool)1)))))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_11);
    var_27 = ((/* implicit */unsigned long long int) var_1);
}
