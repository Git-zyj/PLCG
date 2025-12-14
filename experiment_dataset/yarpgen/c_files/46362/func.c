/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46362
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_5 [i_1] [8U] [i_1] [0U])))))))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : ((~(((((/* implicit */_Bool) (unsigned short)59480)) ? (2147483626) : (((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) (((+(((/* implicit */int) var_4)))) - (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) min(((unsigned char)0), (((/* implicit */unsigned char) var_11))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */signed char) max((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) + (9U))) ^ (((/* implicit */unsigned int) 2147483621)))), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)136)) / (((/* implicit */int) (unsigned char)1)))) >= ((~(((/* implicit */int) arr_14 [i_3] [i_3] [16U] [i_3] [i_3] [i_3])))))))));
                                var_16 = ((/* implicit */unsigned short) arr_5 [i_3] [16LL] [i_5] [i_4]);
                            }
                        } 
                    } 
                    var_17 = min((((/* implicit */unsigned int) var_0)), ((+(arr_12 [i_3] [i_4] [i_4] [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 16; i_8 += 1) 
                    {
                        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */unsigned short) min((arr_7 [i_8]), (((/* implicit */unsigned long long int) var_1))));
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(arr_22 [i_8 - 3] [i_8 - 3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned long long int) arr_2 [i_3] [i_3] [i_3]);
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [(unsigned short)11] [0U] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) min(((unsigned char)1), (var_4)))) : (((/* implicit */int) (unsigned short)30)))))))));
    }
}
