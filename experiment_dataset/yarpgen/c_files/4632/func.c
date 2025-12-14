/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4632
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
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((unsigned char) ((((/* implicit */long long int) ((unsigned int) arr_2 [i_0]))) > (((2898008201112572856LL) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        var_14 ^= ((/* implicit */_Bool) (((!(((_Bool) arr_3 [i_0])))) ? ((-(1984446909U))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_1 [i_0 - 1])))), (max((((/* implicit */int) arr_0 [(unsigned char)11])), (var_9))))))));
        var_15 = ((/* implicit */short) max(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */int) arr_1 [i_0 - 2])) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) (unsigned short)65535)))))))));
    }
    for (int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_4 [i_1 + 3]))));
        var_17 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)184))));
        var_18 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (signed char)127)) ? (5850163590741148510LL) : (arr_4 [i_1]))) - (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (arr_4 [i_1 + 1])))))));
        var_19 = arr_5 [i_1] [i_1];
    }
    /* LoopSeq 4 */
    for (short i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) 1984446892U);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((arr_8 [i_2] [i_2 - 2]), (((/* implicit */unsigned char) ((9223372036854775807LL) >= (((/* implicit */long long int) 1245860038U))))))))));
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (short)25331);
        var_22 &= var_3;
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            arr_17 [i_3] = ((/* implicit */short) arr_9 [i_4] [i_3]);
            /* LoopNest 2 */
            for (unsigned int i_5 = 3; i_5 < 10; i_5 += 3) 
            {
                for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_5 - 3] [i_5 - 3])) ? (((/* implicit */int) ((short) arr_9 [i_5 - 1] [i_5 + 2]))) : ((+(((/* implicit */int) arr_9 [i_5 - 3] [i_5 - 1]))))));
                        var_24 = ((/* implicit */short) max(((~(((((/* implicit */_Bool) arr_22 [(unsigned char)7] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-4045800613295337746LL))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) arr_18 [i_3] [i_5 - 2] [i_6 + 3])))))));
                        var_25 = arr_9 [i_4] [i_5 + 2];
                        var_26 = ((/* implicit */unsigned char) arr_16 [i_3] [i_3] [4]);
                    }
                } 
            } 
        }
        for (int i_7 = 4; i_7 < 9; i_7 += 4) 
        {
            arr_25 [(_Bool)1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_3] [i_7])) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) (unsigned short)13873))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        {
                            var_27 -= ((/* implicit */short) max(((~((~(arr_4 [i_7]))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [(signed char)1] [i_7])))))));
                            var_28 *= ((/* implicit */short) ((unsigned short) arr_8 [(unsigned short)16] [i_8]));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_11 = 4; i_11 < 20; i_11 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_12 = 3; i_12 < 20; i_12 += 1) 
        {
            arr_39 [i_12] = ((/* implicit */unsigned char) (~(1984446897U)));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_36 [i_11] [i_12 - 2] [i_11])) >= (((/* implicit */int) ((short) var_0)))))))))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_30 = ((/* implicit */short) ((int) ((long long int) (unsigned short)20743)));
            arr_44 [i_13] = ((signed char) arr_34 [i_11 + 4]);
            var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_11 + 4])) <= (((/* implicit */int) arr_42 [i_11 + 2]))));
            var_32 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (unsigned char)252)))));
        }
        var_33 = ((/* implicit */int) ((_Bool) (-(((((/* implicit */int) (signed char)-10)) ^ (var_9))))));
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) -1195777540))), ((-(((/* implicit */int) ((unsigned char) arr_34 [i_11]))))))))));
        var_35 = ((/* implicit */unsigned short) arr_40 [i_11] [i_11]);
    }
    /* vectorizable */
    for (unsigned char i_14 = 4; i_14 < 21; i_14 += 2) 
    {
        var_36 = ((short) arr_45 [i_14 - 3] [i_14 - 4]);
        var_37 |= ((((/* implicit */_Bool) arr_38 [i_14] [i_14 - 4])) ? (1195777553) : (((/* implicit */int) var_0)));
    }
}
