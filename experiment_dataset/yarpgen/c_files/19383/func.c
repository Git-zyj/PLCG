/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19383
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
    var_15 = ((/* implicit */int) min((9223372036854775807LL), ((-9223372036854775807LL - 1LL))));
    var_16 += ((/* implicit */_Bool) ((int) -7448971047957294871LL));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */int) var_7)))), ((-(var_13)))))) ? (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */long long int) var_1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (7448971047957294874LL) : (-7448971047957294853LL)))) ? (((/* implicit */unsigned long long int) var_10)) : (min((((/* implicit */unsigned long long int) var_11)), (6295769380733095090ULL)))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_18 -= (~(((((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */long long int) 1294059603U)) : (7448971047957294854LL))) << (((min((((/* implicit */unsigned long long int) -1044192096)), (12150974692976456529ULL))) - (12150974692976456529ULL))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned long long int) (unsigned char)19);
                            arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_2 [i_0])) % (min((((/* implicit */unsigned long long int) 7448971047957294854LL)), (6295769380733095073ULL)))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) max(((~(-1926499445185787531LL))), (((/* implicit */long long int) ((arr_11 [i_0] [i_0] [i_2 - 1] [i_4]) <= (var_9)))))));
                        }
                        for (int i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_12 [i_0] [i_0] [i_2] [i_3] [(unsigned char)2] [i_5 + 2])))) && (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_11)) | (12150974692976456518ULL))))))));
                            var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_12)) : (12150974692976456543ULL))) | (((/* implicit */unsigned long long int) max((14U), (var_9)))))) & (max((min((((/* implicit */unsigned long long int) 20U)), (12150974692976456529ULL))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1LL))))))));
                            var_22 = ((/* implicit */unsigned short) arr_10 [i_0]);
                        }
                        var_23 -= ((/* implicit */int) ((4294967289U) << (((min((((((/* implicit */_Bool) -710413752)) ? (6295769380733095096ULL) : (6295769380733095072ULL))), (((/* implicit */unsigned long long int) max((arr_12 [i_3] [2] [i_2] [i_2] [2] [i_0]), (((/* implicit */unsigned int) var_4))))))) - (2077856854ULL)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [i_6] = var_11;
        var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))))), (((/* implicit */unsigned int) ((1U) == (31U))))));
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((7448971047957294889LL), (((/* implicit */long long int) arr_23 [i_7] [(unsigned short)22]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40115))) % (16603041697255713281ULL)))))) && (((/* implicit */_Bool) min((-2147483646), (((/* implicit */int) (unsigned short)65535)))))));
        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_22 [i_7])) ? (arr_22 [i_7]) : (arr_22 [i_7]))) * (min((((/* implicit */unsigned int) 710413768)), (844276797U)))));
    }
}
