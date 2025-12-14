/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206721
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
    var_10 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) 0ULL))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775792LL)) ? (arr_1 [i_0] [i_0]) : (18446744073709551599ULL)))) && ((!(((/* implicit */_Bool) 4ULL))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 268435328U)) || (((/* implicit */_Bool) ((18446744073709551590ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)10227))) >= (144080003703767040LL))) ? ((-(((/* implicit */int) (signed char)125)))) : (((((/* implicit */int) (unsigned char)175)) & (arr_9 [i_2] [i_3] [i_3] [i_2] [(unsigned short)1] [i_0 + 1])))))))))));
                                var_12 |= ((/* implicit */unsigned short) (-((((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((508846805) - (508846805))))) & (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_9 [i_0] [i_0] [i_2] [i_3] [(short)1] [(signed char)14]) : (((/* implicit */int) (signed char)-113))))))));
                                arr_13 [i_1] [i_3] [i_2] [0ULL] [i_1] |= ((/* implicit */long long int) (signed char)36);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [6U] [12ULL] &= ((((((/* implicit */_Bool) 5279015321130061314ULL)) ? (17ULL) : (((/* implicit */unsigned long long int) arr_12 [8LL] [i_0] [i_0] [i_0] [i_0 + 1] [i_2] [i_2])))) << (((((/* implicit */int) arr_2 [i_0])) - (242))));
                }
            } 
        } 
    } 
}
