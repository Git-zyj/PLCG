/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38900
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
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4633))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-15373))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (short)-11849)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_18)))))))));
        arr_2 [i_0] = ((/* implicit */short) (((~(((((/* implicit */int) var_11)) | (((/* implicit */int) arr_0 [i_0])))))) < (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_22 |= ((/* implicit */unsigned char) (_Bool)0);
                arr_8 [i_0] [i_0] [i_0] [(short)6] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */int) arr_3 [(unsigned char)7] [i_2])) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [(short)5]))))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_8))) > (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (short)-1))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_14))))))));
            }
            for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned char)4])) * (((/* implicit */int) var_12)))), (((/* implicit */int) arr_7 [i_3] [i_1])))))));
                arr_11 [i_0] [i_1] [i_3 + 1] = ((/* implicit */unsigned char) ((short) max((((/* implicit */int) min((((/* implicit */short) var_14)), (var_3)))), ((~(((/* implicit */int) arr_1 [i_3 + 2] [i_1])))))));
                arr_12 [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (short)3840)))) : (((/* implicit */int) ((short) (short)0)))));
            }
            for (unsigned char i_4 = 2; i_4 < 8; i_4 += 1) 
            {
                var_24 += ((/* implicit */_Bool) var_2);
                arr_15 [i_0] [i_1] [i_1] [i_4 + 1] = ((/* implicit */short) (!(var_14)));
            }
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min(((((_Bool)0) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-1), ((short)1))))))) : (((/* implicit */int) min((var_15), (var_10))))));
                        arr_22 [i_6] = ((/* implicit */short) (-(((/* implicit */int) (short)-1))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_19 [i_0] [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_5] [i_1] [i_0])))), ((+(((/* implicit */int) var_6)))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? ((-(((/* implicit */int) (short)-27562)))) : (((/* implicit */int) max((arr_14 [i_0] [i_5] [i_6]), (arr_14 [(_Bool)0] [i_1] [i_6]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            arr_27 [i_0] = ((_Bool) arr_25 [i_0] [i_7]);
            arr_28 [i_0] [i_7] = ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_0])))));
        }
        var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))))) : (((((_Bool) arr_13 [i_0] [(unsigned char)8] [i_0] [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_18))))));
    }
    var_28 = ((/* implicit */unsigned char) var_7);
    var_29 = ((/* implicit */unsigned char) max((var_29), (max((((/* implicit */unsigned char) (((_Bool)1) || ((_Bool)1)))), ((unsigned char)248)))));
}
