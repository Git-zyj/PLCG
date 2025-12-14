/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27614
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
    var_18 = ((/* implicit */unsigned char) 18144909998228614042ULL);
    var_19 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) min(((~(arr_3 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((-1033566804) | (((/* implicit */int) (short)-1306))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))) : (max((arr_0 [i_2 + 3]), (arr_1 [i_2])))));
                arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1033566804) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */int) (short)28475)) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))))) < ((~(2375971994U)))));
            }
            arr_9 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (-3395246992016833668LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_10 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (~(((arr_4 [i_1] [i_1]) & (arr_4 [i_0] [i_0])))));
            var_21 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [i_0] [(unsigned char)10]))), (((((/* implicit */_Bool) var_13)) ? (12599636322061140725ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) > (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) var_4))))));
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            arr_13 [i_0] [i_3] [i_3] = ((/* implicit */int) -3076955510173872250LL);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_17) / (arr_12 [i_0] [i_0] [i_0])))) ? (arr_12 [i_0] [i_3] [i_3]) : (arr_12 [i_0] [i_0] [i_3])));
            arr_14 [i_3] |= ((/* implicit */long long int) ((min((arr_3 [i_3]), (((/* implicit */unsigned long long int) (unsigned char)235)))) | (((/* implicit */unsigned long long int) min(((-(var_17))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_15)))))))));
        }
        var_23 = ((/* implicit */unsigned short) (_Bool)1);
    }
}
