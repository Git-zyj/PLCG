/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249365
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((+(var_3))) == (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_2 + 3]), (arr_5 [i_2 - 1]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) var_3)), (arr_11 [i_4]))) / (((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_2] [i_3]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0]))))))) >> (((max((((/* implicit */int) arr_9 [i_4])), (((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))) - (225))))))));
                            arr_13 [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0]);
                            arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] [(unsigned short)0] [i_4] |= ((/* implicit */unsigned short) var_9);
                        }
                    }
                    var_18 = ((/* implicit */unsigned char) ((max((arr_3 [i_2 + 2] [i_2 - 1] [i_2 - 1]), (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 2]))) != (((arr_4 [i_2 + 4] [i_2 + 3] [i_2 + 1]) >> (((var_9) - (6694395351870811193LL)))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
    var_20 = var_8;
}
