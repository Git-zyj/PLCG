/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47266
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))));
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+((~(3841701102298990215LL))))))));
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -3841701102298990215LL)) ? (arr_4 [i_0 + 1] [i_1] [i_2 + 1]) : (arr_4 [i_0 - 2] [i_2] [i_2 + 1]))))));
                arr_7 [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(-7311736631234503366LL)))) ? ((~(35184371040256ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
                var_22 = ((/* implicit */_Bool) arr_3 [i_0]);
            }
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_0 [i_1 + 3]))));
                arr_10 [i_1] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
            }
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                var_24 = ((/* implicit */long long int) (+(arr_6 [i_0] [i_0 - 1] [i_0] [i_4])));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_4] [i_0] [i_0 - 2]))));
                    arr_15 [i_0] [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) (~(-3841701102298990195LL)));
                }
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_26 -= ((/* implicit */unsigned long long int) arr_2 [i_0 + 2]);
                    arr_19 [i_0] = ((((/* implicit */_Bool) arr_0 [i_4])) || (((/* implicit */_Bool) arr_9 [i_1] [i_4] [i_4])));
                }
                for (unsigned char i_7 = 2; i_7 < 19; i_7 += 1) 
                {
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7])) >> (((((/* implicit */int) var_4)) - (210)))));
                    var_28 = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_0))))));
                }
                for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_29 = arr_20 [i_0] [i_1] [i_4] [i_4];
                    var_30 = ((/* implicit */unsigned int) ((arr_4 [i_1 + 2] [i_0 - 3] [i_0 - 2]) < (((/* implicit */long long int) arr_16 [i_0 - 1] [i_0] [i_0 - 2] [i_1 - 1]))));
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0 + 3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 3]))) : (arr_16 [i_1 - 1] [i_1] [i_0 - 2] [i_1]))))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1 + 2])))))));
                        arr_27 [i_0] [i_1] [i_9] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32763)) * (((/* implicit */int) arr_9 [i_0] [i_4] [i_8])))) * (((/* implicit */int) ((_Bool) arr_4 [i_1] [(_Bool)1] [(_Bool)1])))));
                        var_33 = ((/* implicit */signed char) (+(956949526963491643ULL)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_8]))) < (arr_23 [i_0] [i_1] [i_4] [i_4] [i_4] [i_10]))))));
                        var_35 = ((/* implicit */unsigned int) var_10);
                        var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_17 [i_4] [i_8] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 3])))) : (((/* implicit */int) arr_18 [(_Bool)1] [i_1] [i_1] [i_10]))));
                        arr_30 [i_0] [i_0] [i_4] [i_0] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_0 + 2] [i_4])) ^ (((/* implicit */int) arr_24 [i_0 + 2] [i_10]))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (short i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        {
                            arr_36 [i_11] [i_11] = ((/* implicit */_Bool) (((~(3841701102298990221LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_11] [i_11] [(_Bool)1])))));
                            arr_37 [i_12] [i_12] [i_11] [i_11] = ((/* implicit */long long int) ((arr_25 [i_0 + 1] [i_0] [i_12 - 1] [i_0 + 1] [i_12] [(_Bool)1] [i_1 - 1]) ? (arr_23 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_12] [i_12 - 1] [i_0 + 1] [i_0] [i_0])))));
                            arr_38 [i_0] [i_1] [i_4] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) 2096128)) ? (var_6) : (((/* implicit */int) arr_28 [11U] [i_1] [i_1] [i_1] [i_1])))) : ((~(((/* implicit */int) var_0))))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_13 = 1; i_13 < 19; i_13 += 2) 
        {
            arr_41 [i_0] = ((/* implicit */unsigned int) 8323072LL);
            arr_42 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) % (arr_22 [(unsigned char)11] [i_0] [i_13] [2ULL])))));
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                arr_45 [i_0] [i_13] [i_13 + 1] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -3841701102298990216LL)))))));
                arr_46 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0 - 2] [i_13 + 1] [i_14] [i_14])) ? (((/* implicit */int) arr_21 [i_13 + 1] [i_0 - 1] [i_13 + 1] [i_0 - 1] [i_13 + 2])) : (((/* implicit */int) (signed char)114))));
                arr_47 [i_0] [i_13] [i_14] = ((/* implicit */short) arr_18 [i_14] [i_13 - 1] [i_0 - 2] [i_0]);
            }
            arr_48 [i_13] |= ((((/* implicit */_Bool) arr_20 [i_0 + 3] [i_13 + 1] [i_13 - 1] [(_Bool)1])) && (((/* implicit */_Bool) arr_20 [i_0 + 2] [i_0 + 2] [i_13] [(_Bool)0])));
        }
        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(17576366508366476587ULL)))) ? (((/* implicit */long long int) arr_35 [i_0 + 3] [i_0] [i_0] [i_0 - 2] [14U] [i_0])) : (arr_22 [i_0] [i_0] [i_0 - 2] [i_0]))))));
    }
    var_38 = ((/* implicit */short) var_8);
    var_39 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) <= (var_2))))) ^ (3841701102298990179LL));
    var_40 = 2096132;
}
