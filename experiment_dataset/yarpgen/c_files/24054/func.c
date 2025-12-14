/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24054
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
    var_17 = ((/* implicit */short) var_15);
    var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_4)))), (max((((/* implicit */int) var_3)), (((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) var_7);
                                var_20 += ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)-92), (((/* implicit */signed char) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_4)))))))), (max(((+(((/* implicit */int) (signed char)72)))), (((/* implicit */int) var_0))))));
                                var_21 = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)-28))))) : (((/* implicit */int) ((((/* implicit */int) (short)5210)) != (((/* implicit */int) (signed char)(-127 - 1))))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_3] [i_3]), (((/* implicit */short) (signed char)-92))))) ? ((~(((((/* implicit */int) var_12)) & (((/* implicit */int) (signed char)-65)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_3] [i_3])), (var_8))))));
                                var_23 = min((((/* implicit */short) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_7))))), ((short)(-32767 - 1)));
                            }
                        } 
                    } 
                } 
                var_24 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) min(((signed char)(-127 - 1)), ((signed char)87)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-73))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1 - 2])) || (((/* implicit */_Bool) (signed char)-19))));
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)31)))))), (((/* implicit */int) (short)-17910)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_17 [i_6] = ((/* implicit */short) min((max((((/* implicit */unsigned short) var_15)), (min((var_5), (((/* implicit */unsigned short) var_0)))))), (((/* implicit */unsigned short) ((signed char) arr_15 [i_6])))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)38))));
                                var_28 *= ((/* implicit */signed char) min((((/* implicit */unsigned short) var_12)), (arr_21 [i_5] [i_9] [i_7] [i_8] [i_9])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (signed char)(-127 - 1)))));
}
