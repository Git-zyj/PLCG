/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201816
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
    var_18 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_19 &= ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_0 [i_0 + 3]), (arr_0 [i_0 - 1])))), (((((/* implicit */int) var_1)) % (((/* implicit */int) (signed char)112))))));
        var_20 &= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 1]))))) | (((((/* implicit */_Bool) 1909140600)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3])))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_3))) && (((/* implicit */_Bool) min((((short) var_9)), (min((((/* implicit */short) arr_0 [i_0])), (var_8))))))));
        arr_2 [i_0] = max((((/* implicit */int) ((short) (short)8128))), (var_2));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((short) (unsigned char)11));
        arr_7 [(unsigned char)8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (min(((~(((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) (unsigned char)59)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(short)10])) >> (((((/* implicit */int) var_13)) + (41)))))) || (((/* implicit */_Bool) ((short) arr_6 [(short)2] [i_1]))))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (unsigned char i_3 = 3; i_3 < 24; i_3 += 1) 
        {
            {
                arr_13 [i_2] &= ((/* implicit */signed char) max((((/* implicit */int) arr_8 [(unsigned char)20])), (((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_3 + 1])) ? ((-(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) var_17))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        {
                            arr_20 [i_2] [i_3] [i_5] &= ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])))))) == (((((/* implicit */int) ((short) (short)-8578))) % (((/* implicit */int) arr_16 [i_4] [i_3 - 1] [i_2]))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_5])) == (((/* implicit */int) var_11))))) : (((int) arr_9 [i_5]))))))))));
                            arr_21 [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) min((-2147483638), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
