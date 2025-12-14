/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224638
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((-(arr_3 [i_0 + 2] [i_0 + 3] [i_0 - 1]))), ((-(max((((/* implicit */long long int) var_14)), (8480577232070530676LL)))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_9))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    var_16 -= ((/* implicit */unsigned char) ((long long int) ((long long int) max((((/* implicit */long long int) var_9)), (-8480577232070530670LL)))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+(((int) ((((/* implicit */_Bool) arr_3 [20LL] [i_1] [i_2])) ? (33554431U) : (((/* implicit */unsigned int) 1248305915)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_19 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1])) ? (arr_17 [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                                var_17 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 20; i_5 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((long long int) arr_6 [i_0])));
                        var_18 ^= ((/* implicit */_Bool) var_1);
                    }
                }
                arr_25 [i_0 + 3] [2] [(signed char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_0 + 2] [i_1] [i_1] [i_1])), (var_6)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_4)))) ? (((9165871143851471970ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_0 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) var_14)), (var_9))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) var_0)))), (((/* implicit */int) var_12)))), (-329924624)));
}
