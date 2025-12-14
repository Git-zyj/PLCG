/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219253
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16633037218057530137ULL)) ? (1813706855652021453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123)))))) ? (((((/* implicit */int) var_11)) / ((((_Bool)0) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)127)))))) : (((/* implicit */int) (unsigned char)190))));
    var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)129)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) / (1813706855652021453ULL))))) != (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (unsigned char)164)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_9))) ^ (((/* implicit */int) (unsigned char)217))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                    var_20 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)20373))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */unsigned char) var_0);
                                arr_16 [i_0] = ((/* implicit */unsigned char) arr_15 [i_0]);
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_0])) << (((/* implicit */int) arr_14 [i_2] [i_1] [i_2] [(signed char)4] [i_1] [(short)18]))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */short) var_7);
        arr_18 [i_0] = (!(((/* implicit */_Bool) 16633037218057530162ULL)));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)164)))))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6]))) & (((((/* implicit */_Bool) arr_2 [(unsigned char)5])) ? (16633037218057530163ULL) : (arr_0 [i_0] [i_7]))))))));
                        var_25 = arr_22 [i_0] [i_5] [i_6] [i_0];
                    }
                    for (unsigned int i_8 = 3; i_8 < 16; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16633037218057530162ULL)) || (((/* implicit */_Bool) (unsigned short)0)))))) | (((((/* implicit */_Bool) arr_4 [i_5] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_15 [i_6]))))))));
                        arr_30 [i_0] [i_0] [i_5] [i_6] [i_6] [i_8 + 1] = ((signed char) arr_5 [i_0]);
                        var_27 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >> (((arr_14 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_28 [i_8] [i_6] [i_5] [(signed char)6] [(_Bool)1] [(_Bool)1]))))))) : (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >> (((((arr_14 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_28 [i_8] [i_6] [i_5] [(signed char)6] [(_Bool)1] [(_Bool)1])))) - (55))))));
                    }
                    arr_31 [i_0] [i_0] [i_0] = ((_Bool) arr_15 [i_0]);
                    arr_32 [i_0] = ((/* implicit */signed char) arr_29 [i_0] [i_5]);
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
    {
        arr_35 [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (unsigned char)129))))) / (((/* implicit */int) (unsigned char)236))));
        arr_36 [i_9] = ((/* implicit */unsigned char) (_Bool)0);
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~((~(max((((/* implicit */unsigned int) (_Bool)1)), (var_5))))))))));
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_13 + 1] [i_13] [i_13 + 1] [i_13] [i_13]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)34505)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)31037)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_22 [i_15] [i_15] [i_15] [i_15]))))) : (((((/* implicit */_Bool) 16633037218057530162ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_29 [i_15] [i_15]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))))) : (1813706855652021452ULL)))));
                        var_31 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min(((signed char)26), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) (short)16271))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) || ((_Bool)0)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
    {
        arr_54 [i_16] [i_16] = ((/* implicit */unsigned char) min((min((((/* implicit */int) max((var_12), (((/* implicit */unsigned short) arr_5 [i_16]))))), ((~(((/* implicit */int) var_1)))))), (((/* implicit */int) arr_28 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
        arr_55 [i_16] [i_16] = ((/* implicit */_Bool) var_14);
    }
    var_32 |= var_0;
}
