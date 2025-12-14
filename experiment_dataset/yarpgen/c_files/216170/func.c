/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216170
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 1] [i_1 - 1]))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1] [i_2 + 1])))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) max((max((var_8), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) arr_0 [i_2 + 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (9223372036854775807LL) : (-9223372036854775789LL))), (((9223372036854775807LL) % (9223372036854775807LL)))));
                                var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [(short)11] [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (var_0)))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) arr_11 [i_3] [i_3 + 1] [i_3 - 1] [i_1] [i_0])))))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_3 [i_3 - 1] [i_1 - 2] [i_0 + 1])))), (((((/* implicit */_Bool) arr_3 [i_3 + 2] [i_1 - 3] [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_1 - 1] [i_0 + 1])) : (var_1))))))));
                                arr_13 [i_4] [i_3 - 1] [i_2 - 1] [i_1] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((arr_6 [i_0 - 1] [i_0 + 2] [i_0 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 ^= ((_Bool) ((long long int) 1323111023962741880LL));
                    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_7] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1584))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5] [11LL])) || (((/* implicit */_Bool) arr_19 [i_5])))))))));
                    arr_20 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_5])) + (((/* implicit */int) arr_14 [i_6]))))), (((((/* implicit */_Bool) arr_4 [i_5] [i_6] [i_7])) ? (9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-99))))))));
}
