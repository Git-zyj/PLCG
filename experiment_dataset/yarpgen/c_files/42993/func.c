/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42993
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_0))));
    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)28543)) != (((/* implicit */int) (unsigned short)8608)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((4U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
        arr_2 [i_0] [i_0 - 4] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (4498831072371343240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))));
        var_23 += ((/* implicit */int) arr_0 [i_0 - 3]);
        var_24 &= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)19))));
        var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_11))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [15U])) ? (((/* implicit */int) arr_1 [i_0] [19])) : (((/* implicit */int) (short)23678))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_15 [i_1] [i_2] [i_1] [i_4] [4] = ((/* implicit */unsigned int) (signed char)-19);
                            arr_16 [i_1] [i_2] [i_3] [(short)8] [i_1] [i_1] = ((int) 4147604614715196059ULL);
                            var_26 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-19))));
                        }
                    } 
                } 
            } 
            var_27 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > (((min((14893520728455882117ULL), (((/* implicit */unsigned long long int) (signed char)18)))) >> (((((/* implicit */long long int) var_16)) / (arr_13 [(unsigned short)8] [(unsigned short)8] [i_1] [(signed char)6])))))));
            var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) / (((/* implicit */int) arr_5 [i_2 + 1] [i_1]))))));
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [(signed char)2])) > (((((/* implicit */_Bool) arr_5 [i_1] [(signed char)14])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)196)), (var_18)))) : (min((var_14), (((/* implicit */int) (unsigned short)65535)))))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_21 [i_1] [i_6] = ((/* implicit */short) 255174002);
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (17588532706184048051ULL)));
            arr_22 [i_1] = (+(((/* implicit */int) (unsigned char)198)));
        }
        var_31 = ((/* implicit */int) (_Bool)0);
        var_32 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (unsigned char)43)), (14341892026479835179ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)127)), (255174002))))));
    }
    var_33 = ((/* implicit */unsigned short) var_14);
}
