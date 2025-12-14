/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33232
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) min((((((/* implicit */_Bool) ((4197447931174032516ULL) << (((((/* implicit */int) (signed char)-65)) + (126)))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (arr_7 [i_0] [i_0])))) : (-8060131281007105593LL))), (((/* implicit */long long int) ((((/* implicit */long long int) max((arr_5 [i_1]), (((/* implicit */int) arr_6 [i_0] [i_0]))))) <= (((long long int) arr_5 [i_0])))))));
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) max((((((((/* implicit */unsigned int) var_7)) * (683648997U))) << (((max((((/* implicit */unsigned int) var_5)), (arr_7 [i_0] [i_1]))) - (4001348287U))))), (((/* implicit */unsigned int) ((arr_2 [i_0]) >= (((arr_5 [i_0]) / (((/* implicit */int) var_3)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-65)), (var_2))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (-2096109074)))) == (min((3402552793360752634ULL), (((/* implicit */unsigned long long int) var_2))))))) : (((/* implicit */int) var_1))));
    var_12 += ((/* implicit */signed char) min((5878126265905684410ULL), (((/* implicit */unsigned long long int) (unsigned char)139))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned char i_4 = 2; i_4 < 16; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])) << (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_14 [i_2 - 2] [i_3] [(unsigned char)9] [(unsigned short)0]), (((/* implicit */unsigned short) arr_9 [i_2]))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) min((((arr_11 [i_2]) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)0]))) - (arr_19 [i_5] [i_4 + 2] [i_3] [i_3] [i_2]))))), (arr_13 [i_2] [i_2])));
                        var_15 = ((/* implicit */long long int) min(((+(((/* implicit */int) ((arr_10 [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4])))))))), (((((/* implicit */int) arr_14 [i_2] [i_2 - 2] [i_4] [i_4 - 1])) * (((/* implicit */int) arr_14 [i_2] [i_2 + 1] [i_4 + 1] [i_4 - 1]))))));
                        var_16 = ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_14 [i_5] [i_4] [i_3] [i_2]))))))) ? (((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (737037455U)))) + (-7727871314958721636LL))) : (((/* implicit */long long int) ((arr_11 [i_2 - 1]) + (arr_11 [i_2 - 2])))));
                    }
                }
            } 
        } 
    } 
}
