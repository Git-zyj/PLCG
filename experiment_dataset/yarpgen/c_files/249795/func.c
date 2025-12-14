/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249795
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            var_19 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) arr_0 [2ULL] [i_0]))) ? (((/* implicit */long long int) (~(arr_2 [i_1])))) : (max((1096586634297021661LL), (((/* implicit */long long int) (short)22561)))))), (((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) arr_4 [i_1 + 2]))))))));
            arr_5 [i_0] [i_0] [i_1 - 2] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) (signed char)-48)) ? (arr_2 [(unsigned char)12]) : (arr_2 [i_0]))), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) - (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_2))) - (((/* implicit */int) ((unsigned char) var_13))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_1 - 1] [8ULL]))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (arr_2 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1 - 2] [2LL]))))))));
            }
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_12 [i_1] [i_1 - 1] = ((/* implicit */_Bool) min((((arr_7 [i_0] [i_0]) ^ (arr_7 [i_0] [i_3]))), (((/* implicit */unsigned int) min(((unsigned short)54900), (((/* implicit */unsigned short) (short)-23443)))))));
                        var_22 -= ((/* implicit */short) max((((/* implicit */int) (!((_Bool)1)))), (max((((/* implicit */int) arr_9 [(unsigned char)12])), (-1291776169)))));
                    }
                } 
            } 
            arr_13 [16LL] [i_0] = ((/* implicit */signed char) arr_6 [i_0]);
        }
        arr_14 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((short) arr_3 [i_0] [i_0] [i_0])));
    }
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        arr_17 [(short)16] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [(unsigned char)15] [i_5] [i_5])))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [(unsigned char)2] [i_6])) ? (arr_8 [i_5] [i_6]) : (arr_8 [i_5] [i_6]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */int) (unsigned short)10635)), (-1291776182))))))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */int) (signed char)28)), (-1291776197))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (101812285U)))), (5800247074397477006ULL))))))));
        }
        var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) arr_4 [i_5])))))))), (((unsigned int) var_1))));
        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-16384))))) ? (((((/* implicit */int) arr_0 [i_5] [i_5])) - (((/* implicit */int) (unsigned short)54885)))) : ((+(((/* implicit */int) (unsigned char)94))))))), (max((((/* implicit */unsigned int) (unsigned short)41925)), (2346975251U)))));
        arr_21 [15U] [i_5] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) arr_9 [i_5])) : (((/* implicit */int) arr_9 [i_5])))));
    }
    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), (((unsigned char) var_2)))))));
    var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned short) (signed char)27)))))));
}
