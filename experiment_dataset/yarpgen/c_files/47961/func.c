/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47961
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((-2332349436651174821LL) / (min((-2332349436651174820LL), (((/* implicit */long long int) (unsigned short)28926)))))), (((/* implicit */long long int) (signed char)60)))))));
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 1802602596U)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36607))) : (var_12))))))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)28926)), (max((((/* implicit */long long int) 4294967289U)), (139611588448485376LL))))))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) (~(1802602599U)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((-2332349436651174829LL) < (-2332349436651174815LL)));
                                arr_17 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_10);
                                var_18 = ((/* implicit */short) ((unsigned char) var_12));
                                arr_18 [i_3] [(short)17] [i_4 - 1] [i_3] [i_0] [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -139611588448485376LL)) ? (-139611588448485408LL) : (((/* implicit */long long int) 4294967276U))))) && (((/* implicit */_Bool) 675212432U)));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(-139611588448485376LL))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_13))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 403764244U)) ? (2147483647) : (((/* implicit */int) var_6))));
                        arr_22 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2492364705U)) ? (1048320U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 23; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28933)))))));
                        arr_26 [i_0 + 2] [(signed char)22] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)60963))));
                    }
                    for (short i_8 = 2; i_8 < 23; i_8 += 4) 
                    {
                        arr_30 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (4142395598U)));
                        var_23 = ((2492364700U) * (var_2));
                        arr_31 [i_0] [i_1] [i_1] [(short)14] [i_3] [i_8] = ((/* implicit */int) (-(var_10)));
                    }
                }
                /* vectorizable */
                for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((short) 1968749083U));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23732)) ? (2147483647) : (((/* implicit */int) var_6)))))));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 139611588448485382LL)) ? (((((/* implicit */int) var_0)) >> (((3619754856U) - (3619754856U))))) : (((/* implicit */int) (unsigned char)204))));
                            }
                        } 
                    } 
                    arr_38 [i_9] [i_1] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
                }
                arr_39 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)4527);
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (max((((((/* implicit */_Bool) (short)768)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21652))) : (3920319303U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2332349436651174796LL)) && (((/* implicit */_Bool) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((min(((short)-16876), (var_7))), (min((((/* implicit */short) (_Bool)0)), ((short)-11691)))))))));
}
