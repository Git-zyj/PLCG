/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231749
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [10LL] = ((/* implicit */unsigned int) ((arr_3 [i_0 - 2] [i_0 + 2]) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (unsigned short)65535))));
            var_15 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_2 [i_0 - 3])) / (((((/* implicit */unsigned long long int) arr_2 [9LL])) * (7001556604688884133ULL)))));
            var_16 &= ((/* implicit */unsigned char) ((short) arr_1 [12ULL]));
        }
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        arr_14 [i_4] [i_4] |= ((/* implicit */unsigned int) var_4);
                        var_17 = ((/* implicit */unsigned char) 3425010400U);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((1321682839U) == (((/* implicit */unsigned int) ((/* implicit */int) ((1321682839U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                        var_19 = ((long long int) 523776U);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -8LL)) ? (((/* implicit */unsigned int) 924875224)) : (var_12))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_10 [i_0] [i_0 + 3] [i_0 - 1] [i_0 - 3]))));
    }
    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) var_12);
        var_23 = ((/* implicit */signed char) ((unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(var_13)))) : (((((/* implicit */_Bool) -6283295521669890437LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))));
        var_24 *= ((/* implicit */long long int) (-(((((/* implicit */_Bool) 924875245)) ? (((/* implicit */int) (_Bool)1)) : (2147483620)))));
        arr_18 [i_5] = ((/* implicit */unsigned int) -2147483596);
        var_25 = ((/* implicit */unsigned int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1519488909))))))))));
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */_Bool) ((short) (unsigned char)255))) ? (((unsigned int) var_0)) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_27 = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) var_4)))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
}
