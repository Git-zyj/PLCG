/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248689
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
    var_10 *= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned char)22] [i_1] [2U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (!(arr_7 [i_0] [i_1] [i_0]))))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [(signed char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))))))));
                    var_14 = ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_2])));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((arr_1 [i_1]) ? ((-(-6896008419152986700LL))) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1))))))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)7135)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) % (4294967295U))) : (((/* implicit */unsigned int) min((827905695), (((/* implicit */int) (short)-7136))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) 4294967295U);
    }
    for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
    {
        var_17 = ((((/* implicit */_Bool) (signed char)-56)) ? ((((_Bool)1) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)14029))))));
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_10 [i_4] [i_4]))))))) || (((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) * (((/* implicit */int) (short)7119)))))));
        var_19 = ((/* implicit */short) (!((_Bool)1)));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((4294967284U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                var_21 = ((/* implicit */_Bool) 4294967295U);
                var_22 = ((/* implicit */short) arr_2 [8]);
                var_23 *= ((/* implicit */unsigned int) (!(arr_16 [i_5])));
                arr_21 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */signed char) arr_20 [i_5] [(_Bool)0] [i_5] [(_Bool)0]);
            }
            var_24 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_6 - 1])) * (((/* implicit */int) arr_0 [i_6 - 1]))));
        }
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))))));
            arr_26 [i_8] [i_8] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((arr_1 [(short)23]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)77)))))) ? (var_6) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)127)))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))))))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_7))));
        }
    }
}
