/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19714
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
    var_10 += ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-6366)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) (short)32767)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -4515341784460740587LL)))))), (18446744073709551615ULL)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (18446744073709551615ULL) : (0ULL)))) && (((/* implicit */_Bool) arr_6 [i_3] [i_3 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(4294967295U))) < (((arr_5 [i_0] [i_0] [i_2] [i_3 + 1]) * (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))))))) : (min((((/* implicit */unsigned int) (unsigned short)26304)), (0U)))));
                            var_11 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)255)))) : (((((/* implicit */unsigned long long int) arr_1 [i_0])) & (0ULL)))))));
                            var_12 = ((/* implicit */unsigned short) max((var_12), ((unsigned short)26304)));
                        }
                    } 
                } 
                var_13 = (unsigned char)255;
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((arr_9 [i_0] [i_0] [(short)10] [i_1] [i_1]) || (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) && (((/* implicit */_Bool) arr_4 [i_0] [(short)5]))));
            }
        } 
    } 
}
