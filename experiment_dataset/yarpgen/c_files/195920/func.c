/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195920
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
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_7) << (((12795537948253445058ULL) - (12795537948253445000ULL)))))))))));
                                var_11 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_2] [i_1] [i_3])) >> (((((/* implicit */int) (signed char)-88)) + (103))))), ((~(arr_8 [i_2])))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (max((((/* implicit */unsigned char) (signed char)101)), (arr_5 [i_0 + 1] [i_1] [i_0] [i_0]))))))));
                                var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */long long int) (+((-(((/* implicit */int) (short)-27217))))))) | (((long long int) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_2] [i_3] [i_4 + 2])))))))));
                            }
                        } 
                    } 
                } 
                var_13 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                var_14 += ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_0 + 3])) : (arr_9 [i_0 + 2]))), ((-(((/* implicit */int) arr_2 [i_0]))))))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_5] [i_6] &= (-(((((6700549668611843541LL) & (((/* implicit */long long int) ((/* implicit */int) var_1))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10933))) : (arr_0 [i_5]))))));
                            var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_5])) >> (((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)181)) || (((/* implicit */_Bool) (-(arr_0 [i_0 + 1])))))))));
                            var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned char) ((signed char) min((arr_10 [i_0] [i_0] [i_0] [i_6] [i_0 + 2]), (((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_5] [i_6])))))), (var_5)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_5);
}
