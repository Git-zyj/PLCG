/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249419
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
    var_14 -= min((((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_13))))), (var_5));
    var_15 += ((/* implicit */signed char) var_4);
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_5))));
    var_17 = ((/* implicit */signed char) ((short) ((1704679379U) << (((((/* implicit */int) (short)3205)) - (3187))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [4] [4])) < (min((arr_0 [i_0] [i_0 - 2]), (var_9))))))));
        var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2])))), (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_1 [i_0] [i_0 - 1])))))));
        var_20 -= ((/* implicit */short) max((((((/* implicit */int) var_5)) - (((((/* implicit */int) var_2)) >> (((var_9) + (1523990037))))))), (arr_0 [(unsigned short)9] [i_0 - 1])));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((long long int) var_6)) << (((((/* implicit */int) ((short) var_13))) + (26320))))))));
            arr_9 [i_1] [i_1 + 2] [i_1] = ((/* implicit */int) arr_5 [i_1 - 1] [i_2]);
        }
        arr_10 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (+(var_4))))) ? (((((((/* implicit */unsigned long long int) var_10)) != (arr_5 [i_1] [(unsigned short)9]))) ? (((3006088842U) / (2590287909U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) : (((/* implicit */unsigned int) arr_7 [i_1] [6LL] [6LL]))));
        var_22 += ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (max((var_6), (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2]))))));
        var_23 = max((1704679369U), (((/* implicit */unsigned int) (signed char)-1)));
        /* LoopNest 3 */
        for (unsigned short i_3 = 3; i_3 < 11; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (var_2)));
                        var_25 |= ((/* implicit */long long int) (+((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))));
                        arr_21 [i_1 - 1] [(short)6] [i_3 + 1] [i_5] = ((/* implicit */signed char) (~(min((((2590287916U) | (((/* implicit */unsigned int) 1374314466)))), (((/* implicit */unsigned int) ((signed char) var_2)))))));
                        arr_22 [i_1 - 2] [i_3] [(signed char)13] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [12ULL] [i_3] [i_4] [i_5])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 12; i_6 += 2) 
    {
        var_26 = ((/* implicit */int) max((var_26), ((+((+(((/* implicit */int) (unsigned short)38400))))))));
        var_27 -= ((/* implicit */short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) arr_24 [i_6 + 1])) : (((/* implicit */int) ((signed char) arr_2 [i_6])))));
    }
}
