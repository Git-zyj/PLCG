/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238753
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
    var_18 *= ((/* implicit */signed char) max((min((16566315780096842705ULL), (((/* implicit */unsigned long long int) (signed char)-100)))), (((/* implicit */unsigned long long int) var_1))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (~(var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_20 *= ((/* implicit */unsigned int) (unsigned short)20467);
                        var_21 = ((/* implicit */short) arr_9 [i_3] [(short)9]);
                    }
                    for (unsigned char i_4 = 4; i_4 < 9; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned char) (-(((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_23 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) max((770757652), (1595526948)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_4 - 4])))));
                            var_24 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_2 [i_4 - 2])))), (((/* implicit */int) min((arr_2 [i_4 + 1]), (arr_2 [i_4 - 2]))))));
                            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(var_5)))) ? (arr_12 [i_4 - 1] [i_1] [i_2] [i_4 - 3] [i_4] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 - 1] [i_0]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))));
                        }
                        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) -1048737972)) && (((/* implicit */_Bool) var_8)))))));
                        var_27 = max((max((((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_4 - 1])) == (((/* implicit */int) (unsigned short)45068))))), (arr_14 [i_4] [(unsigned short)1] [i_0] [(unsigned short)1] [i_0] [i_4 - 3]))), (arr_14 [i_4] [i_1] [(_Bool)1] [i_4 - 3] [i_4] [(_Bool)1]));
                        var_28 = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) -624735164)), (4173255748768132332ULL))));
                    }
                    var_29 = ((/* implicit */unsigned char) var_13);
                    var_30 -= ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (unsigned short)45090)))));
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [(short)2] [4ULL])) ? (624735191) : (((/* implicit */int) (unsigned short)45068))))))) * (((((/* implicit */_Bool) arr_15 [6U] [i_2] [(short)8] [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_15 [8] [i_1] [i_2] [i_2] [i_2] [2LL]))))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20445)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (11961638845034987540ULL)));
                }
                var_33 = ((/* implicit */_Bool) var_13);
                var_34 = max((((/* implicit */int) ((signed char) var_1))), ((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned short) var_0);
}
