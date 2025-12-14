/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21262
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_3)));
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */signed char) ((var_15) ? (max((((/* implicit */unsigned long long int) var_8)), ((-(var_6))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) 568272833U))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (arr_0 [i_0] [i_0]))))), (7965734153333145504ULL)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1]), (((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (arr_6 [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (signed char)-62)))))))) - (min(((-(var_3))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) var_13)))));
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) var_15))))) ? (3916380460570681108LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        arr_12 [(unsigned char)11] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_3]))))), (((signed char) arr_9 [i_3]))))), (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) != (var_1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_15))) - (134217727LL)))))));
        var_23 = ((/* implicit */unsigned int) max(((-(arr_10 [i_3] [i_3]))), (max((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_10 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_5)), (var_12))))))));
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 3726694480U)), (var_6))), (((var_6) | (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4]))))))) ? (((/* implicit */int) ((unsigned char) var_3))) : (((/* implicit */int) arr_13 [i_4]))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_13 [i_4]))));
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-98)), (arr_9 [i_4])))) ? (((((/* implicit */_Bool) arr_14 [(signed char)11])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4])))) : ((+(((/* implicit */int) arr_9 [i_4]))))));
        var_26 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)62))));
        var_27 = ((/* implicit */long long int) ((signed char) (+((~(arr_10 [i_4] [i_4]))))));
    }
}
