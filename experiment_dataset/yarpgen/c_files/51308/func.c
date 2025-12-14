/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51308
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) (short)32756)))), (((((/* implicit */int) (short)32746)) / (((/* implicit */int) var_3))))))) % (min(((+(var_8))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | ((-(((/* implicit */int) var_11)))))))));
    }
    for (int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1])) ? (((((/* implicit */int) (short)32762)) | (((/* implicit */int) (short)1022)))) : ((~(arr_5 [i_1] [i_1 + 1])))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_13 [(short)0] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned char)111))))) ? ((((_Bool)1) ? (((/* implicit */int) ((arr_8 [i_1] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_13 [6U] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)(-32767 - 1))))))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (min((((/* implicit */int) (signed char)63)), (650250245))) : (((/* implicit */int) max((((/* implicit */short) var_1)), (arr_13 [0LL] [i_2] [i_3] [i_3] [i_2])))))))))));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [(unsigned char)4])) && (((/* implicit */_Bool) (unsigned char)92)))))));
                        var_21 = ((((/* implicit */_Bool) max((arr_8 [i_1 - 1] [i_1 - 1]), (arr_8 [i_1 + 1] [i_1 + 1])))) ? ((+(((int) var_3)))) : ((+(((/* implicit */int) var_10)))));
                        arr_14 [i_2] [i_2] [i_2] [i_4] = (+(((((/* implicit */_Bool) arr_11 [i_2])) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (var_13)));
                    }
                } 
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_23 *= arr_11 [i_5];
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            var_24 *= ((/* implicit */short) var_9);
            var_25 += ((/* implicit */long long int) var_6);
            var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) < (((/* implicit */int) arr_6 [i_6 + 2])))) ? ((+(((/* implicit */int) arr_6 [i_6 + 1])))) : (((/* implicit */int) max((((/* implicit */short) arr_6 [i_5])), (arr_13 [i_5] [i_6] [i_6] [i_6] [i_6]))))));
        }
    }
    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) 
    {
        var_27 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)32725)) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133)))))));
        arr_21 [i_7] = ((/* implicit */signed char) var_10);
    }
    /* LoopNest 2 */
    for (unsigned char i_8 = 1; i_8 < 23; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-4LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100)))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)32715)))))));
                var_29 = ((/* implicit */short) arr_24 [i_8] [i_9]);
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (+(((/* implicit */int) ((arr_23 [i_8 + 1]) != (((/* implicit */int) arr_24 [i_8 - 1] [i_8 + 1]))))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_9);
    var_32 -= (~(max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))), ((~(((/* implicit */int) var_15)))))));
}
