/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236282
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 |= ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 2]))) == (0U))) ? ((-(8U))) : (((((/* implicit */_Bool) 4294967295U)) ? (4294967287U) : (0U))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9617)) ? (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (unsigned short)58520)))) : (((/* implicit */int) (short)2047))))) ? (((/* implicit */int) (short)-253)) : (((/* implicit */int) arr_3 [i_1] [i_1])));
                var_21 += ((/* implicit */unsigned long long int) ((((8336525869649579739LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-2047))))) ? (((/* implicit */int) (short)2047)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (2195072207U)))) ? (((/* implicit */int) (signed char)-91)) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)33))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (4294967270U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))) ? (((/* implicit */unsigned long long int) -133967391)) : (min((5740065752897253493ULL), (((/* implicit */unsigned long long int) 0U))))))) ? (((/* implicit */unsigned long long int) 2068219297109099525LL)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -133967383)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26525)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2060)) ? (((/* implicit */long long int) 25U)) : (2068219297109099525LL)))) : (1090715534753792ULL)))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (7006138069174105684ULL) : (13168916169932339417ULL)))) ? (1088990020) : (((/* implicit */int) (signed char)15))));
                            arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((1819095201), (((/* implicit */int) (short)10828)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = var_14;
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min((2099895080U), (((/* implicit */unsigned int) (short)4856)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((7739686947055240059LL) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))) : (((((/* implicit */_Bool) 12706678320812298123ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2068219297109099506LL)))));
    var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13592357780314651845ULL)) ? (7739686947055240044LL) : (2068219297109099525LL)));
}
