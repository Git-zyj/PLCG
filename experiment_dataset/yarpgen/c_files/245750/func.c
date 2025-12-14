/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245750
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((var_10) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
        var_16 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_7))))));
        arr_5 [i_0] = ((/* implicit */signed char) (-(-1)));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_0))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2 - 3] = ((/* implicit */int) ((((/* implicit */int) (signed char)-7)) < (var_5)));
                    arr_12 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        arr_16 [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)1);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_13))))) ^ (((-4158667015694548834LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7)))))));
                        var_19 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                        var_20 *= ((/* implicit */long long int) ((_Bool) (signed char)63));
                        arr_20 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((-293955549) >= (((/* implicit */int) (unsigned char)225)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_8)))) : (((/* implicit */int) (unsigned char)240))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            arr_23 [i_0] [i_4 + 2] [i_2] [i_0 + 1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) == (((/* implicit */int) (unsigned short)23366))))) << (((((((/* implicit */int) arr_21 [i_0] [(signed char)7] [i_0] [i_4] [i_5 + 3] [i_1] [i_5 + 2])) << (((var_2) + (1972027929603728423LL))))) - (512)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) == (((/* implicit */int) (unsigned short)23366))))) << (((((((((/* implicit */int) arr_21 [i_0] [(signed char)7] [i_0] [i_4] [i_5 + 3] [i_1] [i_5 + 2])) << (((var_2) + (1972027929603728423LL))))) - (512))) + (542))))));
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) ((unsigned char) var_8));
                        arr_29 [i_0] [i_0] [i_0] [(unsigned short)9] [i_0] [i_0 + 2] = ((/* implicit */signed char) ((_Bool) var_11));
                        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_0 + 2] [i_1] [i_2 + 2]))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        arr_33 [i_0] [i_1] [i_1] [i_2] [i_2] = var_1;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_23 = (~(((/* implicit */int) arr_30 [i_0] [i_7] [(_Bool)1] [i_0] [i_8] [i_8])));
                            arr_37 [(_Bool)1] [8] [i_1] [i_1] [i_0] [i_7] [i_8] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_26 [i_0 - 1] [i_0] [i_2 - 1] [i_7] [i_8 + 1])) : (((/* implicit */int) arr_26 [i_8] [i_0] [i_2] [i_0] [i_1]))));
                            var_24 = ((/* implicit */_Bool) ((signed char) 293955556));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-25)) ? ((-(3076323959U))) : (var_10)));
                            arr_41 [i_0] [i_0] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(-1082990673)));
                            arr_43 [i_0] [i_1] [i_2 - 1] [i_7] [i_0] = ((/* implicit */_Bool) arr_13 [i_0] [i_9] [i_2 + 2] [i_7 + 1]);
                        }
                        arr_44 [i_0] [i_1] [i_1] [i_2 - 1] [i_7 + 2] [i_7 + 1] = ((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0]));
                        arr_45 [i_0] [1ULL] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + ((-(var_11))));
                    }
                    arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 3076323959U))))))));
}
