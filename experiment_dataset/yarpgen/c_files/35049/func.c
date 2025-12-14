/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35049
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_17 += ((unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), ((~(arr_9 [i_2] [i_1] [i_2] [i_3] [i_2] [i_1])))));
                        var_18 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_10 [i_1] [i_1] [i_2] [i_1 + 1] [i_3] [(signed char)8])) & (((/* implicit */int) (unsigned char)255))))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            var_19 ^= ((/* implicit */signed char) ((unsigned short) ((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_0]))))));
                            var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_10 [i_1 + 1] [i_1 + 1] [i_0] [i_3 + 1] [i_4] [i_4 + 1]), (arr_10 [i_1 + 1] [i_1 + 1] [i_0] [i_3 + 1] [i_1 + 1] [i_4 + 1])))), (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_3] [i_0] [i_3 + 1] [i_1 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_2] [i_0] [i_3 + 1] [i_3 + 1] [i_4 + 1])) : (((/* implicit */int) arr_10 [i_1 + 1] [(unsigned char)9] [i_0] [i_3 + 1] [i_1 + 1] [i_4 + 1]))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_15 [i_0] [3ULL] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((346923419) / ((+(((/* implicit */int) arr_1 [i_0] [(signed char)7])))))) + (((/* implicit */int) (unsigned short)65523))));
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_0 [i_3]))));
                            var_22 += ((/* implicit */long long int) var_3);
                        }
                        /* vectorizable */
                        for (short i_6 = 4; i_6 < 7; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                            var_24 = ((/* implicit */unsigned short) 6847093022935421299LL);
                            arr_20 [(signed char)6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6847093022935421291LL)) ? (6847093022935421306LL) : (((/* implicit */long long int) 4294967274U))));
                            var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1]))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_6] [i_0] [i_2] [i_3])) ? (6847093022935421292LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6])))))));
                        }
                        for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_2] [(signed char)4] [i_0] [i_7 + 1] = ((/* implicit */int) min(((+(min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_18 [i_7] [7U] [i_1] [i_1])))))), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)12)))));
                            arr_24 [i_0] [(signed char)6] [i_0] [i_2] [i_3 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) 218446791U)) : (arr_5 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0] [i_7]), (((/* implicit */short) var_15))))))))) / (max((((/* implicit */unsigned long long int) (unsigned char)252)), (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) 6847093022935421297LL)) : (7536759668212482755ULL)))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) arr_6 [i_0] [i_1 + 1] [7LL]);
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                var_27 = ((/* implicit */int) min((max(((~(arr_17 [i_0] [i_8 + 1] [i_1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6147)))))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_8] [i_8])) - (var_2)))))));
                arr_27 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)240)))))))) & (arr_17 [i_0] [i_0] [i_0] [i_0])));
            }
            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */long long int) (+(((/* implicit */int) arr_26 [i_9] [i_1 - 1]))))) | (var_0))) : (((/* implicit */long long int) var_10))));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 7; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) ((short) var_16));
                            var_30 = min((((/* implicit */unsigned long long int) (unsigned char)248)), (arr_19 [i_0] [i_1 - 1] [i_11] [i_11] [i_0] [i_0]));
                        }
                    } 
                } 
                var_31 = ((unsigned long long int) ((unsigned int) arr_8 [i_1 + 1]));
                arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)41910))))));
            }
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -69277689)) ? (((/* implicit */int) arr_1 [i_12] [i_12])) : (((/* implicit */int) (short)-11238))))) ? (((/* implicit */int) arr_1 [i_12] [i_12])) : ((((!(((/* implicit */_Bool) -5320796768116730379LL)))) ? (((/* implicit */int) var_7)) : (max((var_10), (((/* implicit */int) var_7))))))))));
            var_33 = ((/* implicit */unsigned int) var_6);
        }
        var_34 += ((/* implicit */long long int) max(((+(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_31 [2] [2] [i_0]))));
    }
    var_35 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (10U) : (var_8)))))), (2889515024327695577LL)));
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -11LL)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) (unsigned char)13))))) : (((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_8))))));
    var_37 ^= ((/* implicit */signed char) max((((((/* implicit */int) var_13)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))), ((((~(134217720U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_1))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 3) 
    {
        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 3) 
            {
                {
                    arr_47 [i_13] [0LL] [i_13] [i_14] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_45 [i_15] [i_15] [i_15 - 1])) ? (arr_43 [i_13 - 2] [i_15] [i_15 + 1]) : (arr_43 [i_14] [i_14] [i_15 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) 18U)))))));
                    var_38 = (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (4068231395U)))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_13 - 1] [i_15 - 1] [i_15 + 1])) && (((/* implicit */_Bool) arr_46 [i_13 - 1] [i_15 - 1]))))));
                }
            } 
        } 
    } 
}
