/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215388
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_0 + 1]));
        var_21 = ((/* implicit */long long int) max((var_21), (((long long int) var_1))));
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_6 [i_3 + 1] [i_4] [i_4]), (arr_6 [i_3 - 1] [i_3 - 1] [i_3])))) ? (((/* implicit */int) (((+(((/* implicit */int) arr_0 [i_3] [i_1 + 1])))) <= (((/* implicit */int) arr_0 [i_3] [i_3]))))) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_18))))), (((signed char) var_3)))))));
                        arr_14 [i_3] [i_2 + 1] [i_3 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 1])) + (((/* implicit */int) var_14)))) + (((((/* implicit */int) var_17)) - (((/* implicit */int) arr_5 [i_3 - 1] [i_3 + 1]))))));
                        var_23 = ((/* implicit */int) min((((min((9223372036854775807LL), (var_13))) / (((/* implicit */long long int) ((/* implicit */int) (short)-32666))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))));
                        var_24 = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                        arr_15 [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_3] [i_4] = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)237))));
            arr_19 [8U] |= ((/* implicit */long long int) ((unsigned int) var_1));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40338))) : (546564039U)));
            var_26 = ((/* implicit */long long int) var_16);
            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((1073741823U) >> (((var_11) + (7539490830553584202LL))))))));
            var_28 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_8 [i_1] [i_6])))))));
        }
        for (short i_7 = 4; i_7 < 22; i_7 += 2) 
        {
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3286641311U)) ? (7065051663091890234LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) ((arr_9 [i_7] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) * (((((/* implicit */_Bool) ((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_7] [i_7] [i_7 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (1161578583616383572LL)))) : ((+(var_8))))))))));
            var_30 = ((/* implicit */int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_8))))))));
        }
        var_31 *= ((/* implicit */unsigned short) min((((int) 4379791557142863597ULL)), (((/* implicit */int) (unsigned short)19759))));
        var_32 ^= ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) var_16)), (var_17))));
    }
    var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
    var_34 = ((/* implicit */unsigned short) var_7);
}
