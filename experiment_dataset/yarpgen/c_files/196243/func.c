/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196243
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
    var_16 = ((/* implicit */unsigned long long int) ((unsigned int) var_12));
    var_17 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2610))) : (1491837583U)))) ? (min((((/* implicit */unsigned int) (unsigned char)120)), (2046U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)2595)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) arr_0 [i_0]);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_19 &= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) ? (((/* implicit */unsigned long long int) -773007952)) : (arr_12 [8] [i_3 - 1] [i_4]))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [17] [7] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2639))) : (arr_8 [i_2])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0] [i_3] [i_0])), (arr_4 [i_2] [i_1] [i_4])))) : (((/* implicit */int) (_Bool)1)))) : (1040070194)));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) (+(((int) (!(((/* implicit */_Bool) 2031U)))))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 18; i_8 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [8U] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_15 [i_8] [i_8 + 1]), (((/* implicit */int) (_Bool)0)))))));
                            arr_24 [i_0] [4ULL] [i_0] [i_0] [i_8] = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14465815247355328325ULL)) ? (((/* implicit */int) arr_3 [i_8] [i_8] [i_0])) : (((/* implicit */int) arr_17 [12U] [i_0] [i_6]))))) ? (((((/* implicit */unsigned int) 1566019379)) * (4172462010U))) : (1963411282U)));
                            arr_25 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_7] [i_0])), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_21 [i_0] [i_5] [i_6] [i_7] [i_8] [i_0])) : (((/* implicit */int) arr_3 [i_6] [i_5] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_8 - 1] [i_0 + 2] [i_0]))))) : (((/* implicit */int) (short)2588))));
                        }
                    } 
                } 
            } 
            arr_26 [16ULL] &= max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(unsigned short)16] [i_0] [4ULL])) + (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_4 [i_5] [(unsigned short)9] [4U])) : (((/* implicit */int) arr_0 [12]))))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)35859))))) : (((((/* implicit */_Bool) (unsigned short)29674)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(short)8] [10] [10] [i_5]))) : (arr_12 [i_0 + 1] [i_5] [i_0]))))));
            var_22 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0 + 2])))));
        }
        var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 2803129712U)))) || (((_Bool) arr_18 [i_0]))));
        arr_27 [i_0] = ((/* implicit */long long int) arr_11 [i_0]);
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [(unsigned short)15] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] [i_0]) : (arr_10 [i_0] [i_0 + 2] [i_0 + 1] [17] [17] [i_0])))) : ((~(3579431235773842167ULL))))))));
    }
}
