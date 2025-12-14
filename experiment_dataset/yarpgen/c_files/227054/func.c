/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227054
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [(_Bool)1])) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_0] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_11 [i_1 + 1] [i_0] [i_3 - 1] [7U] [i_3] [i_4] [i_4]))));
                            }
                            arr_13 [i_3] [i_2] [i_0] [i_0] [15LL] [i_0] = ((/* implicit */_Bool) -808463673);
                            var_17 = ((((((((/* implicit */_Bool) arr_8 [i_3] [i_1] [i_1] [i_0])) ? (16247061977872184407ULL) : (((/* implicit */unsigned long long int) arr_6 [i_3 - 2] [i_1 + 1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4496229161363551943ULL)))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3305339431232101941LL)) ? (((/* implicit */int) (unsigned short)25665)) : ((~(((/* implicit */int) (signed char)66))))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2059371802U)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((arr_10 [i_0] [(unsigned short)2] [i_2] [(_Bool)1] [i_2] [i_3]), (((/* implicit */long long int) var_6))))) : (((14081933780740666241ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_3))) ^ (((/* implicit */int) ((signed char) 9236092641660880477ULL)))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (137514268U))) * (max((2072839680U), (((/* implicit */unsigned int) var_7))))))));
}
