/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20592
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) (unsigned char)16)) ? (arr_0 [16LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (-4073662803751547056LL)))) ? (((max((var_10), (((/* implicit */long long int) (unsigned char)31)))) & (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [1LL] [i_1 + 2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_2 [i_0]))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */long long int) 15360)) ^ ((+(arr_0 [i_0 + 2] [i_0 - 1])))));
        }
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_5) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)173)))), (((/* implicit */int) (signed char)-71))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_0 + 3]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) 740120135U)) && (((/* implicit */_Bool) (unsigned short)42364))))), (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-2531930423101151761LL)))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min(((((_Bool)0) ? (arr_0 [i_0 - 1] [20ULL]) : (((/* implicit */long long int) arr_2 [i_2])))), (((/* implicit */long long int) ((((/* implicit */int) var_18)) != (((/* implicit */int) (unsigned char)219)))))));
            arr_9 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_4)));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            arr_12 [i_0 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)8064))) <= (arr_1 [i_0 - 2]))) && (((/* implicit */_Bool) var_11))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)2)) : ((+(((/* implicit */int) arr_6 [i_0 + 2]))))));
        }
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned char)16), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-479360871) : (((/* implicit */int) (short)8078))))) ? (((/* implicit */int) (unsigned char)241)) : ((~(-860187475)))))) : (var_0)));
}
