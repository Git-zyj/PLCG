/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233226
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) << (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_3)) >> (0U))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) + (var_0)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-39)) ? ((+(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (signed char)40))))));
        var_13 = ((/* implicit */short) max((arr_1 [i_0] [i_0]), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) - (1125882726973440LL)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((unsigned int) var_0)))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-53)), (((((/* implicit */_Bool) var_3)) ? (arr_1 [(unsigned short)4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned short) (~(var_4)));
            var_16 = ((/* implicit */signed char) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_3 [i_1 - 2] [i_1 - 2]) : (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [18LL]))))))));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)45)) && (((/* implicit */_Bool) var_10))))) > (((/* implicit */int) (unsigned short)19)))))));
            arr_9 [20LL] [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1 - 3] [i_1]);
        }
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    {
                        arr_18 [i_6] [i_5] [1LL] [i_4] [i_6] = ((/* implicit */unsigned short) ((arr_3 [i_1 - 4] [i_5 + 3]) | (((/* implicit */int) var_1))));
                        var_19 = ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-21604))) - (7U))));
                    }
                } 
            } 
            arr_19 [i_1] [i_1] = ((/* implicit */signed char) var_3);
        }
    }
}
