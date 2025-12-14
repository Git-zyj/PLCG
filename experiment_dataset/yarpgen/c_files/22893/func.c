/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22893
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (signed char)80)))))))), (((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((((/* implicit */int) (unsigned short)17381)) - (17376)))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            var_17 = (signed char)-14;
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_18 = ((unsigned short) max(((signed char)-76), ((signed char)127)));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_0] [i_1 + 2] [i_2] [i_2] [i_2] [i_4] [i_2] = var_4;
                            arr_14 [i_2] = (unsigned short)51789;
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) var_6);
                            var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_15 [i_5] [i_3 + 1] [i_2] [i_1 + 3] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_1 + 3] [i_2] [i_5] [i_0]))))));
                        }
                    }
                } 
            } 
            arr_19 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (signed char)-97))));
        }
        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)76))))));
            arr_24 [i_6] [i_6] [i_6] = var_2;
        }
        var_21 ^= ((/* implicit */signed char) min((((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_1)))))), (max((max((arr_7 [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-14)))), (arr_6 [i_0])))));
        arr_25 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)55146);
        arr_26 [i_0] = ((/* implicit */unsigned short) var_7);
    }
    var_22 = var_14;
    var_23 = ((/* implicit */unsigned short) var_2);
}
