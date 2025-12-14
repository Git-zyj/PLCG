/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28813
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
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((((~(-8300017966968283968LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)223)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (var_3))))))) ^ (max((arr_1 [i_0] [0]), (arr_1 [i_0] [4ULL]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), (max((((/* implicit */long long int) var_9)), (var_4)))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), (var_4)))) : (((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (short i_5 = 1; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_16 [i_2] [i_2] [i_3] [3U] [(unsigned short)9] = ((/* implicit */long long int) var_8);
                                arr_17 [i_5 - 1] [i_2] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((((/* implicit */_Bool) (unsigned short)46432)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19098)))))) ? (max((var_11), (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) >= (var_5))), (arr_14 [i_2] [i_3] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                var_16 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((arr_4 [i_1]), (((/* implicit */unsigned short) arr_0 [i_2]))))), (((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_11 [i_2])))) / (((/* implicit */int) ((unsigned char) arr_11 [i_2]))))))));
            }
        } 
    } 
}
