/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3105
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
    var_20 = ((/* implicit */_Bool) (-((-(2147483647)))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) ((signed char) (+(2430056999U))))) : (((/* implicit */int) arr_0 [i_0]))));
        var_22 -= ((/* implicit */unsigned short) (+(((arr_1 [i_0]) % (arr_1 [i_0])))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4136834069U)))))));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_15 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_16))));
                        var_24 = var_5;
                    }
                } 
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)39);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_6] [i_7] [i_6] [i_5])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5]))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)-9))))) : ((-(1307128572U))))))));
                        arr_29 [i_5] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) arr_25 [i_5]);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) ((((_Bool) (signed char)82)) && (((/* implicit */_Bool) arr_22 [i_5]))));
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        arr_32 [i_9] = ((/* implicit */int) var_11);
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            arr_36 [i_9] [i_9] [i_10] = ((unsigned short) (signed char)110);
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_11 = 3; i_11 < 18; i_11 += 3) 
            {
                var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_35 [i_11 - 3] [i_11])) : (((/* implicit */int) arr_35 [i_11 - 1] [i_11 - 1]))));
                var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_3 [i_9] [i_9])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_11] [i_9] [i_9])) : (((/* implicit */int) arr_2 [i_10])))) : (((/* implicit */int) arr_38 [i_9] [i_11 - 2] [i_11]))));
            }
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((short) ((((/* implicit */int) ((unsigned short) var_18))) / (((/* implicit */int) var_6))))))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (short)14462))))))));
        }
    }
}
