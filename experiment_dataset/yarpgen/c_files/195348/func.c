/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195348
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
    var_13 = var_9;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 *= ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_1 [i_0])), (1447811976631806750LL))) / ((-(-402509071614253137LL)))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((-402509071614253137LL), (410846322190948678LL))))));
        var_15 = ((/* implicit */unsigned long long int) min(((+((-(166799636U))))), (((/* implicit */unsigned int) var_7))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_2);
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-7037126209383161658LL) + (1447811976631806750LL)))) ? (1662502258386578670ULL) : (max((((/* implicit */unsigned long long int) (unsigned char)2)), (var_8)))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_1] [i_3 - 2])), ((-(((/* implicit */int) var_5)))))))));
                    var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [(unsigned char)12] [i_3 - 2])) && (((/* implicit */_Bool) (unsigned char)254))))))) < (((((/* implicit */unsigned long long int) min((-806810817836183682LL), (((/* implicit */long long int) (unsigned short)59994))))) | (var_0)))));
                }
                for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_12 [i_1 + 1] [i_1 - 2] [i_2] [i_4]))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (-((+(((/* implicit */int) var_10)))))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 9007199254740991LL))))))) != (((/* implicit */int) ((max((13265754840489374751ULL), (((/* implicit */unsigned long long int) arr_10 [i_1 + 1])))) >= (((/* implicit */unsigned long long int) (+(var_4))))))))))));
                }
                arr_13 [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_10 [i_1 + 1])) : (((/* implicit */int) arr_10 [i_1 - 1]))))), (min((((/* implicit */long long int) 824342126)), (arr_8 [i_1 - 1])))));
            }
        } 
    } 
}
