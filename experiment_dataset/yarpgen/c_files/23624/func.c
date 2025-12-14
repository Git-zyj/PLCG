/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23624
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) | (arr_4 [i_1 - 1] [i_1 - 4])))) ? (((((/* implicit */_Bool) var_13)) ? (arr_4 [i_1 - 2] [i_1 - 2]) : (arr_4 [i_1 + 1] [i_1 - 4]))) : (max((((/* implicit */long long int) var_13)), (arr_4 [i_1 - 4] [i_1 - 3])))));
                arr_5 [i_0] = ((/* implicit */unsigned short) var_10);
                var_16 = ((/* implicit */unsigned char) max(((~(arr_1 [i_1 - 4] [i_1 - 3]))), (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)34916))))));
                var_17 = ((/* implicit */unsigned short) var_13);
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) (+(2147483647)));
                    var_20 += ((/* implicit */unsigned short) arr_8 [i_2] [i_3]);
                    var_21 = (((+(arr_11 [i_2] [i_3] [i_2] [i_2]))) | (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3] [i_4]))) / (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)34916)) : (2147483628))) : (var_13))));
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((15135076942637993568ULL) >> (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 3; i_5 < 21; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (short i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                {
                    arr_21 [i_5 - 2] [i_5] [i_7] = ((/* implicit */unsigned int) min((((long long int) arr_6 [i_5])), (((/* implicit */long long int) var_13))));
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) min((arr_20 [i_5] [i_5]), (((/* implicit */int) (unsigned short)31061))))) || (((/* implicit */_Bool) 3311667131071558047ULL)))))));
                    var_23 = (i_5 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((894126713U) >> (((((((/* implicit */_Bool) -750675828212439841LL)) ? (arr_9 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) arr_20 [(_Bool)1] [i_5])))) - (6255495589765405874LL)))))) ? (((((/* implicit */_Bool) (~(4621365725221810063LL)))) ? (((/* implicit */int) arr_18 [5] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_7])) || (((/* implicit */_Bool) 4294967295U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7 - 1] [i_5])))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((894126713U) >> (((((((((/* implicit */_Bool) -750675828212439841LL)) ? (arr_9 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) arr_20 [(_Bool)1] [i_5])))) - (6255495589765405874LL))) + (1190745120888568406LL)))))) ? (((((/* implicit */_Bool) (~(4621365725221810063LL)))) ? (((/* implicit */int) arr_18 [5] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_7])) || (((/* implicit */_Bool) 4294967295U))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7 - 1] [i_5]))))))));
                }
            } 
        } 
    } 
}
