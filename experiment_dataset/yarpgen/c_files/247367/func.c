/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247367
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
    var_20 = ((((/* implicit */int) var_18)) | (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_8)) <= (18446744073709551612ULL)))), (var_4)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) 19ULL)))), (((((/* implicit */int) (unsigned char)251)) < (arr_4 [i_1 + 1])))));
                    var_22 *= ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [8] [i_1] [13ULL])), ((unsigned short)26750)))))));
                }
                for (short i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    var_23 &= (+(((((arr_4 [i_0]) >> (((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_1 + 1])) + (32749))))) ^ (((/* implicit */int) arr_2 [(short)6])))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (-(((int) ((3736507048987186433ULL) >> (((arr_4 [i_0]) - (80739777)))))))))));
                }
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)226)) - (arr_4 [(_Bool)1])))));
            }
        } 
    } 
}
