/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236837
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
    for (short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_17 = min(((~(arr_3 [i_0 - 2]))), (((/* implicit */long long int) (-(var_11)))));
                var_18 *= min((5416030650247698354LL), (((/* implicit */long long int) ((((long long int) -431740807277448111LL)) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -5416030650247698367LL))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_19 = ((long long int) -4621183073829948742LL);
                    arr_6 [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)8] [9LL] [i_2])) : (((/* implicit */int) (unsigned short)23993)))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 - 1])));
                    arr_7 [5U] [i_1] [i_0] [1U] = (~(arr_2 [i_0 - 2]));
                    arr_8 [i_0 - 2] [i_1] = ((/* implicit */_Bool) 7888860280511658725LL);
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((arr_2 [i_0]) ^ (var_16))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 7888860280511658724LL))))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23975))) : (4294967295U))), (((/* implicit */unsigned int) ((unsigned short) (short)5092)))));
                                var_22 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_4] [i_1] [(signed char)6] [i_4]))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41540))) : (var_6))))), (((/* implicit */unsigned long long int) min((((arr_13 [(_Bool)1] [(_Bool)1] [i_3] [2] [i_4] [(_Bool)1]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) 16777215U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23982))))))))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((_Bool) (~(min((((/* implicit */long long int) arr_15 [i_0 + 1] [i_5] [i_5] [i_0] [(unsigned short)2])), (-17LL)))))))));
                                var_24 = ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4])))))) ^ (((long long int) arr_2 [i_3])))) / (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) 9223372036854775800LL)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_6] [i_0 - 3])), (3336759867U)))) / (((((/* implicit */_Bool) var_13)) ? (arr_14 [i_0 - 4] [i_0 - 4] [i_3] [i_6 + 4] [i_3]) : (var_3)))))) ? (((/* implicit */long long int) min((min((arr_0 [i_0]), (((/* implicit */int) (signed char)-1)))), (arr_0 [i_1])))) : (min((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0] [i_0])), (min((0LL), (((/* implicit */long long int) (unsigned short)25631))))))));
                        arr_20 [i_0] [3U] [3U] [i_6] = ((/* implicit */short) (-(min(((+(((/* implicit */int) (unsigned char)189)))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_15 [i_1] [i_6] [i_3] [i_1] [i_0]))))))));
                        arr_21 [i_0] = ((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) min((arr_9 [i_0 - 1] [6U] [i_0 - 2]), (((/* implicit */unsigned int) var_2))))), (min((-5416030650247698367LL), (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_1 [i_0 - 2]))) ? (((/* implicit */int) arr_15 [i_0] [i_0 - 3] [10U] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) min((arr_5 [8ULL] [i_0 - 4] [8ULL]), (arr_5 [i_0] [i_0 - 3] [i_0]))))));
                }
                var_26 = ((/* implicit */int) min((min((((((/* implicit */_Bool) var_13)) ? (var_6) : (var_8))), (((/* implicit */unsigned long long int) ((14LL) == (((/* implicit */long long int) 4294967283U))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 697849527601498859LL)) ? (((/* implicit */int) (unsigned short)0)) : (arr_0 [i_1])))) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) (unsigned char)49)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((long long int) var_3));
    var_28 = ((/* implicit */int) var_5);
    var_29 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((unsigned short) var_0))) ? (var_10) : (((/* implicit */long long int) 916139964U))))));
    var_30 = ((/* implicit */long long int) var_4);
}
