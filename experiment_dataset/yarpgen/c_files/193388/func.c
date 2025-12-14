/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193388
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
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((int) arr_1 [i_1] [i_1]));
                arr_6 [i_1] [(signed char)3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(arr_0 [i_1]))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_1] [i_0]))))))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) var_5);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                arr_15 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_13);
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [(signed char)17] [(signed char)17])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_10 [i_2] [i_2]))))) ? ((~(arr_4 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (short)26438)))))))) % (((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            }
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_19 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((signed char) arr_11 [i_2] [i_3] [i_5]))) <= ((~(((/* implicit */int) arr_16 [i_3])))))))));
                arr_20 [i_2] [i_3] [i_5] [i_3] = ((/* implicit */signed char) max((arr_10 [i_2] [(_Bool)1]), (((/* implicit */unsigned short) ((_Bool) (signed char)127)))));
                arr_21 [(_Bool)1] = ((/* implicit */signed char) ((var_9) ? (max((arr_4 [i_2] [i_3]), (arr_4 [i_3] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))));
                arr_22 [i_2] [i_2] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_13)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) arr_1 [i_2] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((((/* implicit */unsigned int) arr_3 [i_2])), (3531034240U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))));
            }
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_18 = ((/* implicit */_Bool) (-(var_4)));
                var_19 = var_10;
                var_20 = ((/* implicit */_Bool) (signed char)25);
            }
            arr_25 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (_Bool)0))) | (((/* implicit */int) (unsigned short)39231))))) ? (((/* implicit */int) (unsigned short)43440)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) && (arr_16 [i_2]))))));
        }
        arr_26 [13ULL] = ((/* implicit */signed char) (unsigned short)46029);
        var_21 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
    }
    var_22 = ((/* implicit */signed char) 5948525215770680896ULL);
}
