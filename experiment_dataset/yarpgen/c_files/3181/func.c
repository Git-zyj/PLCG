/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3181
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
    var_18 = ((/* implicit */int) var_15);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7LL)) ? (((/* implicit */long long int) var_16)) : (23LL)))) ? (((18110270544473312952ULL) >> (4LL))) : (((/* implicit */unsigned long long int) (~(-1349876577))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) (unsigned char)13)), (var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_4 = 2; i_4 < 23; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */signed char) var_17);
                                arr_11 [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (1608916970) : (arr_0 [i_3])))) % (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))) : (var_16))))))));
                                var_21 ^= ((/* implicit */_Bool) ((unsigned char) ((max((var_10), (((/* implicit */unsigned long long int) var_0)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14201795635943519516ULL)) ? (2820937664U) : (4294967284U)))))));
                                var_22 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) 2147483647))))))))));
                            }
                            for (unsigned char i_5 = 3; i_5 < 22; i_5 += 2) 
                            {
                                arr_15 [i_0] [i_5] [(signed char)9] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) >> (((2820937638U) - (2820937612U)))))))));
                                arr_16 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 11U)) && (((/* implicit */_Bool) 3296630563833893868LL)))))) : (((/* implicit */int) var_1))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [i_1 - 2] [i_2] [i_6] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) var_7))))) : (var_14)))) ? (arr_6 [i_2 + 3] [i_1 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((var_3) * (((/* implicit */unsigned int) -251406739))))));
                                arr_21 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 3935103224U)) : (-4100763315520112462LL)))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_23 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_2 + 2] [i_1 + 1] [i_1 - 2] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_2 + 3] [i_1] [i_1 - 1] [i_2 + 3])) : (((/* implicit */int) arr_5 [i_2 + 2] [i_1] [i_1 - 2] [i_3]))))) : (((var_11) >> (((((/* implicit */int) arr_5 [i_2 + 1] [i_1 + 1] [i_1 + 1] [i_3])) - (109))))));
                                arr_24 [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -4541320181991874426LL)) ? (var_9) : (2545231874U)))) ? ((((_Bool)1) ? (1277992837U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)124)) / (2147483647))))))));
                                arr_25 [i_0 - 1] [i_3] [i_7] [i_1] [i_7] [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7] [i_3] [i_7] [i_7] [i_1] [i_0])) ? (-2877593812344212645LL) : (var_0)))) ? (max((arr_6 [i_0 + 1] [i_0 + 1] [i_3]), (((/* implicit */unsigned long long int) arr_19 [i_7] [i_3] [i_7] [i_7] [i_1] [i_0 - 1])))) : (((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_1] [i_7] [i_3] [i_1] [i_1])) ? (var_15) : (var_14)))));
                            }
                            var_24 = (unsigned char)10;
                            arr_26 [i_3] [15] [i_2] [i_1 - 1] [(signed char)13] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [22LL] [i_1 - 1] [i_3] [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_19 [i_3] [i_2] [i_3] [i_3] [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-3296630563833893869LL)))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) 1LL)), (((((/* implicit */_Bool) -5290899224988469127LL)) ? (11997046917004129040ULL) : (((/* implicit */unsigned long long int) -3596142306616783404LL)))))) >> (((((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_1] [i_1 + 1] [i_0 - 1] [i_2 + 1])) ? (-5290899224988469154LL) : (((/* implicit */long long int) arr_18 [i_0 + 1] [i_0 - 1] [i_1] [i_1 - 1] [i_2 + 3] [i_2 + 1] [i_2 + 2])))) + (5290899224988469186LL))))))));
                            var_26 ^= ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_27 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) 3008867269U)))) || (((_Bool) ((((/* implicit */_Bool) 1292126532)) ? (5786392484547699978LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    var_28 ^= ((/* implicit */int) (~(((long long int) 1346558147491126567LL))));
                }
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) -9104871798751827515LL)))) % (arr_27 [i_1] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) ((((unsigned int) (signed char)32)) >> (((var_11) - (2283934779U)))));
    var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 14152960776672866123ULL))));
}
