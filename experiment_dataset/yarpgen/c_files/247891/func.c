/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247891
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
    for (short i_0 = 4; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */short) max((var_11), (((short) ((((/* implicit */int) min((var_4), (var_2)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
        var_12 = ((/* implicit */short) (((-((+(((/* implicit */int) (short)22814)))))) - (min((var_5), (((/* implicit */int) ((signed char) var_1)))))));
    }
    for (short i_1 = 4; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) var_2)))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                var_14 = ((/* implicit */short) ((signed char) (-(var_6))));
                var_15 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_9)))));
                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_9))) && (((((/* implicit */int) var_0)) <= (((var_6) - (var_5)))))));
            }
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */short) ((((((/* implicit */int) var_1)) + (((((/* implicit */int) var_2)) + (((/* implicit */int) var_4)))))) + ((+(var_5)))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_18 [i_1] [i_4] [i_1] = ((/* implicit */signed char) var_9);
                    arr_19 [i_1] [i_4] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) - (((/* implicit */int) var_9)))))));
                }
                arr_20 [i_4] [i_4] [i_1] = ((/* implicit */signed char) max(((~(((/* implicit */int) ((((/* implicit */int) (short)26116)) < (((/* implicit */int) (signed char)-39))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (var_1)))) && (((/* implicit */_Bool) (~(var_6)))))))));
                var_18 = ((/* implicit */signed char) var_6);
                var_19 = ((/* implicit */signed char) (((+(var_6))) ^ (min((((int) var_7)), ((~(((/* implicit */int) var_3))))))));
            }
            for (int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */short) (((-(((/* implicit */int) var_1)))) != (((((/* implicit */int) var_8)) & (((/* implicit */int) var_2))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((short) var_0))) > (((/* implicit */int) ((signed char) var_7)))));
                var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) / (((/* implicit */int) ((((/* implicit */int) (short)-8619)) != (((/* implicit */int) (signed char)-106)))))));
                arr_23 [i_1] [i_2] = ((/* implicit */signed char) ((var_5) == (((((((/* implicit */int) var_8)) - (((/* implicit */int) var_9)))) + (((/* implicit */int) var_3))))));
            }
        }
        arr_24 [i_1] = ((/* implicit */short) ((((((/* implicit */int) var_8)) + (((/* implicit */int) var_9)))) > (((/* implicit */int) ((((/* implicit */int) ((signed char) var_5))) >= (((/* implicit */int) ((signed char) var_5))))))));
    }
    var_23 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((var_5) / (((/* implicit */int) var_1)))))), (((((/* implicit */int) ((short) var_9))) / (var_5)))));
    var_24 = min((((((/* implicit */int) max((var_9), (((/* implicit */short) var_1))))) >> (((((/* implicit */int) var_9)) - (15027))))), (((/* implicit */int) var_0)));
    var_25 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_1))));
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(max((((/* implicit */int) var_2)), (((((/* implicit */int) var_1)) / (((/* implicit */int) var_1)))))))))));
}
