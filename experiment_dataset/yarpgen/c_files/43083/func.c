/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43083
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (signed char)38)) ? (var_6) : (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) (signed char)-30)), (var_10))))))))));
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) min((var_2), ((+(((/* implicit */int) (signed char)27)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)32)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2] [(signed char)4] [i_2]))))), (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (arr_3 [i_0] [i_0] [i_2])))))) : (arr_5 [i_2] [i_2])));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [4U] [4U])) ? (((((((arr_0 [0ULL]) + (9223372036854775807LL))) << (((65011712) - (65011712))))) & (((/* implicit */long long int) arr_3 [i_2] [i_2] [i_2])))) : (((/* implicit */long long int) min((arr_3 [i_0] [i_1] [i_2]), ((-(2852425164U))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                {
                    arr_15 [i_5] [i_5] [(_Bool)1] [i_5] = ((/* implicit */long long int) max(((signed char)-28), ((signed char)-30)));
                    var_20 = ((/* implicit */signed char) (~(arr_10 [i_3 + 2] [i_3 + 3])));
                    var_21 = ((/* implicit */int) (+(9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_21 [i_3] [i_3] [i_3] [i_3 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((long long int) 1049787397)), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-64))))))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))) | (((unsigned long long int) (-(var_15)))))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) min((var_2), (((/* implicit */int) arr_14 [i_3 - 1] [i_4] [i_5] [i_6])))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)149)) ? (3074432214U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30)))))))) : ((-(5368043926592326051ULL))))))));
                                arr_22 [i_6] [i_6] [i_5] [i_7] = ((/* implicit */unsigned short) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2290922849U))));
                                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [(unsigned char)3] [3U] [i_3 + 3] [i_6] [i_7])), (var_15)))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1846146093)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_8 [i_3])))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_11 [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 3])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
