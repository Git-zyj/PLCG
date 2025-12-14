/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37386
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [7ULL] = ((/* implicit */unsigned short) var_14);
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_3))))));
    }
    for (signed char i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) var_6);
        arr_7 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) var_2)), (arr_11 [i_2] [i_3] [i_6]))) + (var_13)));
                                arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((((_Bool)0) ? (arr_10 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) max((var_16), (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_3))))))) : (((unsigned int) max((((/* implicit */unsigned int) (signed char)122)), (var_4))))));
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_15 [i_3] [i_3])) >> (((((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [i_5] [i_6] [i_6])) - (39098)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_4] [i_5] [i_2] [i_2] [i_2])) ? (897566836U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                                arr_21 [i_2] = ((/* implicit */int) (-((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_12 [i_2] [12U] [i_4])))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [(signed char)4] [i_3] [i_4])) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_14 [9U] [i_2] [(signed char)16] [(_Bool)1] [(_Bool)1] [i_4])) % (((/* implicit */int) (_Bool)1))))))) : (var_8)));
                    arr_23 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_17 [i_4] [i_3])) ? (var_6) : (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [i_4])))), (((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    arr_24 [i_4] [i_3] [i_2] = (+(((/* implicit */int) (short)-20271)));
                }
            } 
        } 
        var_21 -= ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) var_4)))));
        arr_25 [i_2] [i_2] = ((/* implicit */_Bool) 3397400460U);
    }
    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 4) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
        arr_29 [i_7] [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((((arr_18 [(_Bool)1] [i_7] [i_7 - 3] [i_7] [i_7] [i_7] [i_7]) << (((((/* implicit */int) (signed char)116)) - (112))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (var_15))))))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 4; i_8 < 18; i_8 += 1) 
        {
            arr_32 [i_7] [i_7] = ((((((/* implicit */_Bool) arr_14 [i_7] [i_8] [i_7] [i_7 - 1] [i_8 - 2] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) / (arr_19 [i_7 - 2] [i_7] [i_7] [i_8 - 1] [i_8] [i_8])))) : (((arr_9 [i_7]) - (((/* implicit */unsigned long long int) 2860673731U)))))) - (((/* implicit */unsigned long long int) (((((_Bool)1) && (((/* implicit */_Bool) var_8)))) ? ((-(((/* implicit */int) (signed char)6)))) : ((-(((/* implicit */int) arr_13 [i_7] [i_7] [(unsigned short)13]))))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-14216)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))))))) >> (((unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) (short)14231)))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6756485184757958297ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (1815819472U)))) ? (1815819472U) : (var_4))))));
        }
    }
    var_24 = ((/* implicit */signed char) var_5);
    var_25 = max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (-(var_16)))) : (max((((/* implicit */unsigned int) (signed char)-81)), (var_8))))), (((((/* implicit */_Bool) max((var_12), (var_12)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (1434293565U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_9))))))));
}
