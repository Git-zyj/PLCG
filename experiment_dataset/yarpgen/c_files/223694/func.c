/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223694
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
    var_12 -= ((unsigned short) (unsigned short)40377);
    var_13 = ((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_6)) << (((((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)1)))) - (118240)))))));
    var_14 = var_3;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] |= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_3 [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_2)))))));
        var_15 -= ((/* implicit */_Bool) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_0])))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))) % (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [(unsigned short)14])), (var_8)))) >= (((/* implicit */int) (_Bool)1)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max(((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) (unsigned short)8188))))) : (((/* implicit */int) (_Bool)1)))))))));
        var_17 = (_Bool)1;
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (unsigned short)8166)) : (((((/* implicit */_Bool) (unsigned short)20819)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [(_Bool)1])))))) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1])), ((unsigned short)43611)))) > (((/* implicit */int) ((_Bool) (unsigned short)20841))))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (((!(var_1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1])) == (((/* implicit */int) var_5))))))))));
                            arr_20 [i_2] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_18 [i_5] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) : (((((/* implicit */_Bool) (unsigned short)57347)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) max((max((var_4), (arr_3 [i_3 - 1]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_5] [i_4] [i_3 - 1] [i_1] [i_1] [i_1])) != (((/* implicit */int) arr_1 [i_3] [i_1])))))))) : (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38775))), (((/* implicit */unsigned short) var_6)))))));
                            var_20 += (!(arr_16 [i_1] [(unsigned short)9] [i_1] [i_1] [i_1] [i_1]));
                        }
                    } 
                } 
            } 
            var_21 = var_1;
        }
        var_22 -= ((/* implicit */unsigned short) (_Bool)1);
    }
}
