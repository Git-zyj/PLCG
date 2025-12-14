/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4749
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_12 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-7))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_5 [i_2]) : (arr_5 [i_2])))) || (((/* implicit */_Bool) max((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])))), (((/* implicit */int) (signed char)-18)))))));
                    var_14 += ((unsigned char) (signed char)-7);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [i_2] [i_1 - 1] [i_2 + 3] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))));
                        arr_11 [i_2] [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 1] [i_3 - 2] = (~(((/* implicit */int) (signed char)-1)));
                        arr_12 [i_0] [i_2] [i_2 + 3] = ((/* implicit */unsigned char) ((unsigned int) min((arr_8 [i_2]), (((/* implicit */int) (signed char)-7)))));
                    }
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((max((var_9), (((/* implicit */int) ((((/* implicit */_Bool) -3702282622570547969LL)) || (((/* implicit */_Bool) (signed char)-14))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_7)) : (arr_16 [i_0] [i_1 - 1] [i_1 - 2] [i_1 - 2]))))))))))));
                        arr_17 [i_2] [i_2] [i_2] [i_4 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)14)), ((unsigned char)180)));
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)6)) ? (11635625753873792797ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_17 = arr_4 [i_2];
                        arr_20 [i_2] [i_2 + 2] [i_1 + 2] [i_2] = ((/* implicit */unsigned int) 13213845136836411945ULL);
                        arr_21 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((int) var_2)) - (1310374222)))))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2 + 2] [i_5])) ? (var_0) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_1 + 2] [i_2 + 1] [i_2]))) : (arr_9 [i_5] [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */long long int) ((arr_15 [i_2] [i_1 - 1] [i_2 - 1] [i_5]) ^ (((/* implicit */int) (signed char)-23)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_24 [i_0] [i_2 + 1] [i_2 - 1] [i_2] [i_6 + 1] [i_6 + 1] = ((8257536) * (((/* implicit */int) (_Bool)0)));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (signed char)-3))));
                        var_19 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_2 + 1] [i_6 + 1])) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)5848)))) : (((/* implicit */int) (signed char)41)))), (((/* implicit */int) var_5))));
                        var_20 = ((/* implicit */signed char) arr_6 [i_0 + 1] [i_0 + 1] [i_2 + 2]);
                        arr_25 [i_2 + 2] [i_0] [i_1 - 1] |= ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1 - 2]))) : (arr_1 [i_6 + 1] [i_2 + 3])))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52506))) : (6187958225597837979LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)13031))))));
                    }
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) (((-(3217844112U))) / (((/* implicit */unsigned int) var_9))));
                var_23 |= var_11;
            }
        } 
    } 
    var_24 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((~((+(((/* implicit */int) (signed char)41)))))) : (((/* implicit */int) var_5))));
    var_25 ^= ((/* implicit */unsigned char) var_7);
}
