/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219196
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
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) (signed char)-74);
        var_15 = ((/* implicit */short) var_3);
        var_16 = ((/* implicit */_Bool) arr_2 [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) (!(((((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [(unsigned char)9])) != (((/* implicit */int) var_3))))));
                        var_18 = ((/* implicit */short) min((((/* implicit */int) arr_7 [i_1] [i_0] [i_1] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_3])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_3]))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)129)) ^ (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)103)) % (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)115))))))) != ((~(((/* implicit */int) var_1))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 3; i_4 < 18; i_4 += 1) 
    {
        arr_15 [i_4] = (!(((/* implicit */_Bool) ((arr_8 [(unsigned short)19] [(unsigned short)19] [i_4] [(signed char)11]) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4 - 1] [i_4 - 3])) : (((/* implicit */int) var_11))))));
        arr_16 [i_4] = ((/* implicit */signed char) var_5);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) ^ (((((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ^ (((/* implicit */int) var_0))))));
    }
    var_22 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (unsigned short)7061))));
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) != (((/* implicit */int) (unsigned char)205))))), (var_7)));
    var_24 = ((/* implicit */short) (-(((var_3) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))));
}
