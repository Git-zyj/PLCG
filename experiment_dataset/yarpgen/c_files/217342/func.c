/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217342
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min(((-(((/* implicit */int) (signed char)-125)))), (((((/* implicit */int) (signed char)5)) ^ (((/* implicit */int) (signed char)-125)))))) : (min((min((var_7), (((/* implicit */int) (signed char)124)))), (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (signed char)-33))))))))))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) ((var_10) < ((~(908449364649605174LL)))))), (min((((/* implicit */unsigned int) (signed char)125)), ((+(718178336U)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) + (((((/* implicit */int) (signed char)31)) / (1990257359)))));
        arr_3 [i_0] = (unsigned char)136;
    }
    for (int i_1 = 4; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)35)), (1990257359))), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_1]))))))) : ((-(((/* implicit */int) arr_5 [i_1 - 3])))))))));
        var_21 = ((/* implicit */long long int) min((var_21), ((((~(-1549292137918125499LL))) << (((min(((+(2511055265U))), (((/* implicit */unsigned int) (~(-622543995)))))) - (622543992U)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            arr_8 [i_2 - 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_12)), ((-(9125487545202875237ULL)))));
            var_22 = ((/* implicit */_Bool) (-((((+(((/* implicit */int) arr_4 [i_2])))) >> (((((/* implicit */int) (unsigned short)9935)) - (9911)))))));
            arr_9 [i_1] = ((/* implicit */unsigned char) (((+(1257012549U))) >> (((arr_7 [i_1 - 1] [i_2 - 3]) - (3277283567U)))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) arr_7 [i_1] [i_1]);
            var_24 *= ((/* implicit */unsigned long long int) 6811962675335458999LL);
        }
    }
    var_25 = ((/* implicit */int) var_13);
}
