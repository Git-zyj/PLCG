/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249445
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((var_4), (((/* implicit */long long int) var_8)))))) ? (min((arr_2 [i_3] [i_1] [4U]), (((/* implicit */unsigned int) arr_6 [i_3] [i_2] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))));
                        arr_9 [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) var_8)))) ? (arr_7 [12LL] [i_1] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_9) >= (3709713043U)))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0]), ((signed char)109))))) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) - (-1905455500135676089LL)))))) <= (((/* implicit */int) min((((unsigned short) 5521893011669494506LL)), (((unsigned short) var_1)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */int) (_Bool)1)), (55154505))));
        arr_13 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((arr_5 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned short)0))))) | (max((var_1), (((/* implicit */long long int) arr_5 [i_4] [i_4] [i_4]))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        arr_22 [i_6] [i_7] = ((/* implicit */unsigned short) ((arr_8 [i_4] [i_4] [i_4] [i_4] [(unsigned short)18] [i_7]) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3096099182127825156LL))))))));
                        arr_23 [i_5] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7])))))) <= (55154494)))), (((((/* implicit */unsigned long long int) ((long long int) 2986343495U))) % (((((/* implicit */_Bool) 636749406473302948LL)) ? (arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) var_4))))))));
                        arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)74))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_6])) ? (1696688675U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_4])))))), (max((5521893011669494512LL), (((/* implicit */long long int) var_2)))))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_5])) ? (454960404208529408LL) : (var_1)))));
                        arr_25 [i_5] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((82410224U), (((/* implicit */unsigned int) arr_10 [i_5]))))) ? (26U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))))), (min((((((/* implicit */_Bool) (unsigned char)159)) ? (var_4) : (((/* implicit */long long int) 3200007705U)))), (((/* implicit */long long int) var_0))))));
}
