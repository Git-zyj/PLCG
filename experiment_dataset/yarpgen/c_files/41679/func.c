/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41679
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
    var_19 = ((((/* implicit */_Bool) ((var_16) << (((var_3) - (1120689430U)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (var_4)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) (~(arr_2 [i_4])))) >= ((~(arr_13 [i_0]))))));
                                var_21 *= ((/* implicit */unsigned long long int) (-(arr_10 [i_4] [(unsigned short)8] [10LL] [i_4] [i_4] [i_3 + 1])));
                                var_22 = ((/* implicit */unsigned int) (((-(var_3))) != (((/* implicit */unsigned int) (+(arr_2 [i_1]))))));
                                arr_14 [i_0] [i_1] [0LL] [i_1] [i_4 + 3] = ((/* implicit */unsigned short) arr_7 [i_3 + 2] [i_3] [i_3] [i_3 + 2]);
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */unsigned int) max((arr_5 [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_10 [i_0] [(unsigned char)7] [(signed char)10] [(signed char)10] [i_2] [i_2]) != (arr_10 [(signed char)2] [14ULL] [(signed char)2] [i_2] [i_2] [1ULL])))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-24484)) || (((/* implicit */_Bool) (unsigned char)92)))) ? (arr_8 [i_0] [i_0] [12ULL] [12ULL]) : (((/* implicit */int) var_12))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24464))) : (449014196851772810ULL)))) ? (max((((/* implicit */long long int) 4294967287U)), (-9223372036854775804LL))) : (9223372036854775797LL)))));
                }
            } 
        } 
    } 
}
