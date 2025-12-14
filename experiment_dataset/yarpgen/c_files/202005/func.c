/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202005
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-121)) && (((/* implicit */_Bool) arr_0 [i_1] [i_0])))) || ((_Bool)1)))), ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) min((-1490216544), (arr_2 [i_0] [i_0])))) : (((unsigned long long int) arr_1 [i_0]))))));
                var_16 = ((/* implicit */long long int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) (signed char)31);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_2] [(unsigned char)2]);
        arr_9 [i_2] [i_2] = (-(((((/* implicit */int) arr_0 [i_2] [i_2 - 2])) - (((/* implicit */int) arr_3 [i_2 - 1])))));
    }
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_18 *= ((/* implicit */short) 3269203971U);
        var_19 = ((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3]);
        arr_13 [i_3] = ((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4468718696399252442ULL)))) | (max((arr_11 [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) 3324597784U)) : (4321711050107324829LL))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned long long int) -4321711050107324845LL)) : (arr_8 [i_3]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)4671)))))))) ? (((unsigned int) min((3324597790U), (((/* implicit */unsigned int) arr_0 [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))));
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_21 = (+(((/* implicit */int) ((((/* implicit */int) (signed char)34)) <= (((/* implicit */int) (signed char)36))))));
        arr_16 [i_4] = ((/* implicit */int) ((((((unsigned long long int) arr_15 [i_4])) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((970369511U) >= (((/* implicit */unsigned int) arr_15 [i_4])))))))) << (((min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)79))))), (min((3324597789U), (970369516U))))) - (26U)))));
    }
}
