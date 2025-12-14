/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246967
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((max((arr_1 [i_0]), (arr_1 [i_0]))), ((short)-31631)));
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1994170786U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) arr_0 [9] [i_0])) : (((/* implicit */int) max(((short)(-32767 - 1)), (arr_0 [i_0] [i_0]))))))), ((~(300303621U)))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10678)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (var_6))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [0ULL])))) + (2147483647))) << (((((((/* implicit */_Bool) 6233242871179455281LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_1 [i_0])))) - (32767))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) 6233242871179455296LL))), ((~(((/* implicit */int) var_9))))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) (short)0))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)23)), (((((((/* implicit */_Bool) 3854857118U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1] [i_1])))) ^ (((/* implicit */int) (unsigned char)143))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) arr_15 [i_1] [i_1] [i_1]);
                    arr_17 [13U] [12U] [i_3] = ((/* implicit */unsigned char) (short)32767);
                    var_12 = ((/* implicit */int) max((max((((unsigned int) (short)6434)), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)233))))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_7 [i_3])))), (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_7 [i_1])))))))));
                }
            } 
        } 
    }
    var_13 = ((/* implicit */short) var_5);
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((6233242871179455276LL) / (((/* implicit */long long int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (signed char)78)) : (var_4)))) : (max((((/* implicit */unsigned int) (unsigned short)5428)), (var_5)))))) ? (((unsigned int) max((var_6), (0ULL)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((unsigned char) var_1)), (max(((unsigned char)1), (((/* implicit */unsigned char) var_1)))))))));
}
