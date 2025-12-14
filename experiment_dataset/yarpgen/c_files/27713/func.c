/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27713
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_2 + 2] [i_1] [i_0] = var_9;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            var_16 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */unsigned long long int) 216976420)) / (var_11))))));
                            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)11040);
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((max((max((((/* implicit */int) var_7)), (var_6))), (((var_3) / (var_6))))) / (((/* implicit */int) ((signed char) (signed char)65)))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) min((((int) (-(((/* implicit */int) (signed char)-82))))), (((/* implicit */int) (_Bool)1))));
                            arr_20 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_5] [i_0] = ((/* implicit */long long int) max((min((4003668423691367318ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (signed char)-70))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            arr_25 [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) < (((/* implicit */int) (signed char)127))));
                        }
                        arr_26 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */int) var_14);
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (((~(((/* implicit */int) (signed char)60)))) - (max((((/* implicit */int) (signed char)78)), (var_2))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 1) 
                    {
                        arr_31 [i_0] [(signed char)15] [i_2 - 1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-77))) ? (((int) (signed char)36)) : (((/* implicit */int) (unsigned short)58955))));
                        var_18 ^= ((/* implicit */signed char) ((((var_13) >> (((((/* implicit */int) (signed char)65)) - (26))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 569729980)) > (3394952919U)))))));
                        arr_32 [i_0] [i_1] [i_1] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)54754))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38733)) ? (var_12) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) (unsigned short)7172)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    }
                    arr_33 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */long long int) -242320683);
                    var_19 *= ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)63)) | (((/* implicit */int) var_15))))), (((unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(1721968241)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                arr_38 [i_8] = ((/* implicit */signed char) var_0);
                arr_39 [i_8] [i_8] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)7172)) / (var_3)))))) / (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65522)) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)33364))) : (((unsigned long long int) (signed char)75))))));
                arr_40 [i_9] [i_8] = ((_Bool) ((int) 5705509521280991294ULL));
                var_20 &= max((((max((2ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))))), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (signed char)0)))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (12604736625258849861ULL))))) == (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25378))) : (18446744073709551615ULL)))))) >> (((((/* implicit */int) (unsigned short)6580)) - (6570)))));
}
