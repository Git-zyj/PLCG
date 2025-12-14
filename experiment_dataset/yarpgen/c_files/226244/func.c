/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226244
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
    var_19 = ((/* implicit */_Bool) max((2147483624), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */_Bool) max((((/* implicit */int) ((((int) var_16)) != (var_10)))), (max((((((/* implicit */_Bool) 2147483624)) ? ((-2147483647 - 1)) : (562954861))), (((/* implicit */int) (_Bool)1))))));
                var_21 = (~((-2147483647 - 1)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((int) var_15));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_9 [i_2])))) & (((var_6) | ((((_Bool)1) ? (-500714925) : (((/* implicit */int) (_Bool)1))))))));
                        arr_17 [i_2] [i_3] [i_5] = min(((+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_5] [i_3] [i_4])) != (((/* implicit */int) var_5))))))), (562954861));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) var_12);
                            var_25 ^= ((/* implicit */int) (!(arr_20 [i_7 - 1] [i_7 - 1] [i_8])));
                        }
                    } 
                } 
            } 
            var_26 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (-500714926))))))) ^ (((/* implicit */int) (_Bool)0))));
        }
        arr_27 [(_Bool)0] = ((/* implicit */_Bool) -1995445639);
    }
    var_27 = ((((/* implicit */_Bool) ((int) var_6))) ? (max((var_16), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_8)));
    var_28 *= var_14;
}
