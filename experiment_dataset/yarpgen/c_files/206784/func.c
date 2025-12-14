/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206784
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (var_2)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)32767))))) ? ((-(((((/* implicit */int) var_8)) | (((/* implicit */int) var_5)))))) : ((((_Bool)0) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        arr_9 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_2]))))));
                        var_18 |= (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])));
                        arr_10 [i_3] [i_2] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_8 [i_3 + 2]))))) ? ((+(((/* implicit */int) arr_0 [i_3])))) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) var_0))))))), (((/* implicit */int) min((((/* implicit */short) arr_0 [i_3 + 3])), (arr_4 [i_0 + 1]))))));
                        arr_11 [i_2] = (short)19760;
                        arr_12 [i_0 + 1] [i_2] [(short)11] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_8 [i_2])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */int) (!(arr_5 [i_2])))) : (((((/* implicit */int) (short)21913)) & (((/* implicit */int) arr_7 [i_2]))))))));
                    }
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_5 [i_2]) ? (((/* implicit */int) (short)4732)) : (((/* implicit */int) arr_7 [i_2])))), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [(short)17])) : (((/* implicit */int) arr_6 [i_2] [i_0] [i_0]))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((((((var_11) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (short)-1459)))) + (2147483647))) >> ((((~(((/* implicit */int) arr_2 [i_0])))) + (23)))))));
                    arr_14 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */short) (_Bool)1))))))) ? ((((!(((/* implicit */_Bool) arr_8 [(short)19])))) ? (((/* implicit */int) arr_2 [i_2])) : (((var_6) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0])))))) : ((-(((/* implicit */int) min((((/* implicit */short) arr_5 [i_2])), (arr_6 [i_0] [i_1] [i_2]))))))));
                    var_19 = ((/* implicit */_Bool) (((((((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((arr_4 [i_1]), (arr_8 [i_2])))))) + (2147483647))) >> (((max((((/* implicit */int) max((arr_1 [i_2]), (arr_7 [i_2])))), ((~(((/* implicit */int) arr_4 [i_1])))))) - (11147)))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (arr_6 [i_0 + 1] [i_1 + 1] [i_4])))) + ((~(((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1] [i_4]))))));
                    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_6 [i_0] [i_1 + 1] [i_4])))) : (((/* implicit */int) max((arr_4 [i_4]), (((/* implicit */short) arr_0 [i_0])))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) max((arr_1 [i_4]), (((/* implicit */short) arr_2 [i_4])))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) arr_5 [(short)8])) & (min((((((/* implicit */int) arr_4 [i_0])) | (((/* implicit */int) arr_17 [i_0] [i_0] [i_4])))), (((/* implicit */int) min((arr_5 [(short)6]), (arr_2 [i_0]))))))));
                }
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) min((((/* implicit */int) min((((/* implicit */short) max((arr_15 [i_1 - 1] [i_0] [i_0 + 1]), (arr_2 [i_0])))), (min(((short)6846), (((/* implicit */short) arr_5 [(_Bool)1]))))))), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_5 [(short)18]))))) ? (((/* implicit */int) arr_5 [(_Bool)1])) : (((/* implicit */int) min((arr_17 [i_0] [i_1 + 1] [i_1]), (arr_16 [i_1 - 1])))))))))));
                arr_18 [i_0] [i_1 - 1] = ((/* implicit */_Bool) arr_4 [i_0 + 1]);
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min(((~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_3)))))), (((((/* implicit */int) ((_Bool) var_1))) & (((var_4) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))));
    var_25 += ((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_9)) : (max((((var_16) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) (_Bool)1)))))))));
    var_26 = var_2;
}
