/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237459
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
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3]))) == (2187841043U))))) == (var_3)));
        var_15 |= (unsigned short)11178;
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) var_8)))))) : ((+(var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (4294967295U)))) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 3] [(unsigned short)9] [i_1])))))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) != (max((max((((/* implicit */unsigned int) arr_2 [i_0] [(short)3] [i_1])), (var_10))), (((/* implicit */unsigned int) (unsigned short)51510))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        arr_11 [i_0 + 2] [(short)7] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_11))))));
                        var_17 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)9730))))) % (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0 + 2] [i_4])) / (((/* implicit */int) (short)9730))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0]))))) : (var_1))));
                        var_18 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) var_8)))));
                        arr_12 [12U] [12U] [12U] [i_0] [(unsigned short)20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (((_Bool)0) && (((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2] [i_0]))))), (var_5))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)66))));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_13)), ((~(((/* implicit */int) var_6))))));
                        var_21 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_20 [i_0] = ((/* implicit */unsigned char) var_0);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0 - 1]), (arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? (((((/* implicit */_Bool) arr_6 [19ULL] [i_0 + 3] [i_0 + 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1])))))));
                        var_23 = ((/* implicit */unsigned long long int) (short)7687);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((4294967285U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), ((-(arr_17 [i_0] [i_0] [i_0 + 1] [i_0 + 4] [i_0] [i_0 - 1])))));
        }
        var_25 *= ((var_1) << ((((+(((/* implicit */int) var_8)))) - (24537))));
    }
    var_26 = ((/* implicit */short) ((((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
    var_27 = ((/* implicit */signed char) (+((-(max((((/* implicit */unsigned long long int) (signed char)-34)), (var_3)))))));
}
