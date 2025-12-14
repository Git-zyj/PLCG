/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21231
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
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) var_4)) : (max((((((/* implicit */_Bool) var_13)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11))))))));
    var_18 -= ((/* implicit */int) (short)19200);
    var_19 = ((/* implicit */signed char) (!(((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [(unsigned short)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0])))))));
                arr_7 [i_0] [i_1] [i_0] &= ((/* implicit */long long int) ((_Bool) ((unsigned short) arr_2 [i_1])));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        var_20 |= ((/* implicit */_Bool) (short)-552);
                        arr_13 [i_0] [6] [i_0] [i_1] |= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_5 [6LL] [6LL]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), ((short)-19205)))))));
                        arr_14 [i_1] [i_3] &= ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))), (max((((/* implicit */unsigned long long int) 32767)), (11053517774906549269ULL)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 4; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_21 = (-9223372036854775807LL - 1LL);
                                var_22 = ((/* implicit */long long int) (signed char)-90);
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (signed char)-100))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [2U] [0LL] [i_1] &= ((/* implicit */unsigned short) ((((int) (signed char)63)) ^ (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) arr_16 [i_0] [9] [i_0] [(_Bool)1] [(unsigned char)0] [i_2])))))));
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) arr_9 [i_6])) + (((/* implicit */unsigned long long int) 1172465337))));
                    arr_24 [i_0] [(unsigned short)5] [i_6] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */long long int) (~(889886970)))), ((-9223372036854775807LL - 1LL))))));
                    var_24 = ((/* implicit */int) var_8);
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */int) ((unsigned char) 791729456867930800ULL));
                    var_26 = ((/* implicit */long long int) 1202754882U);
                }
            }
        } 
    } 
}
