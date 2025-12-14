/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196974
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((min((2147483647), (((/* implicit */int) (_Bool)1)))) >= ((+(((/* implicit */int) (unsigned char)30))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((_Bool) arr_8 [8ULL]))))), (((((/* implicit */_Bool) (signed char)103)) ? (max((var_1), (arr_4 [i_3] [i_2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_4 [i_3] [(short)3] [(short)3])))))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_13 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -11)) ? (8060105205555705779LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10242)))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((942854924), (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_1 [i_4] [i_4]))))) >> (((((/* implicit */int) (short)-20131)) + (20151))))))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((+(7U))) - (((/* implicit */unsigned int) ((int) (short)25601))))))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)83)), ((unsigned char)30)))))))));
                            var_24 = ((/* implicit */short) max((var_24), (arr_2 [i_2] [i_2 - 1])));
                            var_25 = ((/* implicit */long long int) ((int) 11));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((min((((((/* implicit */int) var_11)) / (((/* implicit */int) var_4)))), (((/* implicit */int) var_2)))) * (((/* implicit */int) ((unsigned char) 2145563988))));
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_5))));
}
