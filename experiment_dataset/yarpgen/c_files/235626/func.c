/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235626
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (+(((/* implicit */int) max((arr_1 [16U]), (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1782764463)) ? (((/* implicit */int) var_9)) : (0))), (((/* implicit */int) arr_0 [i_0] [(unsigned char)13]))))) ? (((/* implicit */int) arr_0 [(unsigned short)21] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (-(1301278958)));
        arr_7 [i_1] = max((((/* implicit */int) var_13)), (-1301278954));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)55)) << (((arr_6 [i_1 + 2]) - (1935649699))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) (signed char)1);
        var_18 = arr_4 [i_2 - 1];
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) (unsigned char)64)) : (((((/* implicit */int) var_12)) / (((/* implicit */int) (unsigned char)114)))))) / (var_5)));
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (signed char i_7 = 2; i_7 < 22; i_7 += 3) 
                        {
                            {
                                arr_25 [i_7] [i_6] [i_5] [i_5] [(_Bool)1] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((-1301278947), (((/* implicit */int) var_10))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_14 [i_3])))) : ((~(((/* implicit */int) (_Bool)0))))))));
                                arr_26 [i_5] [i_5] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)6)) ^ (((/* implicit */int) (short)-93))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 23; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                var_20 += (~(((((/* implicit */_Bool) arr_31 [(_Bool)1] [i_4] [(signed char)19] [i_8 - 1] [(short)16] [(short)16] [i_4])) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3])) <= (((/* implicit */int) var_8))))) : (((/* implicit */int) ((short) (unsigned short)32764))))));
                                arr_32 [i_9] [i_8] [i_5] [i_5] [i_3] [i_3] = ((/* implicit */_Bool) ((int) (((_Bool)1) ? (((/* implicit */int) (short)-29380)) : (((/* implicit */int) (_Bool)0)))));
                                arr_33 [i_5] [i_4] [1] [i_5] [i_8] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (var_5) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)21)) : (var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_10 = 1; i_10 < 24; i_10 += 3) 
        {
            var_21 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_13)))));
            /* LoopSeq 1 */
            for (signed char i_11 = 2; i_11 < 21; i_11 += 1) 
            {
                arr_39 [i_11 - 1] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */int) (signed char)-123)) <= (((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)100)) >> (((((/* implicit */int) (unsigned short)14856)) - (14849))))) >> (((((/* implicit */int) arr_34 [i_12] [i_10] [i_3])) + (2937)))));
                    arr_44 [i_3] [i_10] [i_3] [i_12] [i_11] [i_11] = ((/* implicit */int) ((unsigned int) -1301278954));
                }
            }
            var_23 = ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_15 [i_3] [i_10 - 1]))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10)))))));
        }
    }
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((((/* implicit */int) min((var_0), (((/* implicit */short) var_12))))) > (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((int) var_12)) : (1301278953)))));
    var_26 = ((/* implicit */unsigned char) var_11);
    var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) (unsigned char)208)))), (((/* implicit */int) (unsigned short)51775))))) == (4011505012U)));
    var_28 |= ((/* implicit */unsigned short) (unsigned char)48);
}
