/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47183
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
    var_13 = (short)1;
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((unsigned int) var_2));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_0)), (var_2))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_2 + 1])))))))))));
                    arr_6 [i_0 + 1] [i_1] [i_2 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */short) min((arr_0 [i_0 - 3] [i_1 + 1]), (arr_0 [i_0 - 3] [i_2 - 1])))), ((short)19)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 3; i_3 < 16; i_3 += 2) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((signed char) (~(max((((/* implicit */long long int) arr_3 [i_3 - 1] [i_3 + 2])), (arr_9 [i_3 + 2] [i_3 - 2]))))))));
        arr_11 [i_3 - 1] = ((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 2] [i_3 + 2]);
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_13 [i_4]) + ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_4))))) ? (((/* implicit */int) ((short) arr_3 [i_4] [i_4]))) : ((-(((/* implicit */int) arr_0 [i_4] [i_4]))))));
        arr_14 [i_4] = ((/* implicit */signed char) 9223372036854775807LL);
        /* LoopNest 3 */
        for (short i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        arr_22 [i_5] [i_4] [i_4] [i_4] = ((/* implicit */int) var_4);
                        arr_23 [i_6] [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [i_4])), (arr_13 [i_4])))))))));
        var_19 = max((var_6), (max((((/* implicit */unsigned long long int) arr_15 [i_4] [i_4])), (var_6))));
    }
    for (int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), ((+(((/* implicit */int) var_8))))));
        arr_26 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)5)) && (((min((((/* implicit */unsigned long long int) (short)-21898)), (arr_17 [i_8] [i_8] [i_8] [i_8]))) <= (max((((/* implicit */unsigned long long int) arr_16 [i_8] [i_8])), (arr_10 [i_8])))))));
    }
}
