/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54570
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((((short) var_9)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))) < (var_2))))));
        var_17 = ((/* implicit */short) (+((+(((/* implicit */int) (unsigned short)58927))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(arr_8 [i_0] [i_0]))))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_0] [i_1] [i_1] [i_1]), (var_15))))) : (((long long int) arr_3 [i_0] [i_1]))))));
                    var_19 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1 - 1] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_5);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((3761166212U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((long long int) ((_Bool) arr_2 [i_4] [i_2])));
                            arr_17 [i_4] [i_0] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */short) var_0);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) | (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_1)))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_9))));
                        }
                        var_22 -= ((/* implicit */_Bool) ((((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) arr_12 [i_2 - 1] [(short)22] [i_2] [i_1]))))) - (((/* implicit */int) ((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))) == (((/* implicit */int) arr_15 [i_1 - 1] [i_2 - 1] [20U] [i_3 + 1])))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_0 [i_0])))))))) > (((var_8) - (((/* implicit */unsigned long long int) ((long long int) var_11))))))))));
                    }
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */unsigned long long int) 0LL)) : (7212381158608695350ULL)));
            var_25 -= ((/* implicit */signed char) (+(((long long int) 1803511704197581899LL))));
        }
        /* LoopNest 2 */
        for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_28 [i_5] [i_7] [i_5] [i_7] = ((/* implicit */long long int) ((_Bool) var_2));
                    arr_29 [i_5] [i_5] [(short)10] |= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_5])));
                }
            } 
        } 
        var_26 |= ((/* implicit */signed char) ((((unsigned long long int) (!(((/* implicit */_Bool) var_5))))) != (((/* implicit */unsigned long long int) arr_3 [i_5] [i_5]))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 3; i_11 < 10; i_11 += 4) 
                {
                    {
                        var_27 = ((/* implicit */long long int) arr_0 [i_5]);
                        var_28 += ((unsigned char) (+(((/* implicit */int) var_11))));
                        var_29 -= ((/* implicit */unsigned short) (_Bool)1);
                        var_30 = ((/* implicit */_Bool) var_1);
                        arr_40 [i_10] [i_10] [i_9] [i_9] [i_5] = ((/* implicit */_Bool) ((((arr_9 [i_9] [i_9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_26 [i_9 - 1] [i_9]))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_14) < (var_2))))) ^ (max((var_2), (((/* implicit */long long int) arr_32 [i_5] [i_10])))))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) + (var_2))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 3696968546U)) : (-2631586091842049287LL))))))))));
}
