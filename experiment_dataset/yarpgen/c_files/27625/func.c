/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27625
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((_Bool) (signed char)-87)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : (240708843))) : (1065353216)));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) arr_0 [(unsigned char)9]);
        var_15 = max((((/* implicit */unsigned int) (signed char)-100)), (min((0U), (((/* implicit */unsigned int) (signed char)88)))));
        var_16 = ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) (unsigned char)168)));
    }
    for (unsigned int i_1 = 4; i_1 < 12; i_1 += 4) 
    {
        arr_5 [i_1 + 2] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_4))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [4U] [i_2] = ((/* implicit */unsigned int) arr_4 [i_2] [i_1]);
            var_17 = ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (short i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (unsigned short)49463);
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            var_20 += (signed char)-117;
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_7)))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_8)) ? (arr_15 [i_1]) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_1 + 1] [(signed char)0] [i_6] [i_8] [(signed char)6]))))) ? ((-(((/* implicit */int) (signed char)5)))) : (((((/* implicit */_Bool) arr_24 [(unsigned short)6] [i_6])) ? (arr_7 [i_1] [(unsigned short)6]) : (((/* implicit */int) (signed char)101))))))));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 4; i_9 < 12; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_9 + 1] [i_8 + 1] [i_8 + 1] [i_7 + 4] [i_1 - 1])) ? (min((arr_0 [i_1 - 2]), (arr_0 [i_1 - 2]))) : (((/* implicit */unsigned long long int) (-(arr_16 [i_9 + 2] [i_9 - 4] [i_9 - 1] [i_9 + 1] [(signed char)3] [i_9 - 3])))))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((var_6), (max(((+(((/* implicit */int) (signed char)100)))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-86)))))))))));
                            var_25 = ((/* implicit */signed char) (_Bool)1);
                        }
                        arr_30 [(signed char)5] [(signed char)8] [(short)2] [(unsigned short)8] [4U] [i_6] = ((/* implicit */unsigned long long int) (+(373030427)));
                    }
                } 
            } 
            var_26 |= ((/* implicit */_Bool) arr_18 [(unsigned char)3] [i_6] [(_Bool)1] [(_Bool)1] [(unsigned short)7]);
            arr_31 [13] [i_6] [i_1 - 4] = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        }
        arr_32 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) arr_25 [i_1] [i_1])))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((signed char) 4294967295U)))));
    }
}
