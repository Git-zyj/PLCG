/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211168
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
    var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))) >= (2950412937167482430ULL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) (+(32767)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (1159127129928888226ULL)))))))));
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44294))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) (+(-9223372036854775794LL)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        arr_13 [i_0 + 3] [i_1 + 1] [i_2] [i_3] = ((/* implicit */unsigned char) (unsigned short)11194);
                        arr_14 [i_0 + 1] [i_1 + 2] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [(_Bool)1] [i_2] [i_2 - 1])) : (((/* implicit */int) (_Bool)1))))));
                        var_20 ^= ((/* implicit */_Bool) ((unsigned char) 4651324203310664175ULL));
                        var_21 -= ((unsigned long long int) (+(((/* implicit */int) (unsigned char)95))));
                        arr_15 [12] [i_2] [i_2] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 536346624U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (8772005456859625963LL)));
                        arr_20 [i_4] [i_2] [i_2] [14ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 2]))) >= (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))))));
                        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) 1099478073344ULL)))))))), (((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((arr_6 [i_2]) ? (((/* implicit */unsigned long long int) var_15)) : (var_2)))))));
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)255)) ? (min((min((((/* implicit */unsigned long long int) (unsigned char)3)), (17244759578108001282ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1956849738U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)85)) >> ((-(((/* implicit */int) var_12)))))))));
                    }
                    arr_21 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) 11349059259808399093ULL);
                    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_2)))) ? (((/* implicit */int) (unsigned short)20658)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
