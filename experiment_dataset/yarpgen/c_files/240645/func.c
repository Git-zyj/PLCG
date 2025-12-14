/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240645
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11628)) | (948320214)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 2038055503U)) : (14752211144131748187ULL))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((((275784929) | (1387299499))), (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((2038055503U) - (2038055498U)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((min((((/* implicit */long long int) 2256911784U)), (-1718768781652027146LL))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) var_15)), (3993083634U)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) var_14);
                                arr_14 [i_0] [i_0] [6LL] = ((/* implicit */signed char) max((((/* implicit */long long int) min(((unsigned char)252), (((/* implicit */unsigned char) var_16))))), (min((((/* implicit */long long int) (unsigned char)231)), (-8646523803057889657LL)))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) : (15614337760191233728ULL)))) ? (((1387299499) + (((/* implicit */int) (signed char)-110)))) : (((1387773906) - (((/* implicit */int) (_Bool)0))))));
                                arr_15 [i_4] [i_3] [i_0] [i_3] [i_0] [i_1] [i_0] = 1554766410U;
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) ((4799692087339447464ULL) <= (((/* implicit */unsigned long long int) (-(-1387299495))))));
                        var_24 = min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (7349928064431630463LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-7)) - (1251817585)))));
                    }
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_6] [i_0] [i_6] [i_6] = ((/* implicit */int) (_Bool)1);
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1251817577)) >= (min((((/* implicit */unsigned int) (unsigned short)4270)), (2038055503U)))));
                        }
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2832406313518317888ULL)) ? (90519202) : (((/* implicit */int) (unsigned short)13))));
                        var_27 = ((/* implicit */_Bool) -1251817585);
                    }
                    for (int i_8 = 1; i_8 < 23; i_8 += 1) 
                    {
                        arr_29 [i_0] = ((/* implicit */_Bool) max(((-(((var_11) << (((15614337760191233715ULL) - (15614337760191233705ULL))))))), (((/* implicit */unsigned int) (signed char)26))));
                        var_28 = ((/* implicit */long long int) max(((~(max((((/* implicit */unsigned long long int) 9223372036854775783LL)), (7906687557148535479ULL))))), (((/* implicit */unsigned long long int) (+(1251817563))))));
                        arr_30 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((1901917032U) + (((3915025101U) ^ (((/* implicit */unsigned int) -472042140))))));
                    }
                }
            } 
        } 
    }
}
