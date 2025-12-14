/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246253
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) var_12)))))));
    var_20 *= ((((/* implicit */int) ((unsigned char) ((unsigned char) 2711027622U)))) < ((~(((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))));
    var_21 = (signed char)16;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_22 -= ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [(unsigned short)2])) : (1594268749))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                var_23 = ((/* implicit */signed char) ((((unsigned int) (short)-27942)) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1594268763)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (-1594268760) : (arr_5 [i_0] [i_1] [i_2]))) : ((+(((/* implicit */int) (short)27949)))))))));
                var_24 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (short)-4422)))) << (((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (4928248603053510913ULL))) - (18446744073291335987ULL)))));
            }
        }
        arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned char) var_17))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [(unsigned short)0])))))) ? (-8336788948249472631LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)27951))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (max((((((/* implicit */_Bool) (short)-27917)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (min((((/* implicit */unsigned int) arr_6 [i_0] [i_0])), (1022U))))), (((/* implicit */unsigned int) 876238247))))));
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3 + 1] [i_3 + 1])) ? (5195555634462463572LL) : (((/* implicit */long long int) arr_5 [i_3 - 2] [i_3 + 1] [i_3 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            arr_12 [i_0] [i_3] = (unsigned char)7;
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_11 [i_0]))));
        }
        for (unsigned char i_4 = 4; i_4 < 8; i_4 += 1) 
        {
            arr_17 [i_0] [i_4] = ((/* implicit */unsigned char) (+(((long long int) ((unsigned char) var_3)))));
            arr_18 [i_0] [i_4] = ((/* implicit */unsigned char) arr_6 [i_0] [i_4]);
            arr_19 [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)40434));
        }
    }
    for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
    {
        arr_22 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (1021316158) : (2147483631)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_21 [i_5])))) : (min((((/* implicit */long long int) -1575583993)), (arr_21 [i_5 + 1]))));
        arr_23 [6LL] |= ((/* implicit */_Bool) (-((-((~(((/* implicit */int) var_11))))))));
        arr_24 [i_5] = ((/* implicit */signed char) (unsigned char)223);
    }
}
