/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22470
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
    var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
    var_12 = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)13526))))) ^ (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) & (arr_9 [i_0] [i_2] [i_2]))), (((/* implicit */unsigned int) max(((unsigned short)53407), (((/* implicit */unsigned short) (unsigned char)23))))))))))));
                            arr_14 [i_0 - 1] [i_1] [i_1] [i_3] [i_0] [i_2] = ((/* implicit */unsigned short) var_2);
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_10 [i_1] [i_1 - 1] [i_2] [i_3]) & (((/* implicit */int) (signed char)85)))), (((/* implicit */int) arr_7 [i_1 - 1]))))) ? (((((((/* implicit */_Bool) arr_13 [0] [i_1] [i_1] [i_2] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) max(((unsigned short)60), ((unsigned short)45216)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 - 1])), ((unsigned short)55930))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (9223372036854775808ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))))) == (((unsigned long long int) ((((/* implicit */int) arr_6 [(unsigned short)0] [i_1] [i_0] [i_0])) * (((/* implicit */int) arr_4 [i_1] [i_0])))))));
                arr_15 [(_Bool)1] [i_1 + 1] = ((/* implicit */_Bool) (+(max((arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_1]), (((/* implicit */int) (short)-18))))));
                var_16 *= ((/* implicit */unsigned short) max((((/* implicit */int) min(((_Bool)1), (((_Bool) (short)20))))), ((((-(var_2))) + (((/* implicit */int) (unsigned short)3448))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_10 [i_5] [i_1] [i_4] [i_5]) : (((/* implicit */int) (_Bool)1)))) & (((arr_5 [i_0 + 4]) << (((((((/* implicit */int) arr_1 [i_1 + 1])) + (12))) - (11)))))));
                            var_18 += ((/* implicit */unsigned short) 1457196294U);
                            arr_20 [i_0] [i_0] [(signed char)7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0 + 2] [i_1] [i_1] [(short)5] [i_4] [8])) >> (((arr_5 [i_0 - 1]) - (856737366)))))), (((arr_12 [i_4]) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)34631)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
