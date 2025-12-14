/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225463
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_2 [i_0] [i_1]))))))) == (((((/* implicit */_Bool) arr_2 [2U] [i_1])) ? (arr_4 [(unsigned short)6] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0] [3ULL] [i_0]), (arr_1 [i_0])))))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0] [i_0])))) ? (6984027626458948862LL) : (((/* implicit */long long int) 2147483635)))))));
                var_15 += ((/* implicit */long long int) ((int) ((unsigned int) arr_0 [i_0] [i_1])));
                var_16 += ((/* implicit */unsigned int) ((short) min((((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)9] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)76)))), (((/* implicit */int) ((7394951248072363342LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
        /* LoopSeq 1 */
        for (int i_3 = 4; i_3 < 18; i_3 += 2) 
        {
            var_18 ^= ((/* implicit */unsigned int) arr_8 [i_2] [i_2 + 1] [i_3 + 1]);
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_19 -= ((int) (+(((/* implicit */int) var_1))));
                arr_11 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_8 [i_3 + 1] [i_3] [i_3])) * (((/* implicit */int) arr_8 [i_3 - 1] [i_3] [i_2 + 2])))));
                var_20 &= ((/* implicit */unsigned int) var_5);
                var_21 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((arr_5 [i_2]) <= (((/* implicit */long long int) arr_10 [10LL] [i_3] [i_4] [i_2]))))), (arr_9 [i_2 + 3] [i_2] [i_4])))));
            }
            arr_12 [i_2] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_3] [i_3]))) % (arr_5 [i_2])))))), (var_4)));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_6 [i_2 + 2] [i_2]), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) ((signed char) var_9)))))) ? (((/* implicit */int) arr_8 [i_2] [i_3] [2U])) : ((-(((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 1]))))));
            arr_13 [i_2] = ((/* implicit */int) ((unsigned short) arr_5 [i_2]));
        }
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2 + 2])) * (((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_2 - 1] [i_2 + 1] [i_2]), (arr_8 [i_2 - 1] [i_2] [i_2]))))) : (((((((/* implicit */long long int) var_9)) ^ (var_5))) >> (((/* implicit */int) ((signed char) arr_10 [i_2] [i_2] [i_2] [i_2]))))));
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)25498))));
        arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-4))) != (min((arr_5 [i_2]), (max((var_10), (((/* implicit */long long int) (signed char)-77))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_5] [i_5]));
        var_25 = ((/* implicit */unsigned int) var_1);
    }
}
