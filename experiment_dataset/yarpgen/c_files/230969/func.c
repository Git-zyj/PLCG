/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230969
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [0LL] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (3939757487U)))), (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_4 [(signed char)6] = ((/* implicit */unsigned int) 5491991417448545165LL);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((max((arr_6 [i_1] [i_1]), (arr_6 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52011)) & (((/* implicit */int) (_Bool)1)))))));
            arr_11 [i_0] [i_1] = ((/* implicit */int) var_16);
        }
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                arr_16 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_3])) ? (((/* implicit */long long int) arr_8 [i_0])) : (var_10)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_13 [(unsigned short)9] [i_2] [i_2])))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) (_Bool)1))));
                arr_17 [6U] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_2]);
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_6 [i_2] [i_0]);
                arr_19 [i_0] [(signed char)2] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [(short)7]);
                arr_20 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (signed char)124);
            }
            arr_21 [(_Bool)1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [6U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-120)))))));
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
    {
        arr_24 [i_4] [i_4] = ((/* implicit */unsigned int) var_7);
        arr_25 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */_Bool) var_8)) ? (268427264U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))) * (var_18))));
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        arr_28 [i_5] = ((/* implicit */signed char) ((arr_26 [i_5] [i_5]) - (arr_26 [i_5] [i_5])));
        arr_29 [i_5] = ((/* implicit */short) ((signed char) min((((/* implicit */long long int) var_18)), (arr_26 [i_5] [i_5]))));
        arr_30 [(unsigned short)5] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((arr_27 [i_5]) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (var_15) : (((/* implicit */int) var_17)))))))))));
    }
}
