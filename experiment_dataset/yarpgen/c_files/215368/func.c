/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215368
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
    var_10 |= ((/* implicit */unsigned short) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((((var_7) >= (((/* implicit */int) var_1)))) ? ((-(arr_1 [13ULL] [i_1 + 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) min((((/* implicit */short) (signed char)-86)), (arr_0 [i_3])))), (min((((/* implicit */unsigned int) var_9)), (arr_1 [i_1] [17]))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680))) == (8706036469494826836LL))))));
                                var_13 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1])))));
                                var_14 -= ((/* implicit */unsigned char) (~((+(((int) 0U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) var_5))))) | (((((_Bool) var_1)) ? ((~(((/* implicit */int) (signed char)103)))) : (((/* implicit */int) arr_11 [i_0] [(signed char)11] [i_1 - 1] [i_1 + 2] [i_5 + 2] [i_1 + 2] [i_6 - 3]))))));
                                var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3] [i_0] [i_1 - 1])) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) (short)-13137)))) : (arr_10 [i_2] [i_7] [i_2] [i_2])))));
                                var_18 = (+(((/* implicit */int) var_6)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (signed char i_10 = 3; i_10 < 21; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 23; i_11 += 1) 
            {
                {
                    var_19 = (+(((((/* implicit */unsigned long long int) var_7)) + (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))))));
                    var_20 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
}
