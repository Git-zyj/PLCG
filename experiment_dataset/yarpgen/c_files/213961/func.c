/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213961
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
    var_11 = ((((((/* implicit */_Bool) (-(var_4)))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))) | (((/* implicit */long long int) var_3)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (max((16383U), (((/* implicit */unsigned int) arr_4 [i_2 + 2] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 17345789900607323539ULL)) ? (9223372036854775803LL) : (arr_10 [(signed char)12] [i_1] [i_2 + 1] [i_2] [i_2] [i_4])))))));
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) << (((var_2) - (1284252346)))))) ? (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1] [i_3] [(short)4] [i_3]))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        arr_15 [i_5] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((var_2) < ((-2147483647 - 1))))));
                        var_15 = ((/* implicit */unsigned char) var_6);
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(9223372036854775803LL)))) ? (max((((/* implicit */long long int) 7U)), ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 5U)) : ((-9223372036854775807LL - 1LL))))))))))));
                    }
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_2)) - (var_8)))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_5))) : (((/* implicit */unsigned long long int) (~(9223372036854775803LL))))))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [18] [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2])) ? (var_2) : (-1917846762))))));
                    arr_16 [i_0] [i_0] [19LL] [i_0] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */_Bool) (+(var_6)));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((int) 1917846761)), (var_2))))));
}
