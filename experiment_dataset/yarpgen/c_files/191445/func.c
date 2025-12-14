/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191445
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
    var_13 = ((/* implicit */_Bool) (unsigned short)15);
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56348))))))) ? (var_11) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) == (4227858432U)))), (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)72)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            arr_6 [(_Bool)1] = ((/* implicit */unsigned short) var_12);
            arr_7 [i_0] [i_0 - 2] [i_0] = ((/* implicit */unsigned int) (unsigned char)130);
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_15 &= ((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 - 1]);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) var_5);
                            arr_18 [i_2] = ((/* implicit */int) max(((~(arr_1 [i_0 - 3] [i_0]))), (((/* implicit */unsigned int) (unsigned char)136))));
                            arr_19 [i_0] [13LL] [i_0] [i_0 + 1] [i_0] [i_0 - 3] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 8851801463284668439LL)), (4147760378372869825ULL)))) && (((/* implicit */_Bool) arr_5 [i_3] [i_0 - 1]))));
                            var_17 = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) arr_14 [i_0] [i_3]);
            }
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                arr_23 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) (_Bool)1))))))) - ((-(((/* implicit */int) (_Bool)1))))));
                arr_24 [i_0] [i_2] [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_10 [i_0 + 1])), (max((((((/* implicit */_Bool) 588887028U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1306199675U))), (max((1U), (((/* implicit */unsigned int) (unsigned short)3731))))))));
                var_18 = ((/* implicit */long long int) max((var_18), (min((-2941720706488205546LL), (((/* implicit */long long int) 1353200216))))));
                arr_25 [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_0 - 2])) : (min((min((arr_14 [i_2] [i_2]), (((/* implicit */int) (unsigned char)15)))), (((((/* implicit */int) (_Bool)1)) << (((var_7) + (7256680901121882176LL)))))))));
                var_19 += ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44225)) ? (((/* implicit */int) arr_22 [i_0 - 3] [i_0] [i_0 - 1])) : (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) -1)))))))), (((arr_1 [i_2] [i_0 + 1]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (var_1) : (arr_17 [i_0] [(unsigned short)10]))))))));
            }
            arr_26 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)6))))) ? (1348118459301897999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9188)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (4294967295U)));
        }
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) arr_15 [(signed char)12] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 3]);
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_30 [i_7] = ((min((((arr_28 [i_7]) ? (var_8) : (1348118459301898011ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)199)) & (((/* implicit */int) (unsigned short)16878))))))) <= (((/* implicit */unsigned long long int) max((3695743420U), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)18280)))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (141212924850949455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))))))));
    }
}
