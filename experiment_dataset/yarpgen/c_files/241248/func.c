/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241248
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((((/* implicit */_Bool) ((((_Bool) var_18)) ? (((((/* implicit */int) var_10)) & (((/* implicit */int) var_13)))) : (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0]))))))) || (((/* implicit */_Bool) max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                    var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1]))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (!(var_12)))) >> (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_4 [i_3 - 1] [i_3 - 1]))))));
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_4 [i_3 - 1] [i_3 - 1]), (arr_4 [i_3 - 1] [i_3 - 1])))), (((((((/* implicit */int) var_15)) * (((/* implicit */int) var_1)))) / (((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))));
                        var_23 = ((/* implicit */_Bool) (((+(((((/* implicit */int) var_18)) % (((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) arr_8 [i_0] [i_1]))));
                        var_24 ^= ((/* implicit */_Bool) min(((-(((/* implicit */int) max((var_4), (var_2)))))), (((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 - 1] [(_Bool)1] [i_3 - 1] [(_Bool)1] [(_Bool)1] [i_2])) != ((+(((/* implicit */int) (_Bool)0)))))))));
                    }
                    var_25 += arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [i_2];
                    var_26 = (((_Bool)1) || ((_Bool)1));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) min(((_Bool)1), (var_7)))))));
                    var_28 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)));
                }
                var_29 = ((/* implicit */_Bool) ((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4)))) + (((/* implicit */int) ((_Bool) var_11)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_30 += ((/* implicit */_Bool) (+((-(((arr_0 [i_6] [i_6 - 1]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_4 [i_5] [i_6 - 1]))))))));
                    var_31 = ((/* implicit */_Bool) max((((((/* implicit */int) var_0)) + (((/* implicit */int) max((var_0), (var_16)))))), ((-(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
