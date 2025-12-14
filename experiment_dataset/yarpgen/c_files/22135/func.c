/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22135
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)29365)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65529)))), (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_7))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_4] [i_0] [i_3] [i_1 + 1] [i_4] [i_3] = ((/* implicit */long long int) (_Bool)1);
                            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)));
                            var_17 -= ((/* implicit */unsigned char) ((var_5) <= (-361249766529008604LL)));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_17 [i_5] [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) (+(arr_0 [i_0])));
                            var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0])) % (arr_12 [i_1 - 1])));
                        }
                        var_19 = ((/* implicit */unsigned int) ((var_6) << (((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) : (arr_0 [i_3]))) - (105LL)))));
                    }
                } 
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1494752941U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) : (arr_12 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned short) -1);
        arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (_Bool)1))));
    }
    var_21 = ((/* implicit */long long int) min((var_21), (var_9)));
}
