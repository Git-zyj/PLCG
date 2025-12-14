/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236555
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)121)) || (((/* implicit */_Bool) 3298040680U))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) > (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (-387144385))) >> (((((var_5) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))))) - (119LL)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned short) -1814187849)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))));
                        var_19 = ((/* implicit */_Bool) arr_1 [i_2 + 1]);
                        arr_13 [i_0] [2LL] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_1]));
                    }
                } 
            } 
            arr_14 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (short)7689)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0]))))));
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
            arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
        }
        for (long long int i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            arr_19 [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-2147483647 - 1))))) >= (((long long int) arr_10 [i_4 + 1] [i_4] [i_4 - 2] [(unsigned char)6]))));
            arr_20 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_12 [7] [7] [i_4] [i_4] [i_4] [i_4 + 1]) ? (((/* implicit */int) arr_5 [i_0] [i_4])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */int) arr_18 [i_0])) ^ ((-2147483647 - 1)))))), (((((/* implicit */_Bool) max((6273929418053649706LL), (((/* implicit */long long int) arr_5 [i_4] [i_4]))))) ? (((/* implicit */int) arr_7 [i_4 + 1] [i_4] [i_4 - 1])) : (((/* implicit */int) (unsigned char)115))))));
            arr_21 [i_0] = ((/* implicit */unsigned short) -6273929418053649706LL);
            arr_22 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_4] [i_4 - 2] [i_0] [i_4]) / (arr_9 [i_0] [i_0] [i_4 - 2] [i_0] [i_4 - 2]))))));
        }
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            arr_26 [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((((_Bool) (short)-6571)) ? (((/* implicit */int) ((2521312120869508417LL) == (((/* implicit */long long int) -1605379033))))) : ((+(((/* implicit */int) arr_5 [i_0] [i_0]))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)4] [i_0] [i_5] [i_5] [(signed char)2])) ? (arr_9 [9LL] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) var_8))))) ? (((long long int) (unsigned short)15758)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_31 [i_0] [i_7] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)28595)) ? (2043268463) : (((/* implicit */int) arr_11 [i_7] [i_5])))))), (max((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_28 [(unsigned short)3] [i_5] [i_6] [5LL])) : ((-2147483647 - 1)))), (((((/* implicit */_Bool) 6273929418053649706LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)230))))))));
                        arr_32 [i_0] [i_5] [i_5] [i_7] [i_7] [i_5] = ((/* implicit */unsigned short) (~(1147127719)));
                    }
                } 
            } 
            var_21 *= ((int) ((((/* implicit */int) ((_Bool) var_0))) == (((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) arr_1 [i_0]))))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        arr_37 [i_8] = 1964637232;
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                arr_45 [i_8] [i_9] [i_9] [11ULL] = ((/* implicit */signed char) ((((/* implicit */int) arr_40 [i_10])) == (((/* implicit */int) arr_40 [i_10]))));
                arr_46 [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))));
                arr_47 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) ((arr_40 [i_8]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_40 [i_10]))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_43 [(_Bool)1] [i_9] [i_9] [i_9])) >= (((/* implicit */int) (unsigned short)53545))));
                arr_48 [i_9] [i_9] [(unsigned short)17] = ((/* implicit */unsigned short) ((arr_44 [i_8] [i_9] [i_8]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8] [i_9] [i_10])))));
            }
            arr_49 [i_9] = ((/* implicit */unsigned int) var_6);
            var_23 = min((((/* implicit */int) arr_34 [i_8])), (max((((/* implicit */int) var_1)), (387144385))));
        }
        var_24 = ((/* implicit */unsigned short) (_Bool)1);
        arr_50 [i_8] = ((/* implicit */_Bool) (unsigned short)53020);
    }
}
