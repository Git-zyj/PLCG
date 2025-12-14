/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249878
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) / (((/* implicit */int) (unsigned char)109))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [(unsigned char)5] [(unsigned char)5]))));
        arr_3 [(unsigned char)2] = (unsigned char)146;
    }
    for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1 - 1] [(unsigned char)6] = (unsigned char)146;
        arr_7 [(unsigned char)7] = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) arr_0 [i_1 - 3] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (unsigned char)68)))))), (((/* implicit */int) ((((((/* implicit */int) (unsigned char)188)) % (((/* implicit */int) (unsigned char)23)))) > ((+(((/* implicit */int) var_10)))))))));
        arr_8 [i_1 - 3] [i_1 - 2] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) (unsigned char)49)) / (((/* implicit */int) (unsigned char)21)))), (((/* implicit */int) ((unsigned char) (unsigned char)118))))), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)12))))))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_4 [i_1 - 2]))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_16 [i_3] [i_4] = max((((unsigned char) (unsigned char)20)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 2]))))));
                    arr_17 [i_4] = ((unsigned char) (~(((/* implicit */int) arr_12 [i_4 - 1] [(unsigned char)10]))));
                }
            } 
        } 
        arr_18 [(unsigned char)9] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)208)), (((((/* implicit */int) arr_13 [i_2])) * (((/* implicit */int) arr_13 [i_2]))))));
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        arr_21 [i_5] [i_5] = ((unsigned char) (unsigned char)229);
        arr_22 [i_5] [i_5] = arr_20 [(unsigned char)16] [i_5];
        var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_19 [i_5] [i_5])))) >> (((((((/* implicit */int) arr_19 [i_5] [i_5])) + (((/* implicit */int) arr_19 [i_5] [i_5])))) - (169)))));
    }
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >= (((((/* implicit */int) (unsigned char)69)) * (((/* implicit */int) max((var_7), ((unsigned char)215))))))));
}
