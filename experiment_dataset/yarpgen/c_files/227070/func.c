/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227070
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
    var_10 += ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_0))) % (((/* implicit */int) min((((short) (_Bool)1)), (((/* implicit */short) ((_Bool) (unsigned short)41416))))))));
    var_11 = min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_7)))) ? (((int) var_9)) : (((/* implicit */int) (!((_Bool)1)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (var_7))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) var_6)))))), (var_1))))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_5)), (var_8))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2705297466U)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (max((((((/* implicit */int) arr_1 [i_0] [(_Bool)1])) - (((/* implicit */int) arr_1 [11U] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((int) var_3))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_15 += ((/* implicit */int) var_2);
            var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (signed char)-73))))) ? (((var_1) % (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(signed char)11] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)98)))))))));
            var_17 = ((/* implicit */int) max((var_17), (((int) (+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])))))));
        }
        for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_9);
                        var_19 &= ((/* implicit */unsigned short) min((max((arr_12 [i_0 + 1] [i_0 - 1] [12] [i_0]), (((/* implicit */int) (_Bool)1)))), (((arr_12 [i_0 + 2] [i_0 + 2] [(_Bool)1] [i_0]) - (arr_12 [i_0 + 2] [i_0 + 1] [(_Bool)1] [i_0 + 2])))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12914))) * (min((3497251733U), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(max((((int) arr_7 [i_0])), ((+(((/* implicit */int) arr_6 [i_2] [i_2] [i_4])))))))))));
                        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned char)188), ((unsigned char)188)))) % (((/* implicit */int) arr_3 [i_0 + 1] [i_2 + 2] [i_3 + 1])))) % (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_9)))))));
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) ((arr_9 [(unsigned char)8] [i_2 + 2] [9] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67)))))) ? (((((/* implicit */_Bool) (signed char)-73)) ? (var_8) : (0U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
            var_24 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(min((((/* implicit */int) (_Bool)1)), (var_4))))))));
        }
        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            arr_17 [i_5] = ((/* implicit */unsigned short) var_8);
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_21 [i_0] [i_0] [i_6] [(signed char)4] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [(short)5]))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 1] [i_5] [i_5 + 2]))) * (var_8)))));
                var_25 ^= ((/* implicit */signed char) (~(arr_9 [i_0] [i_0] [i_0] [i_0])));
            }
            arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((int) ((max((arr_9 [(unsigned short)10] [11] [i_5] [(short)3]), (((/* implicit */unsigned int) (unsigned char)235)))) * (((/* implicit */unsigned int) ((int) arr_0 [i_0]))))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23336)) ? ((-(4294967277U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */int) ((_Bool) var_0))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36020)))))) : (((/* implicit */int) ((_Bool) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)21)))))))));
        }
    }
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 8; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    {
                        var_27 = var_7;
                        var_28 = ((/* implicit */int) min((var_28), ((~(((/* implicit */int) arr_30 [i_7] [i_7 + 4] [6U] [(signed char)4]))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((unsigned short) var_7)))));
                        var_30 = arr_30 [i_7] [(_Bool)0] [i_7] [9U];
                        arr_34 [i_7] [i_7] [i_9] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                    }
                } 
            } 
        } 
        var_31 = (~(((/* implicit */int) (unsigned char)64)));
    }
}
