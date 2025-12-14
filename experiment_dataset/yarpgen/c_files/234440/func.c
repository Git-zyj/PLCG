/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234440
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
    var_15 *= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_4)))), ((((-(((/* implicit */int) var_6)))) / ((-(((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65506))))) ? (min((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9540))) : (var_7))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_1)), ((unsigned short)9540)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-((((+(((/* implicit */int) var_13)))) % ((~(((/* implicit */int) (unsigned short)9540))))))));
        arr_4 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (unsigned short)55988)))), (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_16 = min(((+(arr_9 [i_0] [i_3] [19U] [i_0] [i_3] [i_3]))), (((/* implicit */long long int) var_11)));
                        var_17 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_14))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)9547)) : (((/* implicit */int) (short)1984))))) ? (arr_9 [i_0] [2] [i_3 - 1] [i_3] [i_3 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32756))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */short) var_1);
            arr_18 [i_4] = ((/* implicit */short) var_9);
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_21 [i_4] = ((/* implicit */_Bool) arr_15 [i_4] [i_4]);
            arr_22 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? ((+(var_9))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55995))) > (arr_7 [i_4] [i_6] [i_6])))))))));
            var_18 = var_4;
        }
        var_19 = ((/* implicit */unsigned char) var_14);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max(((-(arr_20 [2LL] [i_4]))), ((-(((/* implicit */int) (unsigned short)65517)))))))));
    }
}
