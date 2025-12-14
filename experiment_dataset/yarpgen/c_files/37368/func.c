/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37368
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
    var_17 = (unsigned char)157;
    var_18 = var_10;
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
    var_20 = ((unsigned char) var_12);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)203)) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)164)) || (((/* implicit */_Bool) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((unsigned char) (unsigned char)53)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)37))) : (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned char)157)) : (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned char)7))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                var_23 += var_6;
                arr_7 [i_0] [(unsigned char)4] [i_0] = var_2;
                arr_8 [(unsigned char)5] [i_1] [(unsigned char)6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_1)))) >> (((((/* implicit */int) arr_3 [i_0] [i_2 + 1])) - (217)))));
            }
        }
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_24 *= var_9;
        arr_11 [i_3] [(unsigned char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)155))))) ? (((/* implicit */int) min(((unsigned char)2), (arr_9 [(unsigned char)5] [i_3])))) : (((/* implicit */int) ((unsigned char) (unsigned char)99)))));
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min((var_9), ((unsigned char)99))))) ? (min((((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)127)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)252)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) max((arr_14 [i_4] [i_4]), (var_16)))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_4] [i_4])) == (((/* implicit */int) arr_14 [i_4] [i_4]))))))))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_26 = var_2;
            var_27 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((~(((/* implicit */int) var_9))))));
            var_28 = ((unsigned char) (unsigned char)18);
            arr_20 [i_4] [i_4] [i_4] = (unsigned char)170;
        }
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
        {
            var_29 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)37))))));
            var_30 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_24 [i_4])))) > (((/* implicit */int) ((unsigned char) var_13)))));
        }
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
        {
            var_31 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)110))));
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)96)))), (((/* implicit */int) (unsigned char)20)))))))));
        }
    }
}
