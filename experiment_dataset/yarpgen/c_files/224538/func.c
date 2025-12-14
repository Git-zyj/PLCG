/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224538
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
    var_11 = ((/* implicit */unsigned int) 144115188075331584ULL);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_3) != (((/* implicit */unsigned long long int) max((-778681590), (778681590))))))) - (max((((((/* implicit */_Bool) -778681585)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (signed char)127)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((max((((/* implicit */int) arr_1 [i_0])), (778681589))) * (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_14 = ((((/* implicit */_Bool) ((arr_12 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [4]) - (arr_12 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 - 1] [(_Bool)1])))) ? (((((/* implicit */_Bool) ((signed char) arr_4 [i_1]))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [16ULL] [i_3] [i_3])) ? (((/* implicit */unsigned int) 100663296)) : (arr_12 [i_0] [(_Bool)1] [16U] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0]), (arr_9 [i_0] [(unsigned short)10] [i_0] [(short)13] [i_0]))))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */int) arr_0 [2ULL])) : (((/* implicit */int) (_Bool)1)))), (-1098133211)))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((18302628885634220031ULL), (((/* implicit */unsigned long long int) arr_1 [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -778681590)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22598)))))))) ? (((/* implicit */int) max((min((((/* implicit */signed char) arr_7 [i_0] [i_1] [19U] [i_0])), ((signed char)-121))), (((/* implicit */signed char) ((((/* implicit */_Bool) -15)) || (arr_5 [i_0] [i_1] [i_2] [i_3]))))))) : (((/* implicit */int) ((arr_0 [i_2 - 1]) || (arr_0 [i_2 + 2]))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((unsigned short) var_10);
}
