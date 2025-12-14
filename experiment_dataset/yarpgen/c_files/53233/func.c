/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53233
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
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) (unsigned short)18794);
            arr_6 [i_1] = ((/* implicit */unsigned int) arr_0 [13U] [(short)10]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(30U))))));
            var_16 |= ((/* implicit */short) ((unsigned long long int) max((((/* implicit */short) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) var_7))))), (arr_3 [i_2] [i_0]))));
            arr_10 [(signed char)13] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_6))))))) ? (((/* implicit */int) (unsigned short)11024)) : (max(((+(((/* implicit */int) (short)-32759)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) || (var_8))))))));
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_0 [i_0] [i_2]))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(4294967266U)))) : (((((/* implicit */_Bool) max((arr_12 [i_0] [i_0] [i_3]), (((/* implicit */unsigned int) var_8))))) ? (var_13) : (((/* implicit */long long int) 1688629917U)))))))));
            var_18 -= ((/* implicit */long long int) (_Bool)1);
            arr_14 [i_3] &= ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((signed char) arr_8 [i_0] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) (+((+(arr_12 [i_3] [i_0] [i_0])))))) : (min((((unsigned long long int) arr_8 [i_0] [i_3] [(unsigned short)12])), (((/* implicit */unsigned long long int) 4294967262U))))));
            arr_15 [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min(((((_Bool)1) ? (arr_12 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))))), (((arr_12 [i_3] [i_3] [i_0]) * (4294967295U)))))) < (max((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_3]))))), (min((((/* implicit */long long int) (signed char)9)), (var_13)))))));
        }
        var_19 = ((/* implicit */signed char) var_11);
        var_20 = ((/* implicit */short) 3281933169U);
    }
    var_21 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_14))) - (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_25 [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (1554902141923043994ULL))), (((/* implicit */unsigned long long int) ((arr_18 [i_6]) < (-7641883743489315357LL))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9063629524405043106ULL)) ? (((/* implicit */int) arr_24 [i_4 - 1])) : (((/* implicit */int) arr_24 [i_4 - 2]))))) : (((((/* implicit */_Bool) var_10)) ? (min((3381927497U), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))))));
                    var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) -5795634271952976578LL)) ? (3381927490U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))));
                }
            } 
        } 
    } 
}
