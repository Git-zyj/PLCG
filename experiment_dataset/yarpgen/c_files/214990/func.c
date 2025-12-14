/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214990
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
    var_10 = ((/* implicit */_Bool) min((max((var_9), (var_3))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35865))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    arr_9 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)64)) : (arr_3 [i_0] [i_1])))));
                }
            } 
        } 
        var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) (short)32767)) ? ((-((+(-2147483643))))) : (((int) (+(((/* implicit */int) (_Bool)1)))))))));
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(arr_3 [i_3] [i_3])))) + ((+(var_4)))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (+((+((((-2147483647 - 1)) + (2147483584))))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (short i_7 = 4; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_26 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) (unsigned short)32768))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~((((_Bool)1) ? (arr_16 [i_3] [i_5 - 1]) : (var_5))))))));
                                var_15 |= ((/* implicit */int) -2531104647154450716LL);
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)192)))) >> (((min((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), ((~(var_4))))) + (1411621474309980837LL)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
    {
        var_16 *= ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)120)) : (2147483584)));
        arr_31 [i_8] [i_8] = ((/* implicit */long long int) (((_Bool)1) ? ((~(((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_7 [i_8]))))));
        var_17 |= ((/* implicit */unsigned char) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_18 -= ((/* implicit */short) (+(201326592)));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            var_19 -= ((/* implicit */unsigned long long int) (_Bool)1);
            var_20 = ((/* implicit */signed char) (_Bool)1);
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((-2147483647 - 1)))))));
            arr_34 [(unsigned short)11] [i_9] [i_9] = ((/* implicit */int) var_5);
        }
    }
}
