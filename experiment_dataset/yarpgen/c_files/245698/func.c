/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245698
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 1] [i_0] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) ((arr_2 [i_2 + 1]) * (((/* implicit */unsigned int) arr_1 [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_3] [3] [i_1 - 2] [3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_6 [i_4] [i_2] [i_2] [i_1 - 1]) ? (((/* implicit */int) (signed char)-59)) : (arr_10 [i_2] [i_3 - 1] [i_2 - 4] [i_1 - 3] [i_2])))), ((((_Bool)0) ? (var_8) : (arr_2 [i_1])))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((short) arr_6 [i_0] [i_0] [i_2] [(unsigned short)10]))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)1792)) ? (((/* implicit */int) (short)-2892)) : (var_14)))))));
                                arr_13 [i_2] [i_1 - 1] [i_2 - 2] [i_3] [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */_Bool) arr_3 [2ULL] [6U] [i_2 + 1]);
                                var_19 += ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((var_4) & (arr_10 [i_0 - 1] [i_1] [i_2 - 1] [i_3 - 1] [i_0]))) <= (((((/* implicit */_Bool) 641022796670872929ULL)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) var_5))))))), ((unsigned char)2)));
                                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_18)) ? (arr_11 [i_2] [i_1 - 2] [i_2]) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (short)-2904)))))) - (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (arr_11 [i_2] [i_2] [i_3 - 1]))), (((((/* implicit */_Bool) arr_11 [i_2] [i_1 - 3] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)46603))))))));
                            }
                        } 
                    } 
                    arr_14 [i_1 - 3] [i_2] [i_2 - 3] [i_1 - 3] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_18))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (var_2)));
    var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72)))))), (min((var_2), (((/* implicit */long long int) var_13))))));
}
