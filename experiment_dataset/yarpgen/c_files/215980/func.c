/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215980
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1102784165)))) ? (max((var_2), (((/* implicit */unsigned int) 1102784165)))) : (((((/* implicit */_Bool) 3436923386U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_3])))))))) ? ((-(min((((/* implicit */unsigned int) arr_2 [i_1 + 3] [i_2] [i_3])), (3436923386U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_14)))))));
                            var_16 = ((/* implicit */unsigned int) 1102784153);
                            var_17 = ((/* implicit */unsigned short) arr_0 [i_3]);
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0] [i_2] [i_0 + 2])) / (min((((/* implicit */int) arr_2 [i_0] [i_3] [i_2])), (var_9))))) * (-1315880003)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_1 - 1] [i_0 + 3] [i_5 + 1]))) ? (((/* implicit */int) arr_5 [i_1 + 4] [i_0 + 1] [i_5 + 2])) : (((/* implicit */int) min((arr_5 [i_1 + 3] [i_0 + 2] [i_5 + 3]), (var_3))))));
                            var_20 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */int) (short)-16938)), (var_7)))) && (((/* implicit */_Bool) ((short) 3282711379U))))) ? (max((arr_3 [i_0 + 1] [i_5 - 1]), (arr_3 [i_0 - 2] [i_5 + 3]))) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_5 + 3])) : (var_4)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_5)))), (((int) var_5)))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_22 ^= min((((unsigned int) max((var_7), (var_4)))), (((/* implicit */unsigned int) ((unsigned short) (short)-16938))));
                                arr_30 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2] = ((/* implicit */int) arr_13 [i_0 + 1] [i_1 + 1] [i_6] [i_8]);
                                arr_31 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_7 [i_1] [i_1] [8])) >> (((((/* implicit */int) var_5)) - (23652)))))));
                                arr_32 [i_0] [i_1 + 3] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 1290884296)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3436923373U)))))) : (arr_13 [i_0 - 2] [i_0 + 3] [i_1 + 2] [i_7 + 4])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            {
                arr_37 [i_9] |= (-(max((((/* implicit */int) ((short) var_4))), ((+(arr_34 [i_9]))))));
                var_23 = max((min((((/* implicit */int) arr_33 [i_10])), (arr_34 [i_10]))), (-106148666));
                var_24 += ((/* implicit */int) arr_33 [i_9]);
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_36 [i_9] [i_10])), (((((/* implicit */_Bool) arr_36 [i_9] [i_10])) ? (((/* implicit */int) arr_33 [i_9])) : (((/* implicit */int) var_15))))))) ? (((((/* implicit */_Bool) arr_35 [i_10] [i_10])) ? (((/* implicit */int) arr_35 [i_10] [i_10])) : (((/* implicit */int) arr_35 [i_10] [i_10])))) : (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_35 [i_10] [i_10])))) : (((/* implicit */int) min((arr_36 [i_9] [i_10]), (arr_36 [i_9] [i_9]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            {
                arr_43 [i_11] [i_11] = ((/* implicit */short) var_9);
                var_26 = ((/* implicit */unsigned int) var_5);
                var_27 ^= ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_40 [i_11])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_38 [i_12] [i_12])) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            }
        } 
    } 
    var_28 = var_2;
}
