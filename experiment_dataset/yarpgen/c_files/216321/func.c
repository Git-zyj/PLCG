/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216321
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)-4))))));
        var_20 = ((/* implicit */unsigned short) min((var_7), (((/* implicit */long long int) 67043328U))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)10443)), ((unsigned short)57003))))));
                    arr_11 [i_1] [i_2] = ((/* implicit */unsigned int) var_18);
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)171)) ^ (((/* implicit */int) (signed char)114))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) (+(min((arr_4 [i_1]), (((/* implicit */long long int) max((((/* implicit */short) (signed char)-16)), (arr_3 [i_1]))))))));
        arr_13 [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) var_11)))));
    }
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) 
    {
        var_22 = ((/* implicit */short) (+(2468103197U)));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4194)) && (((/* implicit */_Bool) var_13))));
        var_24 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((arr_15 [i_4] [i_4]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))) <= (-7272202392606958708LL))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_15 [i_4 + 2] [i_4 + 1])), ((+(2468103197U)))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 + 3] [i_4 - 1]))) ^ (arr_14 [i_4 - 2]))), (((/* implicit */unsigned long long int) ((arr_14 [i_4 + 2]) <= (18446744073709551615ULL))))))));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */int) (short)768)) ^ (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) arr_15 [i_4] [i_4 + 3]))));
        var_26 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_4 - 2] [i_4 - 2]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-14)) ? (1826864098U) : (4227923986U))));
        var_27 -= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) <= (max((((/* implicit */unsigned int) (signed char)114)), (2468103198U))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)780))))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) -1470001410)) : (min((arr_17 [i_5]), (((/* implicit */unsigned long long int) (unsigned short)48703))))))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 3; i_6 < 17; i_6 += 1) 
        {
            arr_21 [i_5] = ((/* implicit */long long int) min((((4227923967U) << (((((/* implicit */int) (signed char)-4)) + (14))))), (((unsigned int) 67043329U))));
            var_28 = ((/* implicit */unsigned long long int) arr_16 [i_5] [i_6]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_24 [i_7] = ((/* implicit */_Bool) ((arr_15 [i_5] [i_7]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)16833)) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))) != (2468103197U))))))))));
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            arr_33 [i_5] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (signed char)16)))));
                            var_29 = ((/* implicit */_Bool) arr_22 [i_5]);
                            var_30 ^= ((/* implicit */_Bool) ((206345902) << (((((((/* implicit */int) arr_26 [i_5] [(short)16] [(short)16] [i_5])) + (2182))) - (13)))));
                        }
                    } 
                } 
                arr_34 [i_7] = 1826864097U;
                var_31 = ((/* implicit */unsigned short) ((signed char) (signed char)119));
            }
            for (short i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
            {
                arr_37 [i_5] [i_7] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) 1048575)) ? (-6055785005622895529LL) : (((/* implicit */long long int) 2050382122U)))) / (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_5])))) + (3373267616129646180LL)))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) var_15);
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_7] [i_11] [i_12] [i_13])) ? (arr_35 [i_13] [i_11] [i_5] [i_5]) : (4976644851575530287LL)))) ? (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_14 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_5] [i_7] [i_7] [i_12])), (max(((unsigned short)44197), (((/* implicit */unsigned short) var_1))))))))));
                            arr_43 [i_5] [i_7] [i_7] [i_5] [i_13] = ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5] [i_7] [i_11] [i_12]))) | (var_16)));
                            arr_44 [i_5] [i_7] [i_5] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_20 [i_7] [i_13])), (((((unsigned int) 3373267616129646181LL)) >> (((long long int) (_Bool)1))))));
                            var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_17 [i_12])))) ? (((4227923986U) << (((4134031258U) - (4134031248U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-3257)) + (((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-19461))))))))));
                        }
                    } 
                } 
            }
            for (short i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
            {
                var_35 |= ((/* implicit */_Bool) (~(1657209378U)));
                var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) << (((((/* implicit */int) arr_32 [i_5] [i_14])) + (19731)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (2302653240U)));
            }
        }
        arr_48 [i_5] = ((/* implicit */_Bool) ((short) arr_38 [i_5] [i_5] [(short)14] [i_5]));
    }
    var_37 -= ((/* implicit */int) var_6);
}
