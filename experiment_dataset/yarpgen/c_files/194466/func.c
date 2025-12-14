/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194466
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
    var_16 = ((long long int) var_2);
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_9))))))) != (max(((+(17224745848146432671ULL))), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned short) (_Bool)1))))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 -= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0]))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
        var_19 &= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) (+(9223372036854775807LL)))) ^ ((+(arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_11 [i_2] [i_2] [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-29)), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_1] [i_2] [i_3])) : (((/* implicit */int) var_2)))))))));
                        arr_12 [i_1] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((var_1) & (arr_8 [i_0] [i_1 + 1] [i_2 - 2] [i_3]))))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) max(((short)29376), (((/* implicit */short) var_3)))))) % (((unsigned int) var_3)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))))))))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) var_12);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15646))) : (arr_14 [i_4]))))))));
        var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_13))))))) ? (((((((/* implicit */_Bool) -1956869664)) ? (7444323436642773437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))))) >> (((long long int) var_3)))) : (((/* implicit */unsigned long long int) ((arr_17 [i_4 - 1]) / (arr_17 [i_4 + 3]))))));
        arr_19 [i_4] = ((/* implicit */unsigned short) (~(arr_15 [i_4])));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 1435172796))));
    }
}
