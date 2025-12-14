/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223183
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)10850)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])) : (var_2))))), (((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (7525026365532196695ULL) : (((/* implicit */unsigned long long int) arr_0 [i_2])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16)))))))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) (short)3521);
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) & (((((/* implicit */_Bool) (short)3531)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13878340773691368397ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) (short)3530))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_6 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : ((+(((/* implicit */int) var_16)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (max((((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)11931))))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-26)) || (((/* implicit */_Bool) 18446744073709551596ULL)))))) : ((-9223372036854775807LL - 1LL))))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((1073741824U), (((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned short) (short)3516)))))))) ? (((/* implicit */long long int) 783832091U)) : (517443139719755281LL)));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) 4721082159870410694ULL);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_16))));
}
