/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209949
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
    var_16 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2147483647)) ? ((-2147483647 - 1)) : (2147483647))))))));
    var_17 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_6)))))) ? ((-2147483647 - 1)) : ((~((~(var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */signed char) ((((unsigned long long int) var_13)) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (102470265))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 3; i_4 < 20; i_4 += 1) 
                            {
                                var_19 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (var_11)))), (max((((/* implicit */unsigned int) (unsigned char)124)), (var_3))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 130023424)) ? (((/* implicit */int) arr_12 [i_1] [i_2] [i_4 - 3])) : (((/* implicit */int) arr_12 [6U] [i_2] [i_4 + 1])))))));
                                arr_13 [i_4 + 1] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(2147483647)))), (max((((unsigned int) 7084170554794945324ULL)), (((/* implicit */unsigned int) (!(var_14))))))));
                                var_20 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_4 - 1] [i_4])) ? (max((((/* implicit */int) (unsigned short)17809)), (2147483639))) : (min((2147483647), ((-2147483647 - 1))))))));
                                arr_14 [i_4] [i_4] = ((int) max((max((((/* implicit */unsigned int) -2147483621)), (var_9))), (min((4037111045U), (((/* implicit */unsigned int) var_14))))));
                            }
                            for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                            {
                                arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (~(var_3))))) ? (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (unsigned char)140))))) : (((var_0) ? (27896829U) : (4211614362U)))));
                                var_21 -= ((/* implicit */unsigned char) 4267070455U);
                                var_22 ^= (-(2147483647));
                                arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -710305989)) ? (((/* implicit */int) (_Bool)1)) : (-1546357027)))) : (max((var_2), (((/* implicit */unsigned int) 2147483641)))));
                            }
                            for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (9U)))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)90)), (27896831U)))) ? (((/* implicit */int) ((var_10) > (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 13718578057237816101ULL)) ? (1173845353) : (-1173845343)))))));
                                arr_23 [i_0] = ((/* implicit */short) var_8);
                            }
                            var_24 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1173845348)) ? (-1940300051) : (-1546357045)))) ? (((unsigned int) arr_19 [i_1] [i_3] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((arr_22 [i_0] [(_Bool)1] [i_1] [i_0] [(short)3] [i_0] [3U]), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1259717208)) ? (var_10) : (var_12)))), (var_2)))));
            }
        } 
    } 
}
