/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240754
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [(_Bool)1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) 1899385920806925472LL)) ? (var_9) : (-1712339960))) : (((/* implicit */int) arr_0 [i_0])));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            var_11 -= ((/* implicit */unsigned short) ((long long int) arr_1 [7] [i_1]));
            var_12 = ((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 + 1]);
        }
        arr_6 [i_0] [i_0] = ((/* implicit */short) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 3])))));
        var_13 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) arr_1 [i_0] [2])));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((_Bool) ((_Bool) arr_4 [i_0] [i_2]))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_15 = ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) -1712339960)) : (1899385920806925477LL));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_10))));
                            var_17 &= ((/* implicit */unsigned int) arr_8 [i_3] [(_Bool)1]);
                            var_18 &= ((/* implicit */long long int) arr_12 [i_3]);
                        }
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9867795411809393446ULL)) ? (arr_9 [i_3]) : (arr_9 [i_0])));
                            var_20 = ((/* implicit */long long int) arr_0 [i_0 + 2]);
                        }
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_21 -= arr_3 [(unsigned short)9];
                            arr_21 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) ((arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0]) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0])))));
                            arr_22 [i_4] [i_4] [i_4] [(_Bool)1] [3U] [i_0] = arr_11 [i_0] [i_2] [i_0] [i_0];
                        }
                        var_22 &= ((/* implicit */short) arr_4 [i_0] [i_0]);
                        arr_23 [5] [5] [i_4] [5] [i_0] = ((/* implicit */short) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            var_23 = (_Bool)1;
            var_24 = arr_14 [i_0 - 1] [i_0 + 3];
            var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_10 [i_8] [i_0] [i_0]));
        }
    }
    var_26 += ((/* implicit */int) var_2);
}
