/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217165
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
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2122656074)) ? (-2122656075) : (1352904541)))))) << (min((((long long int) (unsigned short)65535)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9)))))))));
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (signed char)127))))), (max((((/* implicit */unsigned long long int) (signed char)25)), (var_16)))))) ? (max((((unsigned long long int) (short)-20334)), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */short) (signed char)-10)), (var_10)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 += ((((arr_0 [(unsigned char)20]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [6U])))));
        arr_2 [i_0] [i_0] = ((max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_9))))))) < (((((/* implicit */unsigned long long int) var_2)) * (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) -2126559657)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */short) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_9 [(signed char)10] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((int) (signed char)127));
                    var_21 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) <= (14198137938591544045ULL)));
                    arr_10 [i_1] [i_2] = ((/* implicit */int) (~((~(min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_2])), (131071ULL)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) var_11)), (131092ULL))))), (max((max((var_16), (((/* implicit */unsigned long long int) arr_3 [i_1] [19LL])))), (min((((/* implicit */unsigned long long int) (signed char)-121)), (10261808266699555272ULL))))))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) -1635069258)) <= (4294967294U)));
        var_24 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_11 [i_4])))));
    }
}
