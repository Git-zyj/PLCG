/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228689
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
    var_15 ^= ((/* implicit */unsigned short) var_13);
    var_16 ^= min((var_8), (((/* implicit */signed char) var_7)));
    var_17 = ((/* implicit */unsigned char) (short)25452);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_18 = (+((+(((/* implicit */int) var_7)))));
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-25452)), (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [(unsigned char)14] [i_1] [0LL] [i_1] [i_4])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0])), (arr_4 [i_4]))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (unsigned short i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_6] [i_6] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(var_7))))));
                            var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [(unsigned short)1]) / (((/* implicit */int) arr_9 [i_0] [14U] [i_0] [i_7 + 1]))))) ? (((((/* implicit */_Bool) (short)25446)) ? (((/* implicit */int) arr_17 [(unsigned short)13] [(unsigned short)13] [i_5] [(unsigned short)13])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) max((((/* implicit */short) var_0)), (arr_10 [i_5])))))) == ((+(((/* implicit */int) arr_12 [i_7] [i_7 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        arr_23 [i_0] = ((/* implicit */int) (((+(2980651211788003550ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_0] [(unsigned short)11]), (((/* implicit */short) var_11))))))));
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31464))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_7 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((5573707849665035643LL), (((/* implicit */long long int) var_14)))))))));
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        arr_26 [(unsigned char)5] = (_Bool)1;
        arr_27 [(unsigned char)12] [i_8] = ((/* implicit */unsigned short) (+((-((-(18)))))));
    }
}
