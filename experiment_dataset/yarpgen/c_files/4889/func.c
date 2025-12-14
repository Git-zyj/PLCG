/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4889
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) 0ULL))));
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((9ULL), (((/* implicit */unsigned long long int) var_0))))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) 1260237933U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (2605017700U)))))))));
    var_16 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) <= (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_3] [i_2] [i_1]))))) : (arr_5 [i_1 - 2] [i_1 - 1] [i_3 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)));
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_8))));
                            arr_12 [i_1 - 2] [i_3] = ((/* implicit */unsigned char) -5987731960605890350LL);
                        }
                    } 
                } 
                arr_13 [i_0] = max((((((/* implicit */unsigned int) var_3)) < (arr_0 [i_1 + 1]))), ((!(((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1] [i_0] [i_1])))));
                var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) ((arr_11 [i_0] [10] [(unsigned char)6] [10]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))))) == (var_10)))), (((((/* implicit */int) ((arr_10 [14U] [i_0] [14U] [i_0] [i_0] [i_0]) < (192136901U)))) & ((~(((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                arr_14 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_6 [i_1 - 2]) == (arr_6 [i_1 + 1]))))));
            }
        } 
    } 
}
