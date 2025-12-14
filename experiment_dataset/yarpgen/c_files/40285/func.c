/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40285
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
    var_12 = 977838566;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((signed char) (unsigned char)31));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        arr_11 [i_0 - 1] [i_0] [i_2 - 1] [i_3] = ((unsigned short) (unsigned char)31);
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            var_14 |= ((/* implicit */short) arr_3 [i_2]);
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)202)) ? (arr_3 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */short) (unsigned short)65535);
                            var_17 ^= ((/* implicit */int) (unsigned char)90);
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)31838)) && (((/* implicit */_Bool) 6666858378980710012ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned short)65535))))))))));
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_18 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 - 3] [i_0 + 1] [i_0] = ((/* implicit */signed char) arr_16 [i_0] [i_1 - 1] [i_0] [i_6] [i_1] [4ULL]);
                            var_19 -= (unsigned short)1;
                            var_20 -= ((/* implicit */short) arr_10 [i_0 + 2] [i_6] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 1]);
                        }
                    }
                } 
            } 
        } 
    }
}
