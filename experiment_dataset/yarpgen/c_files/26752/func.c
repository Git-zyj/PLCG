/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26752
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
    var_13 = (((+(((/* implicit */int) var_8)))) * ((((+(((/* implicit */int) var_12)))) * (((/* implicit */int) (signed char)-110)))));
    var_14 = ((/* implicit */unsigned long long int) var_8);
    var_15 = max(((-(min((((/* implicit */int) var_4)), (2147483647))))), (((/* implicit */int) var_0)));
    var_16 &= ((/* implicit */_Bool) (+(1167776913U)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 &= ((/* implicit */_Bool) (~(min((((/* implicit */int) var_4)), (-1024782786)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (signed char)-79)), (0U)));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (signed char)72))) == (((/* implicit */int) (unsigned short)43585))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_1]))))));
                                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9916537931409199852ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5 - 3] [i_6])))))) ? (arr_19 [5U] [i_1] [i_6] [i_1] [5U] [i_6] [10]) : (((/* implicit */int) min((arr_12 [i_0] [(signed char)11] [i_5 + 1] [i_5] [i_2]), (((/* implicit */short) var_12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((((/* implicit */int) var_5)) / (((((/* implicit */_Bool) -835377840)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0])))))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
    {
        arr_22 [i_7] [i_7] = ((/* implicit */short) max(((_Bool)1), (((_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)56))))));
        var_24 += (~(1597527751U));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)27040))));
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
    }
}
