/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218412
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
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))), (((var_6) ? (((/* implicit */unsigned long long int) var_9)) : (((unsigned long long int) var_2))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_13 ^= ((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) ((((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))))));
                        arr_10 [i_0] [(unsigned char)7] [i_1] [i_3] [22ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_3 + 2]))))));
                        var_14 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) | (17750605501391498485ULL))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_4 [i_0]);
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_4] [(unsigned short)21] [i_6] [19ULL] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_7 [i_0] [i_6])))));
                            arr_25 [i_0] [i_4] [i_5] [19ULL] [19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20773)) ? (((/* implicit */int) (unsigned short)44762)) : (((/* implicit */int) (unsigned short)44762))))), (var_5)))) ? (((((/* implicit */int) ((arr_2 [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))) & (((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((arr_16 [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned long long int) 2486219002U)))))));
                        }
                    } 
                } 
            } 
        }
    }
}
