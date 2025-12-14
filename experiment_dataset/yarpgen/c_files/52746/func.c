/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52746
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-7))));
                    var_15 ^= ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) * (((/* implicit */unsigned long long int) ((0) * (((/* implicit */int) (unsigned char)110)))))))));
                    var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-7)), (arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) (unsigned char)123)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) var_4);
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2934376807U))) <= ((~(arr_0 [i_0] [i_0]))))))) ^ (((max((1360590485U), (((/* implicit */unsigned int) arr_3 [i_2])))) + (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_11 [i_0 - 2] [i_0] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) var_3))));
                        arr_12 [i_2] = ((/* implicit */int) min((206726865U), (((/* implicit */unsigned int) var_13))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)24)) + (-1672285720)));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) 3698029118U))) ? (((((/* implicit */_Bool) (signed char)87)) ? (-168521459402766343LL) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((2934376807U) == (2835304381U))))));
}
