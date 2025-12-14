/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33839
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_5))))));
    var_12 = ((/* implicit */unsigned char) 1144270517);
    var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_4)), (min((((((/* implicit */_Bool) 15795115071184406575ULL)) ? (2651629002525145066ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_0 [i_0 + 1])))) ? (max((3731285586028104322LL), (((/* implicit */long long int) arr_0 [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0 + 1]) != (((/* implicit */int) var_1))))))));
                    var_15 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)9])) ? (arr_0 [2LL]) : (((/* implicit */int) (short)-1))))), ((-(2651629002525145066ULL)))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)47491)))) : (((/* implicit */int) min(((short)-12318), (((/* implicit */short) (unsigned char)144)))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_3] = ((/* implicit */long long int) min((min((arr_1 [i_0 + 1] [i_3]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))) * (11ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)3072)))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30))) : (72057593903710208LL))))));
                    var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)3423))))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)9641)), (arr_5 [i_0 + 1] [i_1])))) ? (2226354618U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32676)))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (-1419006760) : (-2147483639)))), (((((/* implicit */_Bool) (unsigned short)18045)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))))) < (((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))) + (2147483647))) << (min((8191U), (((/* implicit */unsigned int) arr_9 [i_1]))))))))))));
                    var_19 = ((/* implicit */long long int) min(((short)-24502), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_1])) < (((/* implicit */int) (unsigned short)60176)))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) (unsigned short)31893);
                            var_21 = ((/* implicit */int) 0LL);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 5383899170060000218LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_5] [i_0 + 1]) <= (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) % (arr_7 [i_0 + 1] [i_0 + 1] [i_5])))) : (((14673206739288604062ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5])))))));
                            var_23 &= ((/* implicit */short) ((arr_9 [i_1]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_5 [i_5] [8U])))) ? ((((_Bool)0) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) 16U)))) : (((/* implicit */unsigned long long int) var_2))));
                        }
                    } 
                } 
            }
        } 
    } 
}
