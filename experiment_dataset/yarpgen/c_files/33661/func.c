/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33661
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-5682092314257554319LL), (-2624227762795614308LL)))) ? (var_9) : (var_6)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (signed char)0))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) 514813954))), ((+((-(((/* implicit */int) (signed char)0))))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_22 = ((/* implicit */short) (unsigned char)9);
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) ((unsigned long long int) (signed char)16)))))))));
            var_24 ^= ((/* implicit */short) max((((((/* implicit */long long int) var_12)) % (arr_5 [i_0] [i_1] [i_1]))), (((/* implicit */long long int) ((unsigned short) (unsigned short)50280)))));
        }
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_25 ^= ((/* implicit */short) min((min((((/* implicit */unsigned int) (short)16978)), (2373429846U))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_18)))) <= (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)15256))))))))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_17))));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_27 |= ((/* implicit */unsigned char) arr_1 [i_0] [i_3]);
            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_1 [i_0] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((unsigned int) var_14)))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_3] [i_3] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_3])))) - (4746)))));
        }
        for (short i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_10 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_17)), (var_5))))) : (((unsigned long long int) ((long long int) (_Bool)1)))));
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */int) ((unsigned char) ((unsigned int) arr_14 [i_4 + 2] [i_4] [i_4 + 2])));
            var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) ((int) -1663776402))) ? (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) arr_7 [i_0] [i_4]))))) : (((((/* implicit */int) arr_11 [i_0] [i_4 - 2])) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)26266)) : (((/* implicit */int) arr_0 [i_4]))))))))));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
            {
                {
                    arr_24 [i_5] [i_6] [i_7] = ((/* implicit */signed char) min(((unsigned short)50280), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_25 [i_7] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_20 [i_7 + 1] [i_7 + 2]) ? (((/* implicit */int) arr_20 [i_7 + 2] [i_7 + 2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-121)))) ? (((/* implicit */int) (unsigned char)144)) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)6478)) : (((/* implicit */int) (_Bool)1))))))));
                    var_31 = ((/* implicit */_Bool) ((unsigned short) var_4));
                }
            } 
        } 
        var_32 += ((/* implicit */long long int) arr_12 [13ULL] [i_5] [i_5]);
        arr_26 [i_5] = ((/* implicit */signed char) 2428330573U);
    }
    var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26269))));
}
