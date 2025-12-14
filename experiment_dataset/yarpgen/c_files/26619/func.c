/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26619
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-9537)) : (((/* implicit */int) (signed char)-77)))), (((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)242))))), (max((((/* implicit */long long int) 1030998944U)), (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)127)), ((+(max((((/* implicit */unsigned long long int) (unsigned short)60195)), (16065985691543714809ULL)))))));
    }
    for (signed char i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_7))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (+(var_0)));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = arr_6 [i_2 - 1];
        arr_14 [i_2] = ((/* implicit */int) var_3);
    }
    var_10 = (+(var_3));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
        {
            arr_21 [i_3] [i_3] [i_3] = ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) var_8)));
            arr_22 [i_3] = ((/* implicit */signed char) (~(((9221207356033040679ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3])))))));
        }
        arr_23 [8] [8] = ((/* implicit */int) (-((((_Bool)0) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)25558))))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            arr_27 [(unsigned short)8] [(unsigned short)8] = ((1322685835) <= (((/* implicit */int) (signed char)-8)));
            arr_28 [i_3] = ((/* implicit */_Bool) ((int) ((unsigned int) var_4)));
            arr_29 [i_3] = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_3] [i_5])) > (((/* implicit */int) var_5))))), (var_6)))));
            arr_30 [(short)4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [(signed char)1])) ? (((/* implicit */int) arr_25 [10] [i_5] [i_3])) : (((/* implicit */int) arr_25 [i_3] [i_5] [i_5]))))) ? (min((var_3), (((/* implicit */long long int) arr_25 [i_3] [i_3] [i_3])))) : (((/* implicit */long long int) ((unsigned int) arr_25 [i_3] [(signed char)4] [i_5])))));
        }
        arr_31 [10U] [(unsigned char)10] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) var_8)))) >= (((arr_1 [i_3]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_1 [i_3]))))));
        arr_32 [(unsigned short)8] |= ((/* implicit */signed char) (unsigned short)11);
    }
}
