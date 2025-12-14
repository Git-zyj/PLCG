/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41404
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
    var_16 += ((/* implicit */unsigned char) (_Bool)0);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_10);
        var_17 = ((/* implicit */unsigned char) (short)2400);
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 16; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                arr_9 [i_1] = ((/* implicit */long long int) var_10);
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)40))));
                arr_10 [i_0] [i_0] [i_1] [i_0] = max((((long long int) ((-729592310) & (((/* implicit */int) (signed char)-61))))), (((/* implicit */long long int) ((int) ((unsigned long long int) 2875378226U)))));
                var_19 = ((/* implicit */_Bool) ((int) min((0LL), (((/* implicit */long long int) var_11)))));
            }
            arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) (short)10430);
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (3974826019U))))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]))));
        }
        for (short i_3 = 3; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_22 = 7049443392359267721LL;
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_4 [i_0] [i_3])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_13 [i_3]) < (((/* implicit */unsigned long long int) 729592309)))))))) : (max((((unsigned long long int) arr_5 [i_3] [i_3] [i_3])), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) < (arr_4 [i_3] [i_0]))))))));
            arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_3))), (((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))), ((short)25081)));
            var_24 = min((min(((-(var_12))), (((/* implicit */unsigned long long int) ((_Bool) var_12))))), (((/* implicit */unsigned long long int) var_9)));
        }
        for (short i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65531))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) < (arr_8 [i_0] [i_0]))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)25420)) : (((/* implicit */int) (_Bool)1)))))) : ((~((-(((/* implicit */int) (_Bool)1))))))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (short)7750))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_4 - 2])) < (((/* implicit */int) (signed char)-46))))) : ((+(arr_16 [i_0] [i_4 + 2] [i_4 + 2]))))))));
            var_27 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_4 + 2] [i_4])) ? (arr_7 [i_4 - 1] [i_0] [i_4]) : (arr_7 [i_4 - 3] [i_4] [i_4]))));
        }
    }
    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((arr_16 [i_5] [i_5] [i_5]) < (((/* implicit */int) var_15))))), ((signed char)111)))), (var_3)));
        var_28 = min((((/* implicit */short) (_Bool)1)), ((short)8361));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)192);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            arr_27 [i_6] [i_6] = ((/* implicit */int) (-(arr_25 [i_5] [i_6] [i_5])));
            var_29 *= ((signed char) arr_0 [i_6] [i_5]);
        }
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_0)) : (((int) var_8))))))));
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_12))))) : (((/* implicit */int) (signed char)-96))));
    /* LoopNest 3 */
    for (long long int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (unsigned char)44))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (int i_11 = 2; i_11 < 22; i_11 += 2) 
                        {
                            {
                                var_33 |= ((/* implicit */signed char) min((min((((/* implicit */int) (unsigned char)47)), ((~(((/* implicit */int) arr_35 [i_7] [i_8])))))), (min((((/* implicit */int) ((signed char) var_4))), ((+(((/* implicit */int) (unsigned char)250))))))));
                                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((unsigned long long int) -729592320)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */long long int) ((_Bool) (short)-18695));
}
