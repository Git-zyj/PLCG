/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25130
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-5)) % (((/* implicit */int) (signed char)4))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)4)) < (((/* implicit */int) (signed char)4))))) : (((/* implicit */int) (signed char)-4)))))));
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-13)))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-5))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_3 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))) || (((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) max((((/* implicit */short) (signed char)3)), (arr_4 [i_1])))) : ((+(((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        var_16 = ((/* implicit */unsigned char) min((arr_3 [i_1]), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_5 [i_1] [i_1])))), (((/* implicit */int) (signed char)3)))))));
    }
    for (short i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        var_17 = (~(((arr_2 [i_2 + 1] [i_2 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)-3))))))));
        arr_11 [i_2] [i_2] = (signed char)4;
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    arr_21 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-4)))) < (((/* implicit */int) arr_15 [i_3] [i_4 - 1])))))) % (min((max((((/* implicit */unsigned long long int) (signed char)-25)), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-4)) < (((/* implicit */int) arr_5 [i_4] [i_5])))))))));
                    arr_22 [i_5] = ((/* implicit */long long int) var_6);
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (arr_17 [i_3] [i_3] [i_3])))) : (max((((/* implicit */unsigned long long int) arr_17 [22U] [i_3] [i_3])), (arr_16 [i_3])))));
    }
    var_19 = ((/* implicit */int) min(((~(var_0))), (((/* implicit */long long int) var_10))));
    var_20 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)3)))));
}
