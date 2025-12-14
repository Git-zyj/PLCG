/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240495
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
    var_14 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)62))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((short)10320), (((/* implicit */short) arr_2 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), ((unsigned short)63488)));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)-9)))) / (var_11)));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (262143LL)))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) (unsigned char)29))));
                        var_19 *= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)29))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-7016)))) : (((var_6) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)194)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) ((min((var_2), (((/* implicit */unsigned long long int) (unsigned short)425)))) * (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (short)-25582)))), (((((/* implicit */int) arr_9 [i_4] [i_2] [i_1] [i_0])) / (((/* implicit */int) (_Bool)1)))))))));
                        var_22 = ((/* implicit */unsigned short) (signed char)-15);
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) 588690951);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))));
                            var_25 = ((/* implicit */_Bool) ((arr_1 [i_0 + 1]) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 22; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) ((var_4) % (((/* implicit */long long int) ((/* implicit */int) ((signed char) 3718618667U))))));
                            arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_7 + 2])) + (((/* implicit */int) var_7))));
                        }
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (+(var_11))))));
                    }
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_13))));
                }
            } 
        } 
        arr_24 [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) (short)29037)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)11711)))))));
        var_29 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)56674)) % (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (short)-11704))))));
    }
    for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 1) 
    {
        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((/* implicit */int) ((max((11590207654563067118ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8] [i_8 - 3] [i_8] [i_8])))))))))));
        var_31 = ((/* implicit */int) min((var_31), (arr_11 [i_8] [i_8] [(_Bool)1] [i_8])));
        arr_29 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))) ? (((((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_8 - 2] [i_8])) ? (15420526290051647660ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_8] [i_8 - 2] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5401369185022426048ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-754)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8 - 1] [i_8 - 2]))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_4))))))));
        arr_30 [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5401369185022426066ULL)) ? (((/* implicit */unsigned long long int) -3074194576050017468LL)) : (7587408592385515130ULL)))) ? (((5401369185022426066ULL) & (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) 3812195708U)))))))), (((/* implicit */unsigned long long int) (signed char)124))));
        /* LoopNest 2 */
        for (long long int i_9 = 2; i_9 < 13; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                {
                    arr_35 [i_8] [i_9] [i_9] = ((/* implicit */_Bool) ((long long int) (+(var_11))));
                    var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (((!(((/* implicit */_Bool) 798664350U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9] [i_10])))))))))));
                    var_33 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (short)-29024)) : (((/* implicit */int) (unsigned char)235)))) + (2147483647))) >> (((arr_21 [i_8] [i_8] [i_8] [i_8] [i_8 + 2]) - (2271787851U)))));
                }
            } 
        } 
    }
}
