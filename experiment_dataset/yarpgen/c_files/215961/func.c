/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215961
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
    var_18 = ((/* implicit */unsigned char) (unsigned short)6144);
    var_19 = ((/* implicit */signed char) 3830652882185005793LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 - 1] [i_2 - 1])))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_1 - 2] [i_2 + 1])) ? (((((/* implicit */_Bool) ((3830652882185005775LL) ^ (3830652882185005799LL)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 6853129598751826722LL)))) : (((/* implicit */unsigned long long int) arr_1 [i_3 - 2])))) : ((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(short)10])))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)2] [(unsigned char)2]))) : (arr_7 [0ULL] [i_3 - 2])))))));
                            var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30464))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_0] [(signed char)6] [i_2 + 2])), (arr_2 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2 + 2] [i_2] [i_3]))))) : (18446744073709551615ULL))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)240)), (var_15)))) > (((18446744073709551609ULL) - (18446744073709551615ULL)))))), (((((((/* implicit */_Bool) (unsigned char)23)) ? (arr_7 [i_0] [i_1 + 1]) : (7ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [4LL])))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned long long int) ((((min((var_2), (((/* implicit */unsigned int) var_12)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */unsigned int) var_1)) % ((-(9U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    var_23 = ((/* implicit */_Bool) (-(((((((/* implicit */int) var_12)) != (((/* implicit */int) (signed char)10)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (3830652882185005762LL)))));
}
