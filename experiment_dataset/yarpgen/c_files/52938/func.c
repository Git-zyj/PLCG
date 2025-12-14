/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52938
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (var_11)))) >= (((/* implicit */int) min(((unsigned short)20615), (((/* implicit */unsigned short) (_Bool)1)))))))), (var_14)));
    var_18 = ((/* implicit */signed char) max((((unsigned long long int) (~(((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((unsigned char) ((short) (unsigned short)960)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] |= ((/* implicit */unsigned short) ((4616627877816594031LL) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((signed char) var_16)))))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (short i_4 = 1; i_4 < 18; i_4 += 2) 
                            {
                                var_19 &= ((((long long int) (_Bool)1)) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) (unsigned short)65527))));
                                var_21 = ((/* implicit */int) (((~(6638090148149573744LL))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_22 = ((/* implicit */unsigned int) ((int) 1120434415));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                            {
                                arr_19 [(unsigned short)6] [(short)8] [i_2] [i_3] [i_5] [(unsigned short)14] = ((/* implicit */unsigned short) (signed char)106);
                                var_23 = ((((/* implicit */unsigned int) max((var_14), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))) ^ (((unsigned int) ((((/* implicit */int) var_15)) + (((/* implicit */int) (_Bool)1))))));
                            }
                            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                            {
                                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 55562387148593509LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-21)), ((unsigned short)65527)))) : ((((+(((/* implicit */int) (unsigned char)1)))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (13305717727633150120ULL))))))));
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) (unsigned char)247)), ((unsigned short)2040))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_5)), ((unsigned char)255)))))))) <= (min(((-(3125953528490116775ULL))), (((/* implicit */unsigned long long int) var_2)))))))));
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) var_16))), (((unsigned int) 18446744073709551615ULL)))))));
                                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1744)) ? ((~(((/* implicit */int) (short)4)))) : (((/* implicit */int) (unsigned char)80)))))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+(max((55562387148593529LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_10))))))))))));
                            }
                            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                            {
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)153)), (var_8)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-47)), ((unsigned char)98)))))), ((+(((/* implicit */int) ((unsigned char) (unsigned short)17991))))))))));
                                var_30 = ((/* implicit */int) ((((/* implicit */int) (short)9319)) > (((/* implicit */int) (unsigned char)246))));
                                var_31 -= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)-9323)) <= (((/* implicit */int) ((short) var_12))))))));
                            }
                            arr_25 [6U] [i_1 - 3] [6U] [i_3] = ((/* implicit */unsigned char) (((+((~(962607117311725449LL))))) % (-2543066549099814897LL)));
                        }
                    } 
                } 
            }
        } 
    } 
}
