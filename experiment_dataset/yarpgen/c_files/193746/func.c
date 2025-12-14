/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193746
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
    var_12 += ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (+(((/* implicit */int) max(((unsigned short)7680), (((/* implicit */unsigned short) (unsigned char)42)))))));
                        var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8508)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)15826))))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)63719))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)49710)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0] [5U])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 14; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_22 [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_8 [i_0])) != (((/* implicit */int) (unsigned short)49710))))))));
                        arr_23 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29545))) | (((((/* implicit */_Bool) arr_6 [i_5])) ? (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18560))) : (2114222289U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 1])))))));
                        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_8 [i_0])) ? (max((((/* implicit */unsigned int) (signed char)-50)), (arr_19 [i_0] [(unsigned char)14] [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [(signed char)0] [i_6])))))))));
                        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)58373))))))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_6)))))) : (((/* implicit */int) arr_11 [i_0]))));
            arr_26 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_9 [i_0 + 2])) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) arr_9 [i_0 - 1])))), (((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */int) arr_9 [i_0 + 1])) : (((/* implicit */int) (unsigned short)8754))))));
        }
        arr_27 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)237)))));
    }
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (short)2823))));
    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_10)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)7316)) * (((/* implicit */int) var_9))))) : (max((var_10), (var_1)))))));
}
