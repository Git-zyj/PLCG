/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230117
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3316563162230579558LL)) ? (382771636) : (-1073741824)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -382771637)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (382771637)))) : (((((/* implicit */unsigned int) 622144102)) + (arr_2 [i_0])))))));
        var_17 &= ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_18 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [11]) : (arr_2 [i_1]))));
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((7803461602731654098LL) / (((/* implicit */long long int) 382771638))))) ? (((((/* implicit */unsigned long long int) -382771615)) * (15711950284797378587ULL))) : (2964839352278229283ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))));
    }
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [(short)4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2])) ? (arr_4 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17847))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_7 [i_2 + 1] [9] [i_3]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3])) ? (1754682281U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17846)))))))))));
                var_21 = ((/* implicit */int) ((signed char) arr_2 [i_3]));
                arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (((long long int) arr_2 [i_2 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (unsigned short)40036)) : (((/* implicit */int) (short)-31037))))) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_3 [i_2 + 1])))) : (((/* implicit */int) (((~(-382771619))) <= (382771610))))));
            }
        } 
    } 
}
