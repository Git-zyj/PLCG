/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202403
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 |= ((/* implicit */short) arr_5 [i_0] [i_0 - 1] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        var_14 = min((((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */int) (short)-2074)) : (arr_5 [i_0 - 1] [i_0 - 1] [(unsigned char)5]))), (((/* implicit */int) (_Bool)1)));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_6]))))) ? (((/* implicit */int) (_Bool)1)) : (((((((/* implicit */int) arr_22 [i_4] [i_5] [i_5] [i_4])) * (((/* implicit */int) var_0)))) % ((~(((/* implicit */int) (short)26483)))))))))));
                    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) arr_17 [i_4 + 1])) : (((/* implicit */int) arr_13 [i_4 + 1]))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-2074)) < (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_20 [i_4 + 2])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5])))))));
                            var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [15U] [15U]))))), (max((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), (var_4)))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_20 [i_8 + 1])))) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */short) arr_18 [i_4 + 2] [i_4] [i_4 + 2]);
                            var_21 = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))))));
                            var_22 = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_7] [(_Bool)1] [(_Bool)1]))))))) | (((/* implicit */int) (unsigned short)65530))));
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23672)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)64708)) : (((/* implicit */int) (unsigned short)25609)))) : (((((/* implicit */int) (short)-2)) - (((/* implicit */int) (unsigned char)0))))))) : ((((((_Bool)1) ? (8674543666629042294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned short)827), (((/* implicit */unsigned short) (_Bool)0)))))));
                        }
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12256)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2046))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            for (unsigned char i_13 = 3; i_13 < 9; i_13 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)52573))))));
                    var_27 -= ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) var_3)) ? (2820391999U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12963))))), (((((/* implicit */_Bool) (unsigned short)6522)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23537))) : (6291456U)))))));
                }
            } 
        } 
    } 
}
