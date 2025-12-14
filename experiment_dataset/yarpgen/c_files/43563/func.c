/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43563
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
    var_16 *= ((/* implicit */unsigned short) var_3);
    var_17 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) 4294967288U)), (10258246598974963648ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (((+(7U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))) : (18446744073709551591ULL)))));
                            arr_9 [(_Bool)1] [i_0] [i_2] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((17865662840950102578ULL) + (arr_8 [i_0] [i_1] [10] [i_3] [i_1] [i_1 - 2]))) != (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1 - 2]))))), (((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [(unsigned char)4] [12U] [i_2 - 2])))) : (((unsigned long long int) var_7))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_3 [i_2 - 2] [i_3] [i_2]))) ? (arr_8 [i_0] [i_1] [i_2] [(short)1] [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26027)))));
                        }
                    } 
                } 
                var_21 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), (arr_2 [i_0] [i_1 + 1])))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29432))) - (var_4))))) : (((((/* implicit */_Bool) 25ULL)) ? (arr_4 [i_1 - 1] [i_0] [i_1]) : ((-(var_6))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_5);
    var_23 = var_4;
}
