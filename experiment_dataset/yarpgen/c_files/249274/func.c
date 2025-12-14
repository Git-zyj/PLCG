/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249274
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (1915497737905412770ULL))) + (((/* implicit */unsigned long long int) var_1))))))))));
        var_19 |= ((/* implicit */long long int) var_15);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [(signed char)0] [i_1])) > (((/* implicit */int) arr_3 [i_1]))))) == (((/* implicit */int) arr_3 [i_1]))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) && ((_Bool)1))) ? (((/* implicit */int) ((var_10) || (((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) arr_2 [i_1] [i_1]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)35599)) % (((/* implicit */int) (unsigned short)29911)))) + (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) max((arr_7 [i_2]), (((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (((unsigned char) var_8))))))));
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((arr_13 [i_2] [(unsigned short)4] [(unsigned short)4] [i_5 - 1] [i_2] [i_2]), (arr_13 [i_2] [i_2] [i_4] [i_3] [(_Bool)1] [i_4])))), (773674848U)));
                                arr_17 [2U] [2U] [i_4] [(short)13] [2U] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35639)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) var_12))))) % (((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35658))))))));
                                var_24 &= ((/* implicit */unsigned short) ((min(((_Bool)1), (var_10))) ? (((12358770135915465080ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (max((arr_12 [i_5 + 1] [i_6 + 1] [i_6]), (arr_12 [i_5 + 2] [i_6 + 1] [12ULL])))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
}
