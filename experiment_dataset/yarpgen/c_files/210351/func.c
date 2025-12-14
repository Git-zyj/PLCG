/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210351
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-112))) + (-6455122112642812948LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) var_2);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_3 [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_15 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(-759150212))) : (((/* implicit */int) var_8)));
                            arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                            arr_18 [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (unsigned short)58505)))));
                            arr_19 [i_4] [i_3] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)151)) || (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) var_11))));
                        }
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 3) 
            {
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_29 [i_5] [i_7] [i_7] [i_8 - 1] = ((/* implicit */long long int) (+(((int) arr_24 [i_6] [i_8]))));
                        arr_30 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */unsigned short) ((signed char) arr_10 [i_5] [i_6] [i_7] [i_7]));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1445976552U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_6] [i_7 - 1] [i_8 + 1]))) : (arr_23 [i_7] [i_5]))) & (((-6455122112642812922LL) ^ (6455122112642812971LL)))))) ? ((((-(6455122112642812945LL))) / (min((-6455122112642812945LL), (((/* implicit */long long int) arr_0 [i_7 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_7] [i_8])) + (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? (((/* implicit */int) var_11)) : (var_10)))) : (((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_8 - 1] [i_8] [i_7] [i_7] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_23 [i_7] [i_7])))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_5])), (6455122112642812948LL)))) ? (((((/* implicit */_Bool) 3022953660U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)2)))) : (((/* implicit */int) (unsigned short)7030)))) | (((/* implicit */int) var_0)))))));
    }
}
