/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235302
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
    var_11 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) -4832274634570779382LL)), (max((var_9), (((/* implicit */unsigned long long int) var_7)))))), (var_8)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_2] [(unsigned char)16] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) arr_0 [i_0]))))) + ((+(((/* implicit */int) var_5)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (max((var_4), (((/* implicit */long long int) var_10)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max(((unsigned short)52420), (((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_2] [i_2] [i_1] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2] [i_2] [i_1])) <= (((/* implicit */int) var_10))))))), (((int) (!(((/* implicit */_Bool) 1520805632U)))))));
                        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) var_8);
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~(-4832274634570779397LL)));
                    }
                    for (long long int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                    {
                        arr_19 [10ULL] [i_1 - 1] [i_2] = var_2;
                        arr_20 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_2);
                        arr_21 [(short)4] = ((/* implicit */signed char) max((((unsigned int) var_7)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))));
                        arr_22 [2U] [2U] = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) var_6))) | (4649039202040358318LL))) - (((/* implicit */long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_11 [12LL] [12LL] [12LL] [i_4] [i_4] [i_2]))))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (166088378))))));
                    }
                }
            } 
        } 
    } 
    var_12 |= ((/* implicit */unsigned short) ((((((var_9) - (((/* implicit */unsigned long long int) -4832274634570779382LL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10))))));
}
