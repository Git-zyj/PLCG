/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27944
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [6LL] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((((max((((/* implicit */unsigned long long int) arr_3 [(unsigned short)10] [i_0] [i_1])), (var_10))) << (((((var_10) << (((((/* implicit */int) var_1)) - (26260))))) - (15305694439851163625ULL))))) - (17742518572489375730ULL)))));
                var_18 -= ((/* implicit */unsigned long long int) var_13);
                var_19 = ((/* implicit */unsigned long long int) 3461547422U);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (unsigned int i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) arr_8 [i_3] [i_3 + 1]))), ((-(var_13)))));
                    var_21 = ((/* implicit */unsigned long long int) (((((((-(((/* implicit */int) var_5)))) + (2147483647))) << (((((((var_11) + (9223372036854775807LL))) << (((arr_2 [i_2] [i_3]) - (6146359551354069262LL))))) - (8240429021797822006LL))))) << (0ULL)));
                    arr_12 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_3])) << (((((/* implicit */int) var_4)) - (18694)))))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) max((arr_3 [i_2] [i_3] [i_2]), (arr_1 [i_3] [i_4])))) ? (var_7) : (var_12)))));
                    var_22 = ((/* implicit */unsigned long long int) (unsigned short)43911);
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) (((-(max((18446744073709551606ULL), (arr_8 [i_3] [i_3 - 3]))))) << ((((-(min((((/* implicit */unsigned long long int) arr_5 [i_2])), (18446744073709551583ULL))))) - (18446744073709543556ULL)))));
                        var_24 = ((/* implicit */signed char) (((+(25ULL))) * (18446744073709551615ULL)));
                    }
                }
            } 
        } 
    } 
    var_25 = (-(9ULL));
    var_26 = var_15;
}
