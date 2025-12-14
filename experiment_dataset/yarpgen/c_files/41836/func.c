/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41836
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
    var_11 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (14109224794766072894ULL)))) || ((!(var_5)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */_Bool) 10963292171412065408ULL)) && (((/* implicit */_Bool) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(4337519278943478733ULL)))))))) : (min((((/* implicit */unsigned long long int) var_5)), ((((_Bool)1) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))))))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_1 [4] [4]))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 += ((/* implicit */unsigned char) 4337519278943478742ULL);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((arr_1 [i_0] [i_3]) << (((/* implicit */int) (_Bool)1))));
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((signed char) (+(((/* implicit */int) (_Bool)1))))));
                            var_15 *= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-124))));
                        }
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            arr_16 [i_0 - 2] [i_1] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) var_8)) : ((((-(arr_5 [i_1] [i_1] [i_1]))) * (((11577018472349088999ULL) / (((/* implicit */unsigned long long int) arr_7 [i_5] [i_1] [i_0]))))))));
                            var_16 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_3]);
                            arr_17 [1U] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) 10963292171412065409ULL);
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_1))));
                            arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4853173165354372778LL)) ? (((arr_0 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25))))) : (arr_0 [i_3])))) + (min((((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_5])), (((unsigned long long int) var_6))))));
                        }
                    }
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(arr_4 [i_0])))), (((((/* implicit */_Bool) arr_14 [i_1] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_1])) ? (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    var_19 += ((/* implicit */long long int) (~(var_7)));
}
