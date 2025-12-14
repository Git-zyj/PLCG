/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191092
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_5))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) (+((+(arr_2 [i_0] [(_Bool)1] [i_1 + 1])))));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) min((339989687), (-1)))) : ((-(arr_3 [i_1 - 1] [i_1 - 2])))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) var_6)) < (var_0))))))), ((+(((((/* implicit */_Bool) arr_8 [i_3] [i_3] [1ULL] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-587127450) : (((/* implicit */int) (signed char)-13))))) ? (((((/* implicit */_Bool) var_14)) ? (-5501696304215400152LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [4LL] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) 5501696304215400152LL)))), ((!(((/* implicit */_Bool) var_15))))))) : (((((/* implicit */_Bool) ((short) var_14))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [i_3] [i_4])) : (-1))) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 - 2]))))));
                            var_21 = ((/* implicit */int) ((((int) 1)) >= ((~(587127450)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) -420303014)) ? (((/* implicit */int) (short)31037)) : (-904587799))) > ((-(587127449))))) ? (((/* implicit */int) (((~(var_10))) < (((/* implicit */unsigned long long int) var_5))))) : (((int) arr_7 [i_5 + 1] [i_3] [i_2] [i_1] [i_0]))));
                            var_23 *= ((/* implicit */unsigned long long int) (+((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 426052238)) : (5501696304215400151LL)))))));
                        }
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(arr_11 [i_6] [i_0] [4U] [i_1] [i_1] [i_1 - 1] [i_0]))), (((/* implicit */unsigned int) 426052233))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) var_11)) : (623179682U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_1 - 2] [i_1 - 2])), (arr_4 [i_1] [i_2] [i_2] [i_1])))))));
                            arr_19 [i_0] [i_1] [i_3] [i_0] [i_2] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6] [i_6])))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [i_1 - 2] [i_2] [i_3] [i_1 - 2]))))) ? (arr_8 [i_6] [i_3] [(unsigned char)3] [i_1 - 2] [i_0]) : (max((((/* implicit */unsigned int) (signed char)-1)), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */_Bool) var_2);
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                for (int i_9 = 4; i_9 < 9; i_9 += 2) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) arr_5 [i_0] [i_7] [i_8]);
                        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (+(587127455)))))));
                    }
                } 
            } 
        } 
    }
}
