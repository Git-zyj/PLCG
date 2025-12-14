/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223765
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (-3116224099900658497LL) : (-3116224099900658508LL)))), (((10714186073033402917ULL) + (((/* implicit */unsigned long long int) ((3116224099900658512LL) << (((((-3116224099900658508LL) + (3116224099900658532LL))) - (23LL))))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 15985682322409216442ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4ULL))))));
            var_20 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_11 [2ULL] [i_1] [i_2 + 2] [i_0] [i_1] |= ((/* implicit */unsigned long long int) var_11);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (arr_5 [i_2 - 1])));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (arr_3 [i_0])));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_4 + 4] [i_4 + 1] [i_2] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) (~(-3116224099900658508LL)))) : ((~(0ULL))))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_4 [i_1]))));
                            var_25 ^= ((((/* implicit */_Bool) arr_12 [i_4 + 4] [i_2 + 2] [i_2 + 2] [i_4 + 4])) ? (arr_13 [i_1] [i_3] [i_2 - 1] [i_2 - 1] [i_4] [i_4 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_18 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1]))));
                            var_26 ^= ((/* implicit */unsigned short) arr_16 [13LL] [i_1] [i_2 + 2] [16ULL] [i_1]);
                            var_27 = ((/* implicit */signed char) arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_5]);
                            arr_19 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [3ULL] [i_2] [(signed char)0] [3ULL])) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (2125514816049239486ULL) : (1630398558748677100ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_16 [3ULL] [i_1] [i_1] [i_1] [i_3]))));
                    }
                } 
            } 
        }
        arr_20 [i_0] = arr_7 [i_0] [i_0] [6LL] [i_0];
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [(_Bool)1] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0] [(_Bool)1])))))));
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max(((~((~(10622259517940522485ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(18446744073709551611ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : (min((((/* implicit */long long int) arr_7 [i_0] [i_0] [6LL] [i_0])), (arr_5 [i_0])))))))))));
    }
    var_31 = ((((((/* implicit */unsigned long long int) var_12)) & (var_7))) % (((/* implicit */unsigned long long int) (-(((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_13)))))));
}
