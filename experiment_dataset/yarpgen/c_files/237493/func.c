/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237493
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)7575))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_5 [i_1] [i_1 - 1] [i_0]))))), (((/* implicit */unsigned long long int) (unsigned short)57960))));
                var_20 &= ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 3])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [18U] |= ((/* implicit */short) (unsigned char)177);
                            var_21 ^= ((/* implicit */unsigned long long int) var_18);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)-4615)) : (((/* implicit */int) (unsigned short)65535))));
                                arr_22 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0] [i_0])))));
                                arr_23 [i_1] [i_1] = ((/* implicit */long long int) ((_Bool) (-(((((/* implicit */_Bool) arr_7 [i_6] [i_1] [i_5])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_20 [i_0] [0U] [i_0] [i_0] [(short)9]))))));
                                var_23 += ((/* implicit */long long int) (-((+(((/* implicit */int) ((_Bool) arr_2 [i_6])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (signed char i_8 = 4; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_2 [16ULL])), (((arr_27 [7U] [20U] [6ULL]) & (min((((/* implicit */unsigned int) arr_25 [(unsigned char)3] [i_1] [i_1] [18LL])), (var_13)))))));
                            var_25 |= ((/* implicit */signed char) ((arr_5 [i_1 - 3] [i_1 + 2] [i_1 - 3]) / (arr_5 [i_1] [i_7] [i_8])));
                            var_26 = ((/* implicit */short) min(((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8684))))))), ((!((!(((/* implicit */_Bool) (unsigned char)105))))))));
                            var_27 = ((1798662069U) % (4130615595U));
                            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_8 - 4]))) / (var_0)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) min(((unsigned short)2750), (((/* implicit */unsigned short) (unsigned char)240))));
}
