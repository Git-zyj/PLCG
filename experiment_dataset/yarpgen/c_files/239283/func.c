/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239283
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
    var_12 = ((/* implicit */unsigned char) ((var_11) / (((/* implicit */unsigned long long int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) ((unsigned long long int) ((unsigned char) (_Bool)0))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_13 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_7 [i_1] [12U] [i_1])) ? (var_5) : (1576522128030106469ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [(unsigned short)19]))))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(16870221945679445147ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (1576522128030106469ULL)));
                    arr_11 [i_3] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_1] [i_3]);
                    arr_12 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned short) 16870221945679445147ULL));
                }
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_0])) >= (1576522128030106469ULL))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) 1576522128030106480ULL);
                            arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (+(((unsigned int) (_Bool)0))));
                            arr_20 [i_0] [19U] [i_4] [i_0] [i_5] [i_4] = ((/* implicit */int) ((unsigned int) max((13530344791448091669ULL), (((16870221945679445153ULL) << (((arr_10 [(short)1] [i_4] [i_4]) - (681658111U))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned char) var_4)))));
            }
        } 
    } 
}
