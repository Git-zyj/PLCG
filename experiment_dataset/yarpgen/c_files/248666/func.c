/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248666
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
    var_11 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (+(-7402040948375198727LL));
        var_12 = ((/* implicit */unsigned int) (-(((-1952380849) | (((/* implicit */int) (!((_Bool)0))))))));
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) 2128565698))), (max((arr_1 [i_0 - 1] [i_0]), (((/* implicit */unsigned int) 1952380849))))))), (((long long int) var_10))));
    }
    /* LoopNest 2 */
    for (short i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) max((((/* implicit */int) min((arr_3 [i_1 + 3] [i_2 + 3]), (((/* implicit */unsigned short) var_0))))), ((~(min((((/* implicit */int) var_2)), (1952380849)))))));
                var_15 |= ((/* implicit */unsigned short) (!(((arr_5 [(unsigned short)13] [i_1 + 2]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1187)))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    arr_9 [i_2] [i_3] [i_2 + 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64348))) == (835917594U)))) * ((+(((/* implicit */int) ((1505407910U) < (3406538116U))))))));
                    var_16 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned short) var_4))))) ? (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_2 - 3])) + (2147483647))) << (((var_6) - (4251877928U)))))), (min((((/* implicit */unsigned long long int) var_1)), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 32767U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)51928))))) || (((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (unsigned short)64348)))))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)1188)) : (((/* implicit */int) (unsigned short)64349))))) ? (((/* implicit */int) ((_Bool) ((1904403147U) | (((/* implicit */unsigned int) -1952380850)))))) : (((/* implicit */int) arr_4 [15U]))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)12165)) : (((/* implicit */int) (unsigned char)76))));
                    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1952380849)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 3]))))), (((/* implicit */unsigned int) (unsigned short)43614))));
                }
            }
        } 
    } 
}
