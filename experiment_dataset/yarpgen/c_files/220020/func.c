/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220020
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
    var_13 = ((/* implicit */unsigned short) ((var_5) & (((((/* implicit */_Bool) ((var_8) + (var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (312687683))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)18)) : (((((/* implicit */_Bool) 3379144648363597382ULL)) ? (((/* implicit */int) (short)-30322)) : (((/* implicit */int) (unsigned short)59748))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)30317)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (3458764513820540928LL))))) : (var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_10))))) > (-8581276030115132439LL))) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_9 [i_0]) : (arr_9 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_5 [6] [i_0]))))))))))));
                                arr_11 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */short) min(((+(((/* implicit */int) min((arr_5 [i_2] [i_2]), ((unsigned short)65517)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16010)) ? (var_12) : (7685766154816902438LL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [10ULL] [i_3] [(unsigned short)14])) <= (((/* implicit */int) arr_5 [i_0] [i_2]))))) : (arr_4 [i_0] [i_1] [i_2])))));
                                var_16 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_2 [i_0]) | (arr_0 [i_0] [i_0])))), (((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_3])) & (8036201028807777505ULL)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [7ULL]) > (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) : (((/* implicit */unsigned long long int) var_1)));
                                arr_12 [i_3] [14] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned long long int) -8581276030115132462LL);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (~(arr_4 [i_0] [i_1] [i_1]))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32459)) && (((/* implicit */_Bool) (-2147483647 - 1)))))) ^ (((((/* implicit */_Bool) (unsigned short)10)) ? (var_5) : (((/* implicit */int) (short)32767)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_1] [i_0]) : (var_0)))) ? (var_0) : (arr_8 [i_0] [i_1] [i_0] [i_1 - 2])))));
                var_18 = ((/* implicit */short) max((((/* implicit */unsigned short) (short)-17923)), ((unsigned short)65517)));
            }
        } 
    } 
}
