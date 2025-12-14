/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247014
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
    var_19 = ((/* implicit */short) var_6);
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */unsigned long long int) (+(var_11)))) > (((unsigned long long int) 2428483036661253226ULL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned long long int) max((1028874541699160181LL), (((((/* implicit */_Bool) (short)-5211)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 1]))) : (var_15)))));
                                var_23 = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
                                arr_12 [i_0 + 1] [11ULL] [i_2] [i_3] [i_4] [11ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_0)))) ? (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_3 [9ULL])) : (((/* implicit */int) arr_0 [i_0 + 1])))) : ((~(((/* implicit */int) var_13))))))) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_17)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65504)) || (((/* implicit */_Bool) var_9))))) != (((/* implicit */int) ((short) (short)(-32767 - 1)))))))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) ((3729080444116321629ULL) >= (12464192250517352487ULL)))) : (((/* implicit */int) var_18))))) > (((((/* implicit */unsigned long long int) ((unsigned int) var_4))) * (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_0)))))));
                                arr_14 [i_4] = max((((/* implicit */int) max((((/* implicit */unsigned short) var_17)), ((unsigned short)65517)))), ((-(((/* implicit */int) ((signed char) 1767737963U))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_1 - 1])) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_1 - 3]) : (arr_11 [i_0 - 1] [i_0 + 1] [i_1 - 2])))) > (var_5)));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_11 [i_1 - 3] [i_1] [i_1 - 3])) : (var_14)))) ? (((/* implicit */unsigned long long int) ((int) arr_6 [(signed char)0] [i_1] [i_1 - 3]))) : (((unsigned long long int) arr_11 [i_1] [(signed char)7] [i_1 - 3]))));
            }
        } 
    } 
}
