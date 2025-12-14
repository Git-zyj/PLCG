/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30440
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    var_18 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-1)), (-2147483629))))));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)27837)) && (((/* implicit */_Bool) (short)(-32767 - 1))))) && (((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) (unsigned short)18275))))));
                }
                for (int i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)41901)) << (((/* implicit */int) (short)1))));
                    var_20 = ((/* implicit */unsigned int) 9017555460274098515LL);
                }
                arr_13 [i_0] = ((/* implicit */short) ((((long long int) arr_2 [i_0 - 1])) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 3])))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0 + 2]))))) > (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1 + 2] [i_4]))) + (-8837490171457061327LL))))))));
                            var_22 -= ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)41961)), (((((/* implicit */_Bool) var_15)) ? ((+(((/* implicit */int) arr_16 [(unsigned short)2])))) : (((((/* implicit */int) var_16)) % (((/* implicit */int) var_16))))))));
                            var_23 = ((/* implicit */int) min((((long long int) arr_18 [i_0 + 1] [(unsigned short)4] [i_1] [i_4] [i_4] [i_5])), (((/* implicit */long long int) ((((/* implicit */unsigned int) 437466151)) % (arr_8 [i_1 - 1] [i_1] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)30397)) : (((/* implicit */int) var_4))))), (var_14))));
    var_25 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (((unsigned long long int) (short)0)))) << (((/* implicit */int) var_16)));
}
