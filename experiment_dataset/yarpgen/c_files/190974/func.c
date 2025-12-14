/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190974
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
    var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) max((((max((var_16), (((/* implicit */int) var_12)))) * (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (_Bool)1))))))), ((+(((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))))));
                var_22 = (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_1])) * (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) -465087195919577607LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_1] [i_3] [i_3 + 2] [i_3] [i_3 + 1] = (+(((/* implicit */int) (signed char)0)));
                        var_23 += ((/* implicit */short) ((signed char) var_6));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        for (short i_5 = 4; i_5 < 10; i_5 += 1) 
                        {
                            {
                                arr_17 [i_5] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((_Bool) (-(((((/* implicit */_Bool) (short)20078)) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (signed char)89)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_23 [i_0] [i_7] [i_0] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)0)), (((((/* implicit */_Bool) (signed char)-1)) ? (var_6) : (281474976710144LL)))));
                            var_24 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)-1))))));
                            var_25 = ((/* implicit */unsigned int) -938215222576195152LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 7; i_9 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                            {
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_3 [i_1] [i_9 + 3] [i_10])) : (0)))) || (((/* implicit */_Bool) (unsigned short)6135)))))));
                                arr_31 [i_0] [i_1] [i_8] [i_9 + 4] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) (signed char)73))))) : (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) -1395845747))), ((signed char)-73))))));
                                var_27 = ((/* implicit */short) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((short)127), (((/* implicit */short) (signed char)72)))))));
                                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0] [i_0 + 1])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (var_13)))));
                                var_29 = ((/* implicit */unsigned char) (signed char)-42);
                            }
                            var_30 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_15 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 - 1])))), ((+(((/* implicit */int) arr_15 [i_8] [i_8 - 2] [i_8] [i_8] [i_8 + 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = max((((/* implicit */long long int) max(((-(((/* implicit */int) (short)-13771)))), (((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */int) var_11))))))), (938215222576195151LL));
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned char i_12 = 1; i_12 < 11; i_12 += 1) 
        {
            {
                var_32 |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)32)) + (((/* implicit */int) (short)-31513)))));
                var_33 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -1701378402)) ? (((/* implicit */int) (short)-11846)) : (((/* implicit */int) (short)32760)))))) ? ((+(((/* implicit */int) arr_34 [i_12] [i_12 - 1] [i_12 - 1])))) : (((/* implicit */int) var_3))));
                arr_36 [i_12 - 1] = ((/* implicit */unsigned int) ((int) (short)-13771));
            }
        } 
    } 
}
