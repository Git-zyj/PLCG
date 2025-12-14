/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198459
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-10236))))))))));
                var_15 = ((/* implicit */unsigned char) max((var_15), (((unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) | (((/* implicit */int) arr_3 [i_0] [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned int) var_7);
                        arr_17 [i_2] = ((/* implicit */unsigned char) var_10);
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_14 [i_2]))))), (((unsigned char) arr_2 [i_5])))))));
                        arr_19 [i_2] [i_5] [i_5] [i_5] = ((/* implicit */short) ((arr_5 [i_4] [i_2]) | (((((3098965073U) == (arr_13 [i_2] [i_2]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2]))))) : (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_13 [i_5] [i_2])))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */unsigned char) var_7);
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) arr_11 [i_6] [i_6] [i_6] [i_6]);
        var_18 = ((/* implicit */unsigned char) arr_15 [i_6]);
    }
    var_19 = ((/* implicit */unsigned char) max(((((~(var_6))) & ((~(var_6))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))))) & (((/* implicit */int) var_13))));
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)9))));
        var_21 = ((/* implicit */short) (((+(var_3))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) 1196002232U))) <= (((/* implicit */int) var_1))))))));
        var_22 = (unsigned char)184;
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7] [i_7]))))) << (((((((/* implicit */_Bool) var_9)) ? (arr_13 [i_7] [i_7]) : (arr_7 [i_7]))) - (765958058U))))))))));
    }
    var_24 = var_5;
}
