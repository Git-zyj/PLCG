/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235767
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_10 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14079461479286572076ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (4294967295U))))));
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_3] [i_1])), (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) ((signed char) (!(arr_1 [i_1] [i_3]))))))))));
                            var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [9ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_2] [3LL] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) : (((long long int) (signed char)8))));
                        }
                    } 
                } 
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) var_7);
                var_13 = ((/* implicit */_Bool) ((unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (var_2))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_8);
    var_15 = var_1;
}
