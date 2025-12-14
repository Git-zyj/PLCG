/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21426
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_1] [(signed char)15] [i_0] [i_3] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) max(((short)7938), (((/* implicit */short) var_3))))), ((~(1568488198563108663ULL)))))));
                        var_19 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (max((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74))))), ((+(((/* implicit */int) (_Bool)1))))))), ((~(max((((/* implicit */long long int) 1396020540U)), (-3069054248196318187LL)))))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) (~(min((((/* implicit */int) var_0)), (var_16))))))))));
                        }
                        var_23 += ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) min(((unsigned char)182), ((unsigned char)192)))), (min((((/* implicit */unsigned int) var_18)), (arr_3 [i_3] [i_2]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)56)))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) max(((short)-23761), (((/* implicit */short) (signed char)110)))))))))))));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(2268810030U))))))), (min((((/* implicit */unsigned long long int) (+(arr_1 [21LL])))), (var_10)))));
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+((-(((/* implicit */int) var_5)))))))));
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)126)))), (min((((/* implicit */unsigned long long int) (signed char)110)), (var_10))))))));
}
