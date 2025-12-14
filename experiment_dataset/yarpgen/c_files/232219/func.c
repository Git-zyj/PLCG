/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232219
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((long long int) ((unsigned long long int) (short)-3197)));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 18446744073709551596ULL))) ? ((~((-2147483647 - 1)))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)8)) : (-2147483639)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [(short)9] = ((/* implicit */short) ((unsigned long long int) 1016454048498211666ULL));
                            arr_15 [(short)7] [(short)12] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13439)))));
                            var_12 = ((/* implicit */int) (short)-22408);
                            var_13 = ((/* implicit */int) ((unsigned long long int) (-2147483647 - 1)));
                        }
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((-1589754386), (((/* implicit */int) (short)-4)))) : (((/* implicit */int) var_8))))) ? ((-(((((/* implicit */int) (signed char)-71)) + (((/* implicit */int) (unsigned char)16)))))) : (((/* implicit */int) var_9))));
}
