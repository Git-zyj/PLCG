/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193910
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            var_12 += ((/* implicit */short) max((((/* implicit */signed char) arr_5 [i_2 - 2] [i_2 - 1] [i_1])), (min((((/* implicit */signed char) arr_5 [i_2 + 3] [i_2 - 1] [i_1])), ((signed char)62)))));
                            var_13 ^= ((/* implicit */int) (signed char)43);
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((long long int) (unsigned char)109))))) : (-7829724767471967129LL)));
                            arr_10 [i_0] [i_0] [i_1] [i_1] [(signed char)12] [i_3] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5562030476054878958LL)) ? (540054995) : (((/* implicit */int) (signed char)-30))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49855))) : (((((/* implicit */_Bool) -4436516940179597623LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-4922433708978546009LL))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (signed char)-125))));
                            var_17 ^= ((/* implicit */unsigned char) ((long long int) max((arr_5 [0] [(signed char)12] [i_4 + 1]), (arr_5 [i_0] [i_0] [i_4 + 1]))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */signed char) max((((((/* implicit */int) (signed char)118)) / (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_7 [(short)8] [(short)6] [i_0] [i_0] [i_1])) ? (arr_7 [i_1] [i_1] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */_Bool) min((((((/* implicit */int) var_7)) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)118)), ((unsigned short)8164)))))), (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)30)), (740726772)))) ? (((((-1382522817) + (2147483647))) >> (((/* implicit */int) var_7)))) : (((var_6) & (((/* implicit */int) var_5))))))));
    var_20 += ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775781LL))) + (30LL)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (4160144854U))))));
}
