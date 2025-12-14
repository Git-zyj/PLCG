/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206085
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))));
    var_17 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11276))) : (arr_2 [i_1] [i_1])));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_19 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (arr_2 [i_2] [i_1 + 1]) : (arr_2 [i_2] [i_1 + 1])))));
                    arr_6 [i_0] [i_1 - 1] [i_1 - 1] [i_2] |= ((((/* implicit */int) (unsigned short)23596)) / ((~(-1925107639))));
                    arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 13631278564752206700ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1925107663)) ? (1925107663) : (((/* implicit */int) (_Bool)1))))) : (arr_2 [i_1] [i_1 + 2])));
                    arr_8 [i_0] [i_1 + 1] [i_2] [i_1] = ((/* implicit */signed char) ((((-1925107665) & (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_4 [4LL] [i_1 + 2] [i_1] [i_1 - 1]))))));
                }
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    var_20 = ((/* implicit */signed char) ((var_14) - (((unsigned long long int) var_15))));
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */short) 1189553449);
                        arr_15 [i_4] [i_3] [i_3] [i_0] |= ((/* implicit */int) arr_2 [i_3] [i_1 + 1]);
                        var_22 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_1])))));
                        var_23 -= var_15;
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned long long int) arr_11 [i_1 + 3] [i_1 - 1]);
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = max(((+(((/* implicit */int) (signed char)32)))), (((((/* implicit */_Bool) (signed char)95)) ? (((((/* implicit */_Bool) (signed char)-121)) ? (1925107656) : (608523681))) : (max((((/* implicit */int) (signed char)-10)), (arr_5 [i_0] [i_3]))))));
                            var_26 = ((/* implicit */unsigned long long int) ((int) ((arr_10 [i_1 + 3] [i_1 + 2] [i_1 + 2]) * (var_15))));
                        }
                    }
                    arr_21 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-8459)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (3ULL))))))));
                    var_27 = ((/* implicit */_Bool) (((+(var_4))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
                    var_28 = arr_12 [i_3] [7ULL] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_0];
                }
            }
        } 
    } 
}
