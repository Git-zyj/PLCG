/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54131
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
    var_17 |= ((/* implicit */_Bool) ((short) (short)25041));
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 133189233887010972ULL)))) ? (((/* implicit */long long int) -1187878033)) : (var_14)));
    var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) >> (((/* implicit */int) (signed char)26))))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) ^ (min((-2654122540366108471LL), (((/* implicit */long long int) var_10))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 -= ((/* implicit */short) ((unsigned int) max((((/* implicit */int) arr_0 [i_0])), (var_4))));
        var_21 *= ((/* implicit */short) 3551806055U);
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)34601)), (arr_4 [i_1 - 1] [i_1 - 1])))) || (((/* implicit */_Bool) max((arr_4 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned int) (_Bool)1)))))));
                        var_23 = ((/* implicit */unsigned int) arr_3 [i_0]);
                        arr_10 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (17968793492826217481ULL)))))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)32666))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 1])))))) : (min((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (arr_1 [i_1 + 1]))))))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((int) (short)32767)))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)56592))));
        var_27 = ((/* implicit */short) arr_5 [i_0]);
    }
    for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_4)) : (12396189177959882650ULL))))) + (((/* implicit */int) ((unsigned char) (unsigned short)32666))))))));
        var_29 &= ((/* implicit */int) ((((((unsigned int) var_15)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-31395)) <= (((/* implicit */int) (unsigned short)32864)))))))) ? ((+(arr_11 [i_4 + 2] [i_4]))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_4]))) : (var_3)))));
        arr_13 [(short)4] |= ((/* implicit */_Bool) var_8);
    }
    var_30 |= ((/* implicit */unsigned char) var_12);
}
