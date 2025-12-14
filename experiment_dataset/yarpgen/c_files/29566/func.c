/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29566
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [i_0 - 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-28)))))) : (9223372036854775778LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0 + 2]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */long long int) arr_2 [i_0] [i_0])) % (((arr_0 [i_0]) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) - (12543)))))))));
        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (arr_2 [i_0 + 3] [i_0 - 2]) : (((/* implicit */unsigned int) -805410082))))));
    }
    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(-9223372036854775770LL))), (((/* implicit */long long int) ((_Bool) var_14)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) min(((unsigned char)4), ((unsigned char)199)))), (max(((unsigned short)10688), (((/* implicit */unsigned short) (_Bool)1))))))) : (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)512))))) & ((+(((/* implicit */int) (unsigned char)164))))))));
    var_20 = ((unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_0)))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            {
                arr_10 [i_1] = ((((/* implicit */int) (short)16320)) >= (((/* implicit */int) (_Bool)1)));
                arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) ^ (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)(-127 - 1))), (var_15)))) ? (((((/* implicit */_Bool) 4667496218964466230LL)) ? (((/* implicit */long long int) 1058094683)) : (var_8))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535)))))))));
                var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [(_Bool)1] [i_1])) & (((/* implicit */int) arr_4 [i_1] [18LL]))))) ? ((+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)36))) : (arr_7 [i_1] [i_2] [16LL]))))) : (((/* implicit */long long int) (~(0U))))));
                var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((18446744073709551612ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15229)))))) ? ((-(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28095))) : (-4186361724024926717LL))))) : (((/* implicit */long long int) max((((arr_9 [8U]) % (((/* implicit */int) var_7)))), (((((/* implicit */int) arr_8 [i_1] [4LL] [i_2])) % (((/* implicit */int) (signed char)-2)))))))));
                arr_12 [(short)8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((var_3) << (((1901659109786185846LL) - (1901659109786185845LL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [(_Bool)1])) >> (((((/* implicit */int) (short)-910)) + (915)))))) > (((unsigned int) arr_4 [(signed char)16] [(signed char)16])))))) : ((+(((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7))) : (5U)))))));
            }
        } 
    } 
}
