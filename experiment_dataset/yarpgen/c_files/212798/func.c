/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212798
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : ((-(8027976054193256959ULL)))))));
        arr_4 [i_0] [i_0] |= (~((~(((/* implicit */int) arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        var_16 = ((/* implicit */int) ((unsigned int) arr_1 [(_Bool)1]));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) arr_0 [i_2 - 1]);
            /* LoopNest 3 */
            for (long long int i_3 = 3; i_3 < 7; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((arr_5 [i_4]) ? (((/* implicit */unsigned int) 2147483647)) : (var_10)))) : (((arr_13 [i_4] [i_5]) << (((((/* implicit */int) var_5)) - (50)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_11 [i_2]))))) : (arr_6 [i_3 + 3])));
                            var_19 = ((/* implicit */short) 1073741823);
                        }
                    } 
                } 
            } 
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) min(((-((~(((/* implicit */int) arr_11 [i_1 + 1])))))), (arr_10 [(signed char)9] [i_1 - 1])));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+((+(1073741831))))))));
        }
    }
    var_21 *= ((/* implicit */short) var_14);
}
