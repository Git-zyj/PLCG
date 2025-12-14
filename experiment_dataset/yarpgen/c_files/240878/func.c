/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240878
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
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_1) > (((/* implicit */int) ((((/* implicit */int) (signed char)-94)) > (((/* implicit */int) (signed char)127))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_15 = ((/* implicit */signed char) var_4);
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])), (var_7))))));
                }
                var_17 = min(((~(max((((/* implicit */long long int) var_7)), (arr_2 [3LL] [3LL] [i_1]))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-87)) : (arr_6 [3ULL] [i_1] [3ULL])))), ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
            }
        } 
    } 
}
