/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190225
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
    var_15 = ((-7032752358012651576LL) != (var_1));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))));
                var_17 = ((/* implicit */int) arr_2 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1])))))) ? (((/* implicit */int) ((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))))) : (((/* implicit */int) var_0))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)226);
                            }
                            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                            {
                                var_18 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_5]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6696778400051069933ULL)) ? (arr_0 [i_5] [i_3]) : (arr_0 [i_0] [i_0]))))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_5] [i_3] [i_2] [i_1]))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                            {
                                var_19 = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2]);
                                var_20 ^= ((/* implicit */unsigned short) ((arr_18 [i_6] [i_3] [i_2] [i_1] [i_0]) >> (((arr_18 [i_0] [i_1] [i_2] [i_3] [i_1]) - (17334575099310842045ULL)))));
                                var_21 &= ((/* implicit */unsigned long long int) arr_3 [i_2]);
                                var_22 ^= ((/* implicit */unsigned short) ((arr_18 [i_6] [i_3] [i_2] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((8630428857238964774LL) - (((/* implicit */long long int) arr_7 [i_1])))))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_25 [i_0] [i_0] [i_2] [i_3] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_7])) ^ (var_13)));
                                var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2] [i_1] [i_7])))) ? (1480282916) : (((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)20))))));
                                arr_26 [(_Bool)1] [i_3] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-1626352061) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_7])) ? (7371846291659072256ULL) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) 1048575U))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [14U] [i_7])))))));
                            }
                            arr_27 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
}
