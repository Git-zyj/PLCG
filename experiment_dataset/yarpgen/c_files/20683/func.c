/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20683
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */short) var_13)), (var_10)))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_9)))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)224))));
    }
    for (signed char i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) > (((/* implicit */int) (unsigned char)27)))))));
        var_20 ^= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_1])))) || (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)15))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (unsigned char)137)))) <= (((/* implicit */int) arr_7 [i_3])))))));
            arr_10 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_2])))) : (((((/* implicit */_Bool) (unsigned short)13800)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) : (2451735953205500023LL)))));
            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3]))));
        }
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_15 [i_4] [i_4] [(short)16] = ((/* implicit */int) var_1);
            arr_16 [i_4] = ((/* implicit */unsigned short) (_Bool)1);
        }
    }
    var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((+(max((((/* implicit */unsigned int) var_9)), (var_12))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3556)))))));
    var_26 |= ((/* implicit */unsigned int) min((((/* implicit */int) ((short) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))), ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61302)) & (2059106246)))) ? (((long long int) arr_7 [i_7 + 1])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_7 - 1] [i_7 - 1])))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_21 [i_6] [i_7])) : (((/* implicit */int) var_1)))))))))))));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6]))))) << (((((((/* implicit */_Bool) arr_22 [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(unsigned char)16] [i_6] [(unsigned char)16]))) : (var_8))) - (25430LL)))));
                }
            } 
        } 
    } 
}
