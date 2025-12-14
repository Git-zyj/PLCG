/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53271
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -9026438936634809760LL)) ? (2837032038U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16256))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [15LL] [i_1 + 2] [i_0]))) : (var_5))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_16 *= ((/* implicit */short) arr_1 [i_3]);
                        arr_13 [i_0] [7] [7] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2837032038U)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_17 = (!(((/* implicit */_Bool) var_3)));
        var_18 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_14 [i_4 + 1])))) ? (arr_14 [i_4 + 1]) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_7)) : (var_1))) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), ((short)-5303))))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 3; i_5 < 14; i_5 += 4) 
    {
        arr_18 [i_5] &= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_9)) != (var_7))))), ((~(((((/* implicit */int) arr_8 [i_5] [i_5] [i_5 - 3] [(unsigned short)0])) << (((((/* implicit */int) var_13)) + (24241)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) arr_8 [i_5] [i_5] [i_5] [i_6]);
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(var_7))))));
            var_21 -= ((/* implicit */long long int) (-(arr_1 [14U])));
        }
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((short) var_4))) ? ((+(arr_27 [i_5 - 3] [i_7] [i_8] [i_8] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9]))))))))));
                                var_23 = ((/* implicit */unsigned int) arr_14 [i_10]);
                                var_24 = ((/* implicit */short) arr_20 [i_9 - 1] [i_8]);
                                var_25 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (arr_26 [i_5] [i_7] [i_9 - 1] [(_Bool)1])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_0))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_7] [i_7] [i_7]))))) == (max((var_4), (((/* implicit */long long int) var_13))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_28 -= var_4;
                        var_29 = ((/* implicit */long long int) max((var_29), (((((min((((/* implicit */long long int) var_9)), (arr_0 [i_11]))) - (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)0))))))) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        var_30 -= ((/* implicit */unsigned char) var_7);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) ((unsigned char) arr_29 [i_7] [i_8 + 1] [i_8 + 1] [i_12] [i_12]));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_7]) : (((/* implicit */long long int) arr_26 [i_5] [i_12] [i_8 + 1] [i_8])))))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                {
                    arr_46 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_15 [i_13]))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_13]))))) < (((/* implicit */int) var_10)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_52 [i_17] [i_13] [i_15] [i_15] [i_14] [i_13] [i_13] &= ((((/* implicit */long long int) ((/* implicit */int) var_2))) == ((+(arr_47 [i_13] [i_14] [i_15] [i_16] [i_17]))));
                                var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                            }
                        } 
                    } 
                    var_34 = ((((((/* implicit */_Bool) var_11)) && (arr_15 [i_13]))) || (((/* implicit */_Bool) arr_14 [i_13])));
                }
            } 
        } 
    } 
}
