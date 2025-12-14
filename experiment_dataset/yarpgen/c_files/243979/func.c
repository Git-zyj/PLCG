/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243979
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) 8599984891070648388LL);
        arr_3 [i_0 - 4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned long long int) 3173762189758720625LL)) : (235350351724709263ULL)))) ? (((/* implicit */unsigned long long int) -492044342)) : (max((((((/* implicit */_Bool) var_0)) ? (12771265588045473317ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 3])))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (5675478485664078299ULL) : (12771265588045473317ULL)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            var_11 ^= ((/* implicit */int) max((5675478485664078298ULL), (max((((/* implicit */unsigned long long int) arr_9 [i_1])), (5675478485664078298ULL)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
                            {
                                arr_20 [i_5 - 1] [i_4] [i_3] [i_1] [i_2] [i_2] [i_1] &= ((/* implicit */unsigned char) 5675478485664078299ULL);
                                arr_21 [i_1] [i_3] [i_4] [i_5] = -4443440548646803801LL;
                                var_12 &= ((/* implicit */int) 12771265588045473316ULL);
                            }
                            var_13 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)37266)) > (((/* implicit */int) (unsigned char)217)))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) 5675478485664078299ULL);
            }
        } 
    } 
    var_15 = max((((/* implicit */unsigned short) (short)-16211)), ((unsigned short)44594));
}
