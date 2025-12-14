/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20298
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) min((min((((/* implicit */short) var_4)), (var_13))), ((short)815)));
            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [(_Bool)1]))));
            var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_4 [(short)16]), (arr_4 [(_Bool)1]))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_0] = ((/* implicit */_Bool) var_14);
            var_22 = ((/* implicit */_Bool) min((var_22), (var_5)));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                arr_15 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_2]))));
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_11)))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_0 [i_0]))))));
                        var_24 &= ((/* implicit */_Bool) var_9);
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)82)) - (((/* implicit */int) var_6))))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) var_17)) == ((~(((/* implicit */int) (short)815)))))))));
                    }
                    arr_22 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                    arr_23 [i_0] [i_0] [i_4 - 1] [(unsigned char)9] = ((/* implicit */short) (_Bool)1);
                }
                var_27 *= var_7;
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            arr_32 [i_7] [(_Bool)1] [i_6] [i_3] [i_2] [(_Bool)1] [i_0] &= (_Bool)0;
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & ((-(((/* implicit */int) (short)815))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            var_29 = ((/* implicit */_Bool) ((short) min(((short)-1080), (((/* implicit */short) arr_17 [i_0] [i_0] [i_8] [i_8])))));
            var_30 = ((/* implicit */short) min((var_30), ((short)-2759)));
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (+(((/* implicit */int) min((min((var_1), (var_13))), ((short)-2759)))))))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_32 = ((/* implicit */_Bool) max((var_32), ((((~(((/* implicit */int) var_7)))) >= (((/* implicit */int) (!(var_2))))))));
                var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) min((arr_6 [i_0] [(short)8] [i_0]), (((/* implicit */short) (_Bool)1))))))));
                var_34 = ((/* implicit */short) ((unsigned char) ((unsigned char) ((arr_33 [i_0] [(short)19] [i_9]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))));
                var_35 *= ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) arr_33 [i_0] [i_8] [i_8])), (var_8))))));
            }
        }
        for (short i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_36 = ((short) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_37 [(_Bool)1] [i_10])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_10] [i_10])))) >> (((((/* implicit */int) var_0)) - (126)))));
            arr_43 [i_0] [i_10] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */int) ((unsigned char) (short)13))) : (((((/* implicit */int) (short)-24182)) * (((/* implicit */int) (short)-19922)))))), (((/* implicit */int) var_4))));
            arr_44 [(_Bool)1] &= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_29 [i_0] [i_10] [(short)18] [i_10] [i_10]))))));
        }
        var_37 = min((((/* implicit */short) ((((((/* implicit */int) (short)29561)) - (((/* implicit */int) (short)-4022)))) != (((/* implicit */int) min(((short)1080), (((/* implicit */short) var_0)))))))), ((short)-29541));
    }
    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
    {
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-7497)) * (((/* implicit */int) arr_4 [i_11]))));
        var_39 ^= ((/* implicit */_Bool) ((short) ((_Bool) var_11)));
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) max((((/* implicit */int) min((var_9), (max(((short)32748), (((/* implicit */short) (_Bool)0))))))), (((((/* implicit */int) ((_Bool) var_1))) | (((/* implicit */int) arr_25 [i_11] [i_11])))))))));
            arr_51 [i_11] [i_11] = ((/* implicit */_Bool) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) ((short) var_18)))))));
        }
    }
    /* LoopSeq 1 */
    for (short i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (short)8186))));
        var_42 = arr_33 [i_13] [i_13] [i_13];
    }
}
