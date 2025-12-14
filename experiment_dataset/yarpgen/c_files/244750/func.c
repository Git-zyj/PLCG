/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244750
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_13))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) % (var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)127)) <= (1044480))))), (((unsigned short) max((((/* implicit */unsigned short) (unsigned char)96)), (arr_6 [i_0] [14U])))))))));
                var_17 = ((/* implicit */short) ((unsigned long long int) -2067351194));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_18 *= ((/* implicit */unsigned long long int) arr_4 [i_0]);
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4177920U)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [6LL] [6LL])) ? (((/* implicit */int) (unsigned short)65385)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [10LL] [i_2]))) ? (((-9223372036854775784LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)145))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [1ULL] [i_1] [13])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)133)))))) ? (((unsigned long long int) -3722867487631229228LL)) : (min((var_6), (((/* implicit */unsigned long long int) var_10)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (unsigned short)65409);
                                arr_16 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)25))));
                                arr_17 [0] [i_1] [i_1] [i_3] [i_1] [i_1] |= ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)145))));
                }
            }
        } 
    } 
}
