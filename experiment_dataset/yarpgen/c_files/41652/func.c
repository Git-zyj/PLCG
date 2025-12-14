/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41652
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
    var_10 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */int) var_5)))) / (1331509699)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_2 [i_0 + 2])))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) ^ (-2091324692)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_0))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2363)))))))) : (((((/* implicit */int) arr_7 [i_0] [(short)7] [i_2] [i_3 - 1] [i_4])) & ((-2147483647 - 1))))));
                                var_13 = ((/* implicit */_Bool) var_1);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0 - 2] [i_1] = ((/* implicit */int) arr_8 [i_1] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (short i_8 = 2; i_8 < 11; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                            {
                                var_14 = ((/* implicit */short) (((-2147483647 - 1)) >= (((((/* implicit */_Bool) ((arr_27 [i_6] [4] [i_8] [i_9 - 1]) ? (((/* implicit */int) (unsigned short)43430)) : (((/* implicit */int) arr_18 [(short)7]))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_14 [i_8 - 2]))))))));
                                var_15 = ((/* implicit */int) var_5);
                                arr_30 [i_5] [i_6] [i_7] [i_5 + 2] [i_7] = min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_1 [i_5 - 1] [(unsigned short)11]))))) : (163777887))), ((+(((int) (-2147483647 - 1))))));
                                arr_31 [(_Bool)1] [i_6] [i_8] = ((/* implicit */int) var_3);
                                arr_32 [i_5 + 2] [i_5] [i_5] [i_6] [i_5] [i_5 - 1] = ((/* implicit */unsigned short) var_2);
                            }
                            /* LoopSeq 2 */
                            for (int i_10 = 4; i_10 < 10; i_10 += 1) 
                            {
                                arr_35 [i_10] [i_10] [(short)6] [(short)10] [i_10 - 3] |= 548156189;
                                arr_36 [i_5] [i_6] [i_7] [i_6] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8644)) ? ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_7] [i_7] [i_10])), (var_8)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [(_Bool)1])) ? (((/* implicit */int) var_3)) : (var_9)))))));
                                var_16 |= ((/* implicit */short) (unsigned short)56907);
                                arr_37 [i_6] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_5] [i_5] [i_5 + 2] [(unsigned short)12]))))) ? (((((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_5 + 2] [i_8 - 2] [i_8] [(short)9])) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((short) var_7))));
                            }
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                arr_41 [i_5] [i_6] [(short)11] [i_8 - 2] [i_8 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32752)) : (var_7)));
                                arr_42 [i_6] [i_6] [i_7] [i_8 - 2] [i_5 + 1] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (short)17287)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)8629)) & (((/* implicit */int) arr_8 [(_Bool)1] [i_5 + 1] [i_6] [i_8]))))))));
                                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_8 + 1]))));
                            }
                            arr_43 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-5107)) ? (((/* implicit */int) (unsigned short)63173)) : (2147483647)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 10; i_12 += 2) 
                {
                    for (short i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)44053)) : (0)));
                            var_19 = ((/* implicit */unsigned short) (short)-1);
                            var_20 = ((/* implicit */short) (unsigned short)12);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned short) (short)-29673)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
