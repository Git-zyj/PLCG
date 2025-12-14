/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30251
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551609ULL))));
        arr_3 [i_0 + 2] = ((/* implicit */short) ((12027607948231293090ULL) * (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0] [(unsigned char)2])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) (signed char)122)) * (((/* implicit */int) (short)-15894)))))));
            var_19 = ((/* implicit */signed char) ((long long int) arr_5 [i_0 + 2]));
        }
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [3ULL])) ? (((/* implicit */long long int) 1152905405)) : (2454549339529218504LL)));
    }
    var_21 = ((/* implicit */int) ((unsigned int) -1152905409));
}
