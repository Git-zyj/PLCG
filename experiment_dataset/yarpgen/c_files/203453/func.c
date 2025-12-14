/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203453
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
    var_11 = ((/* implicit */unsigned short) min((((unsigned int) ((unsigned short) var_4))), (((/* implicit */unsigned int) var_8))));
    var_12 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_1] [i_1] &= min((((/* implicit */short) (signed char)0)), (var_0));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0]))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(var_4))))));
                        arr_12 [i_0] [i_1] [i_2] [11U] = ((/* implicit */int) arr_2 [i_0] [i_3]);
                        var_16 = ((/* implicit */signed char) var_10);
                    }
                } 
            } 
            var_17 = ((/* implicit */signed char) min((var_17), (var_7)));
        }
        var_18 = ((/* implicit */signed char) max((var_18), ((signed char)13)));
        arr_13 [i_0] = ((/* implicit */int) var_6);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-13))));
            arr_19 [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((arr_18 [i_5] [i_4]) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_18 [i_4] [i_4]))));
            arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5] [i_4])) / (((/* implicit */int) arr_14 [i_4]))));
        }
        arr_21 [i_4] = ((/* implicit */int) (signed char)17);
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (934566931) : (((/* implicit */int) arr_17 [i_4] [i_4] [(_Bool)1])))) * (((/* implicit */int) (_Bool)0)))))));
        arr_22 [i_4] = ((/* implicit */unsigned char) ((long long int) var_8));
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_16 [i_6] [i_6]))))) ? (max((((/* implicit */int) var_9)), (1310625087))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
        var_22 = ((/* implicit */short) arr_15 [i_6]);
        var_23 = ((/* implicit */unsigned long long int) (~(934566931)));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 4; i_8 < 13; i_8 += 3) 
            {
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */signed char) arr_14 [i_8 - 2]);
                        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_7] [i_8 - 3] [i_9]))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (short)666))) ? (((/* implicit */long long int) 1473775513)) : (min((-1107793978880068157LL), (((/* implicit */long long int) (signed char)-23))))));
                        arr_31 [i_6] [i_7] [i_7] [i_9] = ((/* implicit */int) min((arr_25 [6U] [i_8 + 2] [i_8]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)7936)))))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_8 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_27 [i_8 + 3])) ? (arr_27 [i_8 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) arr_27 [i_7]);
            var_29 = ((/* implicit */unsigned int) max((var_29), (var_5)));
        }
    }
    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_10])) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_10])) ? (-934566930) : (((/* implicit */int) arr_32 [i_10])))))))) : (((/* implicit */int) var_6)))))));
        arr_35 [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) min((((/* implicit */short) var_1)), (var_0))))))) ? (min((max((3556457909647039203ULL), (((/* implicit */unsigned long long int) -1517350549554945861LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) var_3))));
}
