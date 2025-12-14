/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224507
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
    var_18 = ((/* implicit */unsigned short) (_Bool)1);
    var_19 = ((/* implicit */signed char) ((((6550035522940709207ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0 + 2] [4ULL] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_9 [i_2] [0ULL] [8] [i_1] [i_2]);
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_1)), (arr_12 [i_2]))))));
                                arr_14 [i_2] = ((/* implicit */unsigned short) (-(((unsigned int) arr_0 [i_1]))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (!((_Bool)1)));
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (min((((/* implicit */unsigned long long int) (-(1362945904)))), ((+(((unsigned long long int) var_10))))))));
                            arr_20 [i_6] [i_5] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                arr_21 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)21764)) << ((((+(((/* implicit */int) var_9)))) - (21562)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-((-(arr_17 [i_0] [i_0])))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0]) + (((/* implicit */unsigned int) max((arr_2 [i_0] [5U]), (var_8))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((_Bool) arr_7 [i_1] [i_0 + 2] [i_0] [i_0]))))))));
            }
        } 
    } 
}
