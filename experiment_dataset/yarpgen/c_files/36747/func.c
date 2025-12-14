/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36747
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
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = -1949150056;
                            arr_10 [10] [i_0] [1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_0])) ? (var_10) : (((/* implicit */int) ((var_10) < (((((/* implicit */int) (unsigned short)64197)) >> (((((/* implicit */int) (short)-28213)) + (28239))))))))));
                            var_14 |= (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1] [i_1 + 1] [i_0])) : (arr_9 [4] [i_1] [i_1] [(unsigned char)16]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) -1949150078)) : (18446744073709551615ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (var_10)))) : (((/* implicit */int) arr_7 [i_5] [i_1 - 1] [i_4])))) < (((/* implicit */int) (!(arr_6 [i_1] [i_1 + 1] [i_0] [i_1 + 1]))))));
                            var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1949150073)) ? (((((/* implicit */int) (signed char)-121)) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [(signed char)3])))))) : (((((/* implicit */int) (unsigned short)64197)) + (((((/* implicit */_Bool) (unsigned short)64199)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_5] [i_1] [i_5])) : (((/* implicit */int) arr_0 [i_1] [i_4]))))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_1 - 1] [i_1 - 2] [i_5] [i_1 - 2]), (arr_9 [i_1 - 1] [i_1 - 2] [i_1] [i_1])))) ? ((-(((/* implicit */int) var_8)))) : (max((((/* implicit */int) (unsigned short)1338)), (((((/* implicit */_Bool) arr_9 [i_0] [0] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)9631)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [i_5])))))))))));
                            arr_15 [(unsigned short)7] [i_4] [i_0] [i_4] [3LL] [9] = ((/* implicit */unsigned char) (-(var_5)));
                        }
                    } 
                } 
            }
        } 
    } 
}
