/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226336
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
    var_11 ^= ((/* implicit */unsigned short) min((min((((9171460573807865929LL) / (((/* implicit */long long int) 1102420105U)))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)102))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) (short)-26077)) | (((/* implicit */int) (unsigned short)64883)))))));
                                arr_12 [i_4] [i_2] [i_2 + 2] [i_2] [i_0] = ((/* implicit */unsigned int) ((_Bool) (+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (1498485436U))))));
                                arr_13 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                                arr_14 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) (_Bool)1);
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 4] [i_0] [i_1 - 1] [i_1 - 1] [i_0])) && (((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) (signed char)25))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_2]), (arr_6 [i_2])))) ? (arr_6 [i_2]) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) (((!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5)))))) && (((/* implicit */_Bool) (unsigned short)65535))));
}
