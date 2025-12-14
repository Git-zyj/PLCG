/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198163
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_10))))) > (((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)177), (((/* implicit */unsigned char) (_Bool)1)))))) ^ (max((((/* implicit */long long int) var_7)), (var_6)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = (unsigned char)172;
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))) >= (min((((((/* implicit */_Bool) (unsigned char)227)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [15ULL])))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_16 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_7)) + (arr_11 [i_3] [i_4]))), (((((/* implicit */_Bool) 8021681990188434487ULL)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_3]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : ((((+(arr_10 [i_1] [i_3] [i_3]))) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 2] [i_1])))))));
                            var_19 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((long long int) arr_8 [i_2] [i_2] [i_2]))), (min((var_14), (((/* implicit */unsigned long long int) (unsigned char)156)))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)29655)))))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */signed char) arr_0 [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) > (var_14))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)196))))) : ((+(arr_9 [i_1] [16] [16]))))) <= (min((0ULL), (((unsigned long long int) (unsigned char)99))))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) min((min((9820932307637024289ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max((arr_1 [i_2 - 1] [i_5 + 1]), (arr_1 [i_2 + 4] [i_5 - 1]))))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) ((short) var_14)))))) ? (4669630600599245305LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_13)) >= (var_1)))))));
}
