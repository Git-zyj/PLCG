/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3370
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_4 [i_0] [i_1] [i_1]) != (arr_4 [i_0] [i_1] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (min((var_3), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) var_12)))) < ((~(((/* implicit */int) var_16)))))))) > (arr_0 [i_2])));
                                var_20 = ((/* implicit */unsigned long long int) 1602117151);
                                var_21 = ((signed char) ((((/* implicit */_Bool) ((int) 11533041659098505100ULL))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44921))))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -9173182582617477832LL)))))))))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_0] = var_17;
                        var_23 = ((/* implicit */unsigned short) arr_2 [i_1]);
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_14 [i_0] [i_0] [i_1] [i_1]))) - (((/* implicit */int) var_0))));
                        var_25 = ((/* implicit */long long int) ((((unsigned long long int) max((var_9), (arr_4 [i_1] [i_1] [i_6])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0])))));
                        arr_20 [i_0] [i_2] [i_2] [3] [i_0] = ((/* implicit */int) var_3);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned short)20964)), (var_14))))) ? ((-(((/* implicit */int) arr_7 [i_6] [i_0] [(signed char)19] [i_0])))) : (((/* implicit */int) min((arr_8 [i_0] [i_2] [i_0]), (arr_8 [i_0] [i_0] [i_0]))))));
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_27 = ((unsigned int) min((arr_21 [4] [i_7] [i_7] [i_9]), (var_11)));
                                arr_28 [i_0] [i_0] [i_9] = ((int) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) var_16))));
                }
                for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    var_29 = ((/* implicit */int) min((var_29), (((int) (~(((/* implicit */int) var_6)))))));
                    arr_32 [i_0] [i_0] [i_10] [i_0] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 6913702414611046534ULL)) || (((/* implicit */_Bool) var_16)))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (var_8))) ^ (((((/* implicit */_Bool) -4430622413910446553LL)) ? (((/* implicit */int) arr_23 [i_0] [10])) : (var_8)))))) : (9223372036854775790LL));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (min((((((/* implicit */_Bool) var_4)) ? (arr_16 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 577281627)))), (((((/* implicit */_Bool) var_9)) ? (var_14) : (arr_4 [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_10] [i_10]))));
                }
                var_31 = ((/* implicit */long long int) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((843314337014964091LL), (((/* implicit */long long int) (signed char)-36))))))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min((var_0), (var_0)))), (((((/* implicit */unsigned long long int) var_4)) - (var_14))))), (((/* implicit */unsigned long long int) (~(((712041015U) & (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
}
