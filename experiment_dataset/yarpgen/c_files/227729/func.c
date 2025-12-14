/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227729
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))), (min((var_3), (((/* implicit */unsigned long long int) var_6)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) <= (((((/* implicit */_Bool) 4294967286U)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-69)), (var_2))))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63928))))), (((long long int) (unsigned short)12))))) ? (((/* implicit */int) (unsigned short)40964)) : (((/* implicit */int) var_12)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -6250086829182642589LL))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7680))) & (13LL)));
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6))))));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_19 [(short)12] [i_2] [(unsigned short)8] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-69)) : ((-(((/* implicit */int) var_2))))))));
                    arr_20 [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2807394663U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8184))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((((/* implicit */_Bool) (short)-13927)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) 921664336))))));
                    arr_21 [i_2] [i_3] [i_3 - 1] [i_2] = ((/* implicit */unsigned short) (+(4294967282U)));
                }
            } 
        } 
        arr_22 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - ((+(2036133984890948372LL)))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-52))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7 + 1] [i_5]))) : (min((21U), (24U)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_36 [i_2] [i_2] [i_6] [i_6] [i_7] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
                            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)124)), ((unsigned short)45644)));
                            arr_37 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_2] [i_8] = (+(2U));
                        }
                    }
                } 
            } 
        } 
        arr_38 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) 8589926400LL)), (8265331747829625540ULL)))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_9)), (var_2)))), (var_13)))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55925))) == (min((((/* implicit */long long int) (unsigned short)55925)), (-8589926400LL))))))));
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
}
