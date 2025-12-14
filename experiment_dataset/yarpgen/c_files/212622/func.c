/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212622
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
    var_16 -= ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (((unsigned char) arr_0 [i_0] [i_0]))))), (min((arr_0 [i_0 - 1] [i_0]), (((/* implicit */int) var_2))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            arr_7 [i_1 + 3] [i_1 + 3] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)24)) << (((11197431726722802803ULL) - (11197431726722802778ULL))))))));
            arr_8 [i_0 - 1] [i_1 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)199)) : (var_15))) * (((/* implicit */int) max((arr_4 [i_1 + 3] [i_0 + 1] [i_0 - 1]), (arr_4 [i_1 - 2] [i_0 - 1] [i_0 + 1]))))));
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)-87)))), ((+(((((/* implicit */_Bool) 765441049U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)96))))))));
            var_17 = ((/* implicit */int) (unsigned char)65);
        }
        /* vectorizable */
        for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            arr_14 [i_0] [i_2] [i_2 + 1] = ((/* implicit */int) var_12);
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_12 [i_2 + 1] [(short)13] [i_2]))))));
            arr_15 [i_2] = ((/* implicit */long long int) (unsigned char)96);
        }
        for (unsigned int i_3 = 3; i_3 < 16; i_3 += 1) 
        {
            arr_18 [i_3] = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)124)) ? (arr_0 [i_0] [i_3 + 1]) : (((/* implicit */int) (unsigned char)40))))), (((((/* implicit */_Bool) arr_10 [(unsigned short)16])) ? (var_12) : (var_1))))) / (((unsigned int) max(((unsigned char)154), (((/* implicit */unsigned char) var_9)))))));
            arr_19 [(short)3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(6250205891787018064LL)))) ? (((/* implicit */long long int) (~(min((var_1), (((/* implicit */unsigned int) (short)-22523))))))) : (((long long int) ((var_4) == (arr_13 [i_0] [i_3]))))));
            var_19 = ((/* implicit */long long int) (((+(964672955091457339ULL))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) -6686849391346775117LL))), (840156864U))))));
            var_20 ^= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11197431726722802820ULL)) ? (-1771749860315492526LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3]))))))))), ((+(((/* implicit */int) (unsigned short)7781))))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (signed char i_5 = 4; i_5 < 15; i_5 += 1) 
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] &= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_22 [i_0] [i_3])) ? (arr_10 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))))) == (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3053303581U))))) ? (-5637146642440353314LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_0 + 1] [i_4] [i_3] [i_5 - 1])))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned int) ((unsigned char) max((((/* implicit */unsigned int) (short)9336)), (3429554290U))))))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */_Bool) ((unsigned char) 4135709318403365475LL));
    }
}
