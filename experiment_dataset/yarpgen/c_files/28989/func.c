/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28989
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
    for (int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) ((short) ((unsigned char) var_5)))) > (((/* implicit */int) (((~(((/* implicit */int) var_2)))) > (max((var_11), (var_18))))))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_10))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [(unsigned short)8])) : (var_12)))))) ? (((/* implicit */int) ((arr_5 [3ULL]) > (arr_0 [7LL] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 3] [i_0 + 1])))))))));
                    arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)13408)), (13757164232398747136ULL))))));
                    arr_7 [i_0 - 3] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)95))))))) : ((-(max((var_15), (((/* implicit */long long int) arr_4 [i_0] [i_0 - 2]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((((signed char) max((arr_5 [7]), (((/* implicit */int) arr_2 [i_0] [i_3] [i_2]))))), (((/* implicit */signed char) min((((var_15) > (((/* implicit */long long int) 402653184U)))), (arr_1 [i_2]))))));
                        var_22 = ((/* implicit */unsigned long long int) ((long long int) max(((((_Bool)1) ? (((/* implicit */int) (signed char)-117)) : (32096974))), (((/* implicit */int) ((-795505145) > (((/* implicit */int) var_7))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) min((((/* implicit */long long int) 394074421)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24126))) > (4689579841310804479ULL))))) : (-374417347454917814LL)))));
                        var_23 = ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_2] [i_4] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) var_4))))) ? ((+(max((13480847140490086894ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) ((arr_11 [i_2] [i_4] [i_0]) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_4] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_1] [i_1] [0LL] [4LL] [0LL] [i_1])))) : (((int) arr_10 [i_0 - 1] [(_Bool)1] [i_1] [i_1] [i_2] [i_4])))))));
                        var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) ((var_1) > (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? ((-(((/* implicit */int) (short)-12659)))) : (((/* implicit */int) ((268435455) > (((/* implicit */int) (short)15456)))))))));
                    }
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    var_25 = ((/* implicit */int) (~(18446744073709551615ULL)));
                    var_26 &= ((/* implicit */unsigned int) ((unsigned long long int) (short)-15456));
                    var_27 = ((/* implicit */int) ((((((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 2] [i_0 + 1])) > (((/* implicit */int) arr_15 [i_0 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) : (max((arr_12 [i_0 - 3] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0]), (arr_12 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1] [3ULL])))));
                }
                var_28 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((var_17) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [(unsigned char)2])))))), (arr_10 [i_0] [i_0] [i_1] [(unsigned short)8] [1U] [0LL]))), (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */int) max((arr_1 [i_1]), ((_Bool)0)))))))));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) max((((/* implicit */short) (_Bool)0)), ((short)0))))));
}
