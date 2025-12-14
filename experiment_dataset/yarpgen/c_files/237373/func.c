/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237373
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
    var_14 = ((/* implicit */unsigned char) var_11);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0])))));
        arr_5 [i_0] = ((/* implicit */short) (~(((arr_1 [i_0]) - ((-(((/* implicit */int) (unsigned short)30))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_1)))))));
            arr_10 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_8 [i_0]) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_8 [i_0]))));
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
            var_17 = ((/* implicit */int) (short)-15668);
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0]);
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_17 [i_2] [i_0] = ((/* implicit */unsigned char) (-((+(min((7791106768728329519LL), (((/* implicit */long long int) 31))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_3 + 4])) : (((/* implicit */int) var_7)))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                arr_22 [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1631785295)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_0])) : (-7791106768728329520LL)));
                arr_23 [i_0] = (+(((((/* implicit */_Bool) ((unsigned short) (signed char)13))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_3 - 1])))));
            }
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        var_20 = ((min((((int) var_0)), (((((/* implicit */int) arr_6 [i_4] [i_4])) ^ (((/* implicit */int) arr_19 [i_4])))))) == (((/* implicit */int) arr_7 [i_4] [i_4] [i_4])));
        arr_26 [i_4] = ((/* implicit */unsigned char) var_12);
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_4])) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)34)) : (var_6)))))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_4] [i_4]))))) : (15826515908899318439ULL)))));
    }
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_31 [i_5] = ((/* implicit */unsigned char) var_13);
        arr_32 [i_5] = ((((((/* implicit */int) var_9)) / (arr_29 [i_5]))) >> (((arr_29 [i_5]) ^ (arr_29 [i_5]))));
    }
}
