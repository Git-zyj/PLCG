/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247872
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
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) ((_Bool) 1ULL))) : (var_11)))) % (((unsigned long long int) var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((min((var_2), (arr_4 [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 1]))), (((/* implicit */unsigned long long int) (unsigned char)71))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_19 *= ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 3] [i_2] [i_3] [i_3]))))) ? (3385198313205376437ULL) : (((/* implicit */unsigned long long int) 12582912))));
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (3385198313205376420ULL)))) || (((/* implicit */_Bool) 1ULL)))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 15061545760504175195ULL)))) ? (max((var_11), (147765619))) : (((/* implicit */int) (unsigned short)36876)))))));
                                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))) : (arr_4 [i_0] [i_1 - 3] [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 2])) : (((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))))))), (((/* implicit */unsigned long long int) arr_11 [i_0]))));
                                var_22 = ((/* implicit */unsigned short) ((((var_11) & ((+(((/* implicit */int) (unsigned char)2)))))) >> (((arr_3 [i_1 - 1] [i_1 - 3]) + (1806666309)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == ((-(2ULL)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_16))));
}
