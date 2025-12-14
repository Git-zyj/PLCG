/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219854
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_1))));
            arr_6 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((arr_0 [8U] [i_1 - 1]) / (((/* implicit */int) arr_3 [i_1]))))))) ? (arr_0 [8] [i_1]) : ((-(arr_0 [6U] [i_1 + 1])))));
            var_18 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (var_2)))))))));
            var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_12))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-346186123445327110LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_6)), ((signed char)21)))))));
        }
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
        {
            var_20 -= ((max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63092)) != (((/* implicit */int) (unsigned short)1145))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38517))));
            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) % (min((((/* implicit */long long int) var_5)), (arr_7 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_2] [(signed char)4])))))))));
        }
        var_22 ^= ((/* implicit */unsigned short) var_5);
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) 4055570808U))));
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned int) (((!((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [(_Bool)1])) || (var_6)))) : (max((arr_8 [i_0] [10]), (var_4)))))))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((1759892291) != (((/* implicit */int) (signed char)-8))))), (((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)-13021)) + (13034)))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) min((((/* implicit */short) (!((_Bool)1)))), (min(((short)25244), (((/* implicit */short) (signed char)21))))))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) arr_10 [i_0] [i_4] [i_4])) : (((/* implicit */int) var_13)))))));
            var_27 -= ((/* implicit */unsigned char) ((((unsigned long long int) var_15)) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_4]))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (4277406334U)))) : (arr_7 [i_5 + 1])));
                        var_29 &= ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_5]))))) != (arr_7 [i_5 + 1])));
                        arr_18 [i_4] [i_0] [i_4] [i_5] [i_6] |= ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_4]))));
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
        {
            arr_21 [i_0] [i_7] [i_7] |= ((/* implicit */int) var_8);
            var_30 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (((arr_20 [6] [i_7] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_7] [i_7] [i_7]))) : (max((7671110664614548585ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        }
    }
    var_31 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_5)), (var_11)));
}
