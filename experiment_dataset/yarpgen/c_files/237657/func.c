/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237657
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
    var_14 *= ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (!(((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */short) var_13)), (var_6))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-9223372036854775786LL) : (((/* implicit */long long int) arr_3 [i_0]))))))), ((!(((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1])))))))));
                            var_17 &= ((/* implicit */unsigned int) max(((~(((/* implicit */int) max((var_3), (arr_2 [i_0])))))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) != ((-(2147483647))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) min(((~(arr_5 [i_1 + 1] [(unsigned char)8] [i_1 + 1]))), ((+((~(arr_8 [i_0] [i_0] [i_1] [i_0])))))));
                arr_10 [i_1 + 1] = ((int) arr_8 [i_0] [i_1] [i_0] [i_0]);
                var_19 = var_4;
            }
        } 
    } 
}
