/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217974
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
    var_14 = ((/* implicit */long long int) (+(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (unsigned char)128)) : (2026250290)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [i_0] [i_3])) ? (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) (+(var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_0 - 1] [i_3] [i_4] [i_1 + 2] [i_1 + 2]) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                                arr_18 [i_3] = ((/* implicit */int) var_5);
                                arr_19 [i_3] = ((/* implicit */signed char) 2959740677U);
                                var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_3]))) : (1335226619U)))) ? (((((/* implicit */int) (short)6)) & (var_11))) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 4] [i_2 - 1] [i_2 - 1])) : ((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 4] [i_5]))))))), (((((/* implicit */_Bool) 2321162813022385713ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) : (((((/* implicit */unsigned long long int) arr_13 [i_0] [i_2] [i_2] [i_5] [i_5])) | (arr_3 [i_0]))))))))));
                        arr_23 [i_0 - 1] [i_2] [i_0 - 1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_5 + 2])) << (((arr_1 [i_1] [i_2]) - (1989572823U)))))) == (min((10010459709467928221ULL), (((/* implicit */unsigned long long int) (signed char)-122)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (signed char)73)))))))));
                            var_19 = ((/* implicit */unsigned short) max((arr_3 [i_6 - 3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-215359254) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_24 [i_6] [i_1] [i_6] [i_5] [i_6] [i_1 - 1] [i_1])) : ((+(((/* implicit */int) arr_9 [i_5])))))))));
                            var_20 = ((/* implicit */_Bool) var_4);
                        }
                    }
                    var_21 = ((/* implicit */int) ((min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0] [i_2])) > (((/* implicit */int) arr_2 [i_2]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1]), (arr_11 [i_0] [i_0 - 1] [i_0] [i_0])))))));
                    arr_28 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((var_0) >> (((((/* implicit */int) (short)9775)) - (9737))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2 + 1])) : (((/* implicit */int) var_4))))) : (12692315603808227651ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_1 + 2] [i_0] [i_2]) != (((/* implicit */int) arr_14 [i_1 + 1] [i_1] [i_2] [i_1] [i_0 - 3]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned char) (signed char)-58);
                        var_23 = ((/* implicit */unsigned char) arr_15 [i_0 - 2] [i_1] [i_7]);
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) var_10);
                        arr_36 [i_0] [i_0 - 1] [i_0] = arr_22 [i_0 + 1] [i_1 + 1] [i_1 + 2] [i_2 - 4] [i_2 - 1];
                        arr_37 [i_0 - 2] [i_1] [i_2 + 1] [i_8] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_34 [i_1 + 1] [i_8] [i_8] [i_8])) != (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) var_7)) ? ((~(-4101282851803601233LL))) : (arr_12 [i_0] [i_0] [i_2 - 2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))));
                        var_25 += ((/* implicit */unsigned long long int) var_4);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                {
                    arr_46 [i_9] [i_9] [i_11] [i_11] |= arr_12 [i_9] [i_9] [i_10] [i_11];
                    var_26 = ((/* implicit */long long int) var_4);
                }
            } 
        } 
    } 
}
