/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24506
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
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((arr_6 [i_1] [i_1]) << (((min((min((var_5), (var_6))), (((((/* implicit */_Bool) 8388607)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_10))))) - (11105198265106092568ULL)))));
                arr_7 [i_1] [3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_4))) ? ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42234))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-8388623)))) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) var_7))))));
                var_14 = ((/* implicit */_Bool) ((signed char) var_10));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_20 [i_2] [i_4] [i_5] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) max((var_1), (((/* implicit */unsigned int) arr_18 [i_2] [i_3] [i_2] [i_4] [i_5] [i_5]))))));
                                var_15 = ((/* implicit */unsigned char) 8388607);
                            }
                        } 
                    } 
                    var_16 -= ((/* implicit */unsigned char) (_Bool)1);
                    var_17 &= ((/* implicit */unsigned short) min((1610612736), (((/* implicit */int) (signed char)1))));
                    arr_21 [i_2] [i_2] [i_2] [(unsigned short)4] = ((/* implicit */unsigned long long int) (~(max((((long long int) (unsigned short)21792)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (arr_11 [(_Bool)1] [6] [(unsigned short)1]))))))));
                }
            } 
        } 
    } 
}
