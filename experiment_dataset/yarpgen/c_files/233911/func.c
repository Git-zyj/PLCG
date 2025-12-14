/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233911
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
    var_11 = ((((/* implicit */int) var_6)) != (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)16620))))) > (((var_0) ? (((/* implicit */int) (short)3191)) : (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [(short)16] [i_0]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) arr_14 [i_0] [i_1] [(_Bool)1] [i_3] [i_4] [i_1]);
                                arr_17 [i_1] [i_3 + 1] = (short)-16631;
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) - (((((/* implicit */_Bool) (short)-16621)) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_4])) : (((/* implicit */int) arr_6 [i_1]))))))) ? (((((/* implicit */int) (_Bool)0)) + (((((/* implicit */int) (short)25871)) + (((/* implicit */int) (short)29194)))))) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 2; i_5 < 24; i_5 += 1) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 24; i_7 += 2) 
                {
                    for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_21 [i_6] [i_6]), ((short)7252))))));
                            var_15 = ((/* implicit */short) arr_25 [i_8] [i_8] [i_8] [i_7]);
                            var_16 = ((/* implicit */short) arr_24 [i_7]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_23 [i_5] [(short)6] [i_5])) | (((/* implicit */int) var_9)))), (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2673))))))) ? (((((/* implicit */_Bool) (short)16620)) ? (((arr_25 [(_Bool)1] [i_6] [(_Bool)1] [i_9]) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) (short)16383)))) : (((/* implicit */int) min(((short)-16621), (((/* implicit */short) var_9))))))) : (((/* implicit */int) ((((/* implicit */int) arr_23 [i_5] [i_9] [i_5])) > (((/* implicit */int) max(((short)-30212), (var_6)))))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_6 - 1] [i_5 - 2])) / (((/* implicit */int) arr_29 [i_5 - 1] [i_5 - 1] [i_9] [(short)21]))))) ? ((~(((/* implicit */int) arr_32 [i_6 - 1] [i_6 - 1] [i_9] [i_5 - 2])))) : ((((!(arr_24 [i_9]))) ? (((/* implicit */int) arr_25 [i_9] [i_9] [i_6] [i_9])) : (((((/* implicit */int) arr_23 [i_6] [i_9] [i_10])) & (((/* implicit */int) arr_21 [i_6] [i_5]))))))));
                            var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((arr_26 [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) (short)-1))))) ? (((var_0) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) arr_26 [i_5] [i_5] [i_9])))) : (((/* implicit */int) ((arr_28 [i_5 - 2] [i_6 - 1] [i_9] [(_Bool)1]) || ((_Bool)0))))))));
                            var_20 = ((/* implicit */short) (~(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (short i_12 = 3; i_12 < 21; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) (((+(((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((var_7) || (((/* implicit */_Bool) (short)18497)))))));
                            var_22 = ((/* implicit */short) arr_18 [i_5]);
                            arr_37 [i_11] = max(((short)-14199), ((short)16380));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (short i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_32 [i_16] [i_15] [i_14] [i_13])), ((-(((/* implicit */int) var_3))))))));
                            arr_46 [i_16] [(short)0] [i_16] [i_16] [i_16] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (arr_44 [i_15] [i_16] [i_16] [i_16] [i_13])))) || (((/* implicit */_Bool) arr_23 [(short)11] [(short)11] [i_15])))));
                            arr_47 [i_13] [i_13] [i_16] = ((/* implicit */_Bool) min(((short)-16383), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_17 = 4; i_17 < 16; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        {
                            var_24 = ((short) ((_Bool) arr_36 [i_17] [i_14] [i_17] [i_18] [i_17 - 2] [i_14]));
                            arr_54 [i_18] [i_18] [i_17] [i_18] [i_13] = ((/* implicit */_Bool) ((((arr_18 [i_18]) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_51 [i_13] [i_14] [i_17 + 4] [i_18])))) : (((arr_34 [i_18] [i_18] [i_14]) ? (((/* implicit */int) arr_27 [i_18])) : (((/* implicit */int) arr_45 [i_14] [i_14])))))) + (((/* implicit */int) min((arr_33 [(short)7] [(short)7]), (arr_38 [i_18]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_19 = 2; i_19 < 19; i_19 += 4) 
                {
                    for (short i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_25 = max((((/* implicit */short) var_10)), (max((arr_42 [i_19] [i_19 - 2] [i_19 - 2]), (arr_35 [i_19] [i_19] [i_19 + 1] [i_19 - 1]))));
                                var_26 = ((/* implicit */short) max((((arr_31 [i_19 - 2]) ? (((/* implicit */int) arr_31 [i_19 - 2])) : (((/* implicit */int) arr_31 [i_19 - 1])))), (((/* implicit */int) ((((/* implicit */int) arr_43 [i_13] [i_14])) < (((/* implicit */int) (short)-16620)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
