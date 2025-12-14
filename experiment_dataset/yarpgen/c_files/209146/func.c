/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209146
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = min((var_7), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)254)))) ? (8631704966620420819LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) - (((((/* implicit */_Bool) (~(-4998558567676391973LL)))) ? (((/* implicit */unsigned long long int) 7631062573492056600LL)) : (min((((/* implicit */unsigned long long int) -15LL)), (var_1))))))))));
                        arr_10 [22LL] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2505866891U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-530))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1607934299820226062LL))))), (min((16902611317789524915ULL), (((/* implicit */unsigned long long int) -5LL))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2 + 3] [14LL] &= ((((/* implicit */_Bool) ((short) var_7))) ? (((var_4) | (var_10))) : ((~(var_7))));
                            var_16 = ((/* implicit */unsigned int) (+(((long long int) var_6))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_14)) + (13365359823744629884ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13))))));
                            var_18 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_14)))));
                            var_19 = ((/* implicit */long long int) (+(((unsigned int) var_5))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) & (((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)1536)) - (1489)))))));
                            var_21 = (-(((((/* implicit */_Bool) var_6)) ? (0LL) : (((/* implicit */long long int) var_6)))));
                        }
                        var_22 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((var_10) & (var_10)))), (var_8)))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_23 = (~(var_14));
                        var_24 |= var_4;
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 4; i_8 < 24; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((-1607934299820226062LL) > (1563214487050238633LL)))), ((-(var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_3), ((unsigned char)243)))) - (((/* implicit */int) ((((/* implicit */_Bool) 2270999218500127502LL)) && (((/* implicit */_Bool) var_3)))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), ((~(var_8)))))));
                            var_26 = (~(((long long int) min((((/* implicit */long long int) 808748081U)), (7159631722590260323LL)))));
                            var_27 ^= ((/* implicit */long long int) (((+(min((var_7), ((-9223372036854775807LL - 1LL)))))) < ((-(((((/* implicit */_Bool) (unsigned char)159)) ? (3386699651886029076LL) : (var_7)))))));
                        }
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) -5181036653390177860LL)) || (((/* implicit */_Bool) 295676071725672849LL))))))))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)-24056), (((/* implicit */short) ((-5320726362080905211LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))) * (((/* implicit */int) ((short) (-(-16LL))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_12)))))))));
                        var_31 = ((/* implicit */short) -13LL);
                        var_32 *= ((/* implicit */unsigned long long int) var_7);
                    }
                    var_33 = ((/* implicit */long long int) max((var_33), (((long long int) (-(((((-3434291015253867202LL) + (9223372036854775807LL))) >> (((var_8) - (357415410404191875ULL))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_10 = 3; i_10 < 24; i_10 += 3) 
                    {
                        var_34 = ((((long long int) 1138157747781171871LL)) / (((288230376143323136LL) % (var_11))));
                        var_35 ^= (+(((long long int) var_12)));
                        var_36 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) / (((unsigned int) var_3))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8619181047034660646LL))))), (((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                        var_38 = ((/* implicit */long long int) max((var_38), (var_10)));
                    }
                    var_39 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3117172261U)))))) | (min((((/* implicit */long long int) var_3)), (4611686018427387904LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_2))))));
                }
                for (short i_12 = 3; i_12 < 21; i_12 += 3) 
                {
                    var_40 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((-7290846785158712562LL), (4308294249901227900LL))) - (min((((/* implicit */long long int) (short)-9587)), (0LL)))))), (min((((unsigned long long int) (short)-15178)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -609499081881294120LL)) || (((/* implicit */_Bool) var_0)))))))));
                    var_41 = ((/* implicit */unsigned long long int) ((3911384579800122595LL) >= (281474976710655LL)));
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_0))));
                                var_43 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                var_44 ^= ((/* implicit */short) (-(((/* implicit */int) ((var_0) == (var_0))))));
                            }
                        } 
                    } 
                    arr_49 [i_0] [i_1] [i_13] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)144)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_0)) : (var_10))))));
                    var_45 *= ((/* implicit */short) var_4);
                }
            }
        } 
    } 
    var_46 |= (-(((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)21219))))) ^ (var_11))));
}
