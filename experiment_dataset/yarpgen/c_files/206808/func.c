/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206808
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_9 [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 442969952)))) - (((3ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4748)))))));
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1] [i_1])) == (((/* implicit */int) (signed char)-90)))) ? ((+(((/* implicit */int) arr_4 [i_2 + 1] [i_1])))) : (((arr_4 [i_0] [i_1]) ? (((/* implicit */int) arr_4 [(signed char)2] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                            var_16 |= ((/* implicit */signed char) 310147977118268714ULL);
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_1] [(short)2] [(short)2] [i_1] [i_0] [i_0])) % (var_14))), (((((/* implicit */_Bool) arr_7 [(signed char)8] [i_1 - 2] [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)8])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1])))))))));
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1] [i_0]))))), (arr_0 [i_0])));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (((-(max((arr_5 [i_1 - 1] [i_0]), (((/* implicit */long long int) (short)16383)))))) - (arr_0 [i_1]))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */short) (+(((/* implicit */int) var_6))));
}
