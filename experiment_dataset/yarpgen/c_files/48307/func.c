/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48307
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
    var_15 = ((/* implicit */signed char) (+((-((-(((/* implicit */int) (short)17))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_2 [i_0])));
        var_17 = ((/* implicit */int) arr_1 [9]);
        arr_4 [i_0] = ((/* implicit */long long int) var_13);
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_19 = ((/* implicit */int) ((var_3) % (((/* implicit */long long int) arr_5 [i_1]))));
        arr_7 [i_1] [i_1] = (+(-9223372036854775800LL));
        var_20 = ((/* implicit */long long int) (((-(9223372036854775807LL))) >= (7694505729307764283LL)));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (~(-7694505729307764283LL)));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) max((((/* implicit */long long int) (~(min((1525452559), (335408212)))))), ((~(var_0))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_2])), (0U)))) ? (((/* implicit */int) (unsigned short)42279)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2])))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (-1109864576) : (((/* implicit */int) var_8)))), ((-(((/* implicit */int) arr_6 [i_2] [16LL])))))))));
                        arr_20 [i_2] [i_3] [i_3] &= ((/* implicit */unsigned char) (-(((arr_9 [i_3] [i_4]) + (arr_9 [i_3] [i_5])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_24 = (-(var_4));
                            arr_23 [13] [i_2] [i_5] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) (((-(-11LL))) & (((/* implicit */long long int) arr_15 [4U] [i_3] [i_3]))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
                        {
                            arr_27 [15] [i_2] [i_4] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */int) 7694505729307764282LL);
                            arr_28 [i_2] [i_3] [i_4] [i_2] [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7694505729307764283LL))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) 0);
                            var_26 += ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_3] [i_8]))))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) var_9)));
                        }
                        for (unsigned char i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            var_27 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) -272098609)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7694505729307764283LL)) ? (-7694505729307764283LL) : (7694505729307764282LL)))))));
                            var_28 = ((/* implicit */unsigned int) ((max((arr_17 [i_9] [i_2] [i_9] [i_9 + 1] [i_2] [i_3]), (arr_17 [i_9] [i_2] [i_9] [i_9 - 1] [i_2] [i_2]))) | (((arr_17 [i_9] [i_2] [i_2] [i_9 + 1] [i_2] [i_5]) - (((/* implicit */int) (unsigned short)65051))))));
                        }
                        arr_35 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */int) -7694505729307764283LL);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_6 [i_2] [i_2]))))))));
        var_30 = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_9 [i_2] [i_2])))));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (short)16109)), (var_6)))))) ? (((/* implicit */int) (signed char)120)) : (max((((/* implicit */int) (_Bool)0)), (var_6)))));
}
