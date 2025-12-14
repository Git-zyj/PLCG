/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36170
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned short) ((unsigned int) var_6));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0])))) : ((~(arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 3]))))) - (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) != (((/* implicit */int) arr_3 [i_0] [(_Bool)1])))) ? (((/* implicit */int) (short)-26245)) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2] [i_2])))))));
                }
            } 
        } 
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~((-(1994801873))))))));
        var_14 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((var_0) && (var_0)))))))));
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)31)) : (((((/* implicit */int) var_11)) - (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((_Bool) (_Bool)0)))));
    var_16 -= var_7;
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(1994801879)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))) : (((((/* implicit */_Bool) -1994801874)) ? (906572080U) : (((/* implicit */unsigned int) max((-1994801875), (((/* implicit */int) (unsigned short)29)))))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)240)), (arr_19 [i_3] [7U] [3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))) : (var_4)))) ? (((unsigned long long int) (unsigned short)41)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (((unsigned long long int) arr_7 [i_3] [0] [i_5]))))))))));
                            }
                        } 
                    } 
                } 
                var_19 ^= ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
}
