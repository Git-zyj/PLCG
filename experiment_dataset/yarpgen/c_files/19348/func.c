/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19348
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
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) ((short) arr_0 [i_0])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4 + 2] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_3])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (unsigned short)31291)) ? (((/* implicit */int) arr_10 [i_3] [i_4 - 2] [i_4] [i_4 + 2] [i_4 - 2] [i_4 + 1])) : (((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_4])))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_4 - 1] [i_3] [i_3])) ? (((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_3] [i_4 - 2])))) : (((/* implicit */int) min((var_11), ((short)-1))))))));
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_10 [i_2] [i_4] [i_4 - 2] [i_4] [i_4 - 1] [i_4]), (var_10)))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)56713)) ? (((/* implicit */int) (short)-8856)) : (((/* implicit */int) (signed char)11)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-13577)) || (((/* implicit */_Bool) (unsigned short)31291)))))))));
                                var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), (arr_3 [i_4] [i_4] [i_4 + 2])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_2] [i_4 - 2])), ((unsigned short)34245)))) : (((((/* implicit */int) min(((unsigned short)46022), ((unsigned short)31291)))) | (((/* implicit */int) min((var_2), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-28847)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1]))))) ? (((/* implicit */int) min((arr_10 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_8))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13019)) ? (((/* implicit */int) (short)26802)) : (((/* implicit */int) (signed char)11))))) ? (((/* implicit */int) min(((short)9776), (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) min((var_8), (arr_2 [i_0] [i_0] [i_0])))))))))));
            }
        } 
    } 
    var_16 += ((/* implicit */short) var_5);
    var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_10))))) ? (((/* implicit */int) min(((unsigned short)21227), ((unsigned short)0)))) : (((/* implicit */int) var_5))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) / (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)8855)) ? (((/* implicit */int) (short)-14600)) : (((/* implicit */int) (signed char)83))))))));
    var_19 += ((/* implicit */signed char) min((((/* implicit */int) var_11)), (max((((((/* implicit */_Bool) (short)26650)) ? (((/* implicit */int) (short)20425)) : (((/* implicit */int) var_10)))), (((/* implicit */int) min(((signed char)-8), (var_6))))))));
}
