/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216302
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
    var_13 = ((/* implicit */long long int) min((var_13), (70368744176640LL)));
    var_14 = (unsigned short)124;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) var_8))));
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((1659598681599720753LL) / (((/* implicit */long long int) (+(((/* implicit */int) (short)9457))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3] [(short)0] [i_1] [(short)0] = ((/* implicit */unsigned short) -6118259939341094189LL);
                            arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_3 + 2] = ((/* implicit */unsigned long long int) (unsigned short)11869);
                            arr_14 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_10 [i_0] [i_2 - 1] [i_3 - 1] [i_3]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_17 = (~(((((/* implicit */_Bool) (unsigned short)93)) ? (4768089598210024843ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                            arr_19 [(unsigned short)5] [i_1] [(short)10] [i_5] [i_1] &= ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
                            arr_20 [i_0] [i_1 - 2] [i_5] = ((/* implicit */unsigned short) -1659598681599720734LL);
                            arr_21 [i_0] [i_1 + 1] [i_4] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0 + 4] [i_0 - 2] [(unsigned short)12] [i_0 - 2]))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (short)-9457))))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1]))));
                            arr_22 [i_5] [(unsigned short)14] [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)52392)) || (((/* implicit */_Bool) arr_9 [i_1 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
