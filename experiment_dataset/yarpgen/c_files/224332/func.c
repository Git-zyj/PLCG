/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224332
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((var_12), (((/* implicit */unsigned long long int) var_3)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_2))))))) : (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_18))) : ((((_Bool)0) ? (var_5) : (((/* implicit */unsigned long long int) 6118624117771272835LL)))))))))));
    var_20 = ((((/* implicit */_Bool) max((((long long int) (unsigned short)65535)), (((/* implicit */long long int) ((int) var_5)))))) ? (((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) var_3)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : ((-(((((/* implicit */_Bool) var_8)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
    var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(var_1))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [(signed char)1] [i_2] = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-12))), (min((var_15), (((/* implicit */unsigned long long int) arr_15 [(signed char)11] [i_2] [i_3 - 1] [i_1] [i_2] [(_Bool)1])))))));
                                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_1 [i_0 - 3]) : ((-2147483647 - 1)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [(signed char)10] [i_1] [i_2] [i_3 - 3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12))))))) : ((+(min(((-2147483647 - 1)), ((-2147483647 - 1))))))));
                                var_23 = ((((((/* implicit */int) max((arr_8 [i_2] [i_1] [i_2]), (((/* implicit */unsigned short) arr_9 [(unsigned short)12] [i_2]))))) + (min((arr_1 [i_0 + 1]), ((-2147483647 - 1)))))) > ((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [i_4])) : (2147483647))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(arr_12 [8] [10] [i_2] [i_3 - 4])))), (min((((arr_7 [i_0 - 1] [i_0 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483644)) ? (arr_3 [(_Bool)1] [i_1] [(short)14]) : (arr_1 [i_2])))))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */int) ((short) (-(((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */int) var_0)) : (2147483647))))));
                arr_17 [i_0 - 3] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (-2147483647 - 1))), (((unsigned int) arr_13 [i_0] [0])))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)12] [(short)0])))));
                var_26 = ((/* implicit */unsigned long long int) arr_10 [(signed char)14] [i_1]);
            }
        } 
    } 
}
