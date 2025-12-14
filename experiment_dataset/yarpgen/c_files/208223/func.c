/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208223
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)27093);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (var_1)))) ? (max(((((_Bool)1) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4250398776U) : (511U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (_Bool)1)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) 17529460237877296370ULL)) ? (2829796329U) : (((/* implicit */unsigned int) -1670583475)))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_6 [i_0] = ((/* implicit */_Bool) max((max((var_2), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)15985)) : (((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_10 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (max((arr_2 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17529460237877296370ULL)) ? (1506994632U) : (0U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1]))))))));
        arr_11 [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_3), ((unsigned short)65519)))) ? (var_7) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) max((arr_8 [i_1]), (arr_8 [i_1]))))));
        arr_12 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) min((arr_1 [i_1]), ((short)32767))))))), (arr_0 [i_1])));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_25 [i_2] [i_3] [0U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 44568520U)) ? (((/* implicit */unsigned int) 0)) : (53706016U)))) ? (((/* implicit */int) arr_8 [i_2 + 1])) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_22 [i_2] [i_2] [(short)10])) : (((/* implicit */int) (short)10469))))));
                        arr_26 [i_3] [i_3] [i_2] [i_3] [i_3] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_23 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_8 [i_2 - 1]))));
                        arr_27 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 1]))) : (((((/* implicit */_Bool) var_3)) ? (arr_18 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141)))))));
                        arr_28 [(unsigned short)2] [i_3] [(unsigned short)2] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_29 [(_Bool)1] = ((443973382U) == (arr_13 [i_2] [(signed char)6]));
    }
    var_12 = ((/* implicit */short) var_7);
}
