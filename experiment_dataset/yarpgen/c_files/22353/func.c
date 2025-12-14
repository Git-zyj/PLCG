/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22353
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)62335))))), ((~(arr_9 [i_2] [i_2] [i_1] [i_2])))))) && (((/* implicit */_Bool) 7783515995615489323LL))));
                                var_15 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_13 [i_3 - 2] [i_1] [i_1] [i_2 + 2]))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (13440827489547596158ULL) : (((/* implicit */unsigned long long int) -9223372036854775786LL)))) << (((arr_14 [i_0] [i_0] [i_2 + 1]) - (2177509540990885990LL))))), ((~(((0ULL) * (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_0])))))))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2]))) : (-6552374653060049163LL)))), (min((18085126280452910345ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
                        arr_20 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 8407886730189233100LL))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33610)))))));
                    }
                    var_18 = ((/* implicit */short) (unsigned short)0);
                    var_19 ^= ((/* implicit */long long int) ((5ULL) * (((/* implicit */unsigned long long int) 0LL))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */short) var_11);
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (5622398446278271466LL))), (((/* implicit */long long int) var_1))))) % (max((((((/* implicit */_Bool) 6494106043381045723LL)) ? (var_8) : (((/* implicit */unsigned long long int) var_4)))), (min((1811523047741531133ULL), (((/* implicit */unsigned long long int) var_3))))))));
}
