/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199384
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)26481)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)130)))) << (((4803852426558970899LL) - (4803852426558970891LL)))));
                            var_10 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((var_7) >> (((((((/* implicit */_Bool) (short)-24769)) ? (3118213173759164726ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8064))))) - (3118213173759164722ULL)))))), (((((/* implicit */_Bool) 179824098U)) ? (3118213173759164717ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36)))))));
                            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((long long int) 1143197919)))));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15328530899950386889ULL))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 15328530899950386889ULL)) ? (3118213173759164707ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_5 = 2; i_5 < 15; i_5 += 1) 
                            {
                                var_13 = ((/* implicit */long long int) max((((var_6) - (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((15328530899950386889ULL) != (((/* implicit */unsigned long long int) -1345271918)))))));
                                var_14 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */long long int) -1059821289)) : (((long long int) (signed char)-93))))));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [i_5 + 2] = ((/* implicit */long long int) (((((_Bool)0) ? (((/* implicit */int) (short)-18386)) : (((/* implicit */int) (signed char)92)))) - (((/* implicit */int) max(((signed char)-117), ((signed char)93))))));
                                var_15 += ((/* implicit */signed char) (+(((/* implicit */int) ((-200798505) >= ((-(((/* implicit */int) (short)24)))))))));
                            }
                        }
                    } 
                } 
                arr_23 [i_1] = ((/* implicit */long long int) max((max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))), (2030358685))), ((~(-254485303)))));
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)15920)))) ? (((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9491))) : (3197079690341339561ULL))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (134))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 14938372540049630076ULL)) && (((/* implicit */_Bool) 9)))) ? (((int) (unsigned char)181)) : (((/* implicit */int) (short)-3994))))))))));
                var_17 = ((/* implicit */_Bool) (short)-34);
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) var_4)))))));
}
