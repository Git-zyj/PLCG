/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4852
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
    var_15 = min((-76165314), (((/* implicit */int) (unsigned short)43169)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) var_9);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
        var_16 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [10] &= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)14072)) || (((/* implicit */_Bool) (short)10696))))), ((unsigned short)51463)));
        arr_9 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_6 [i_1] [i_1])))));
        arr_10 [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) min(((short)-26), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51437)))))) : ((-(arr_6 [i_1] [i_1]))))));
        arr_11 [i_1] = arr_0 [i_1];
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) arr_12 [i_1] [i_2] [i_4])), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_12 [i_1] [i_2] [i_3]))))));
                        arr_21 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)21714)))) ? (arr_19 [i_1] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17031)))));
                    }
                } 
            } 
        } 
    }
}
