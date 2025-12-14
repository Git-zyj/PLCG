/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43054
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)119)) / (((/* implicit */int) (unsigned char)133))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 = (unsigned char)237;
        var_22 = ((/* implicit */unsigned char) min((var_22), ((unsigned char)253)));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)134))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_3 [i_1] [i_1])))), (((((/* implicit */int) (unsigned char)187)) % (((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)96)) * (((/* implicit */int) var_16))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) (unsigned char)144))))) : (((/* implicit */int) var_8))));
        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)223))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_10 [(unsigned char)4] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)203))))) ? ((+(((/* implicit */int) (unsigned char)55)))) : (((/* implicit */int) (unsigned char)223)))) < (((/* implicit */int) arr_8 [i_2]))));
        arr_11 [i_2] = arr_6 [i_2];
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)127), ((unsigned char)178)))), ((~(((/* implicit */int) arr_8 [i_3]))))));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            var_26 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)176)) / (((/* implicit */int) (unsigned char)53)))) + (((/* implicit */int) arr_9 [i_3]))));
            arr_16 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */int) var_8)) % (((/* implicit */int) var_13))))))));
            var_27 += (unsigned char)24;
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
        {
            arr_20 [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_3] [i_3])) | (((/* implicit */int) arr_13 [i_3] [(unsigned char)8]))));
            var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_3] [i_3]))));
            var_29 = arr_18 [i_3] [(unsigned char)12] [i_3];
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
        {
            arr_23 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_17)) * (((/* implicit */int) arr_8 [i_3])))) + ((~(((/* implicit */int) (unsigned char)48))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_30 = ((unsigned char) (unsigned char)167);
                            var_31 = arr_25 [i_3] [(unsigned char)6] [i_7] [i_7];
                            arr_33 [(unsigned char)7] [i_6] [i_7] [(unsigned char)7] [i_9] = var_10;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        {
                            arr_40 [i_3] [i_6] [i_7] [i_7] [(unsigned char)8] [i_7] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_10 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_30 [i_7] [(unsigned char)4] [i_7 - 1] [i_7]))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_38 [i_11] [i_6] [i_7 + 1] [i_10 + 1] [i_11])))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned char)65)))) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_3] [i_6] [i_7] [i_10 - 2])) == (((/* implicit */int) arr_14 [i_3]))))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                var_34 = arr_37 [(unsigned char)17] [i_3] [i_6] [i_6] [i_7 + 2];
            }
        }
        arr_41 [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)134)) : (((/* implicit */int) arr_21 [i_3]))))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)202)))))))));
        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)167))));
    }
    var_36 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) var_14)))) + (((((/* implicit */int) (unsigned char)82)) / (((/* implicit */int) (unsigned char)168))))))));
}
