/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227079
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
    var_11 -= ((/* implicit */signed char) var_5);
    var_12 = ((/* implicit */unsigned char) var_9);
    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */int) min((var_10), (var_10)))) < (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-1)));
                            arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) max((max((((/* implicit */signed char) var_5)), (arr_1 [i_1 - 1]))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_5))) || (((((/* implicit */int) var_10)) != (((/* implicit */int) (signed char)-14)))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_1] = (((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (unsigned char)79)))) / (((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) (signed char)2)))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_23 [i_5] [i_1 - 1] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) arr_21 [i_4 + 2])))));
                                arr_24 [i_6] [(_Bool)0] [i_0] [(_Bool)0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_18 [i_4 - 1] [i_1 - 1] [i_0] [i_0]))) == (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_7)))))));
                                arr_25 [i_5] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_6])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) (_Bool)1)) >> (((6182213475495297608LL) - (6182213475495297586LL))))) : (((/* implicit */int) arr_19 [i_4] [i_5 + 1]))));
                                var_14 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] [i_5] [i_6]))))) ? (((/* implicit */int) arr_20 [i_6] [i_5] [i_4 + 1] [i_1 + 1] [i_1 + 1] [i_5] [i_0])) : (((((/* implicit */_Bool) arr_20 [(_Bool)1] [(_Bool)1] [i_4 + 2] [i_5 + 1] [i_6] [i_5] [i_4 + 2])) ? (-40328307) : (((/* implicit */int) arr_20 [i_6] [i_5] [i_5] [i_4] [i_4] [i_5] [i_0])))));
                                arr_26 [i_0] [i_0] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) arr_5 [i_5] [i_5] [i_5] [i_5]);
                            }
                        } 
                    } 
                } 
                arr_27 [i_0] [i_1 - 1] [i_1 + 1] = ((((/* implicit */int) max((arr_7 [i_1 + 1] [i_1] [i_1] [i_1]), (arr_7 [i_1 - 1] [i_1] [i_1] [i_1])))) - (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_0] [i_0] [i_0])))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-19)) >= (max((((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_1])) + (((/* implicit */int) var_10)))), (((/* implicit */int) ((signed char) arr_19 [i_0] [i_0])))))));
            }
        } 
    } 
}
