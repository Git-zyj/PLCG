/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198615
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) arr_1 [i_2])))));
                    var_14 = ((/* implicit */short) ((unsigned char) (+(((((/* implicit */_Bool) 32256)) ? (var_7) : (((/* implicit */int) arr_4 [i_2] [i_2])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 -= ((/* implicit */signed char) (-(((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_0] [15]))))) ? (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_0 [i_0] [i_2]))));
                    }
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) var_6)))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_7)))) ? (min((var_0), (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_4 [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_5] [(short)12] [13])))))) ? (max(((-(32241))), ((-(((/* implicit */int) arr_3 [i_5] [i_5])))))) : (((/* implicit */int) arr_4 [i_5] [(signed char)6]))));
                var_19 += arr_14 [i_5];
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) arr_0 [i_4] [i_4]);
                                arr_25 [i_4] [i_4] [i_6] [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_7] [i_6] [i_6] [i_4]) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_6] [i_6] [i_4] [i_8])) : (((/* implicit */int) arr_22 [i_4] [(_Bool)1] [i_6] [i_6] [(_Bool)1] [i_4] [i_8]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_13 [i_8]))))) ? (((/* implicit */int) ((_Bool) arr_20 [i_5] [i_6] [i_7] [i_8]))) : (((/* implicit */int) (!(arr_23 [i_4] [i_4] [i_4] [i_4] [(_Bool)1]))))));
                            }
                            var_21 += ((/* implicit */_Bool) arr_3 [i_4] [i_5]);
                            arr_26 [i_4] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_7])) ? (((arr_0 [i_4] [i_4]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_16 [i_4] [i_5] [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_6] [i_7])) >= (var_0))))))));
                        }
                    } 
                } 
                arr_27 [i_4] |= ((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)62))))) % (max(((((_Bool)1) ? (((/* implicit */int) arr_20 [i_4] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_22 [(_Bool)1] [i_4] [(_Bool)1] [i_5] [i_5] [i_4] [i_5])))), (((/* implicit */int) arr_13 [i_4]))))));
            }
        } 
    } 
}
