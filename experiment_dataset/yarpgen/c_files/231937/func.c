/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231937
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((signed char) (signed char)101)), (min((var_0), ((signed char)101))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_18 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0] [i_1] [i_0])))));
                    var_19 *= ((signed char) (!(((/* implicit */_Bool) (unsigned short)29520))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_20 += ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_3])) >= (((/* implicit */int) var_2))))));
                    var_21 -= ((signed char) min((var_2), (((/* implicit */unsigned short) arr_9 [i_3] [i_1] [i_1] [i_0]))));
                }
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_22 += ((((((/* implicit */_Bool) (~(3662165310856696924ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)53))))) : (((13928811403978928772ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                                arr_18 [i_0] [i_4] [i_6 + 2] = ((unsigned long long int) (signed char)-86);
                                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                    var_24 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                    arr_19 [i_4] [i_4] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_5))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((((((((/* implicit */int) (signed char)-86)) + (2147483647))) >> (((((/* implicit */int) (signed char)-78)) + (94))))) - (((/* implicit */int) arr_10 [i_8 + 1] [i_7] [i_8 + 1] [i_7 + 1])))))))));
                            }
                        } 
                    } 
                }
                arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) min(((signed char)38), (arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [(signed char)13])))))));
            }
        } 
    } 
    var_27 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((-(13928811403978928772ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-21)))))))));
    var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) ^ (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (unsigned short)56183)) : ((-(((/* implicit */int) var_0))))))));
}
