/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45876
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
    var_19 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)38112)) ? (((/* implicit */unsigned long long int) -3445098699139073683LL)) : (var_15))) * (((((/* implicit */_Bool) (short)-30857)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_15)))))) ? ((+(((/* implicit */int) var_9)))) : (max((((/* implicit */int) ((short) var_9))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-32655)) : (((/* implicit */int) var_1)))))));
    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (1805356925U)))) ? (((((/* implicit */_Bool) -542740627)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63595))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 542740609)) ? (-3445098699139073683LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-23440)))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -542740610)) ? (arr_3 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)123)))), (((((/* implicit */int) (unsigned short)24560)) >= (((/* implicit */int) (signed char)-89))))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-((((_Bool)0) ? (3590844241U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_17)) && (arr_0 [i_2]))) && (((((/* implicit */int) var_1)) != (arr_5 [i_0] [i_0] [i_2] [i_2])))))) : (max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                    var_22 = ((/* implicit */int) arr_2 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)38))))), (min((var_14), ((short)10576)))))) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) == (-3445098699139073683LL))))))))));
}
