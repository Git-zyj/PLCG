/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22632
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_20 |= ((/* implicit */_Bool) (unsigned short)7355);
            var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((var_15) != (((/* implicit */int) arr_0 [i_0] [i_1])))) || (((/* implicit */_Bool) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((8070450532247928832ULL) - (8070450532247928821ULL))))))))), (((2147483647) >> (((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (8070450532247928821ULL))) - (1461ULL)))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 ^= ((((/* implicit */_Bool) (unsigned char)255)) && ((!(((/* implicit */_Bool) 6984185202174384055ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 2) 
            {
                arr_8 [i_0] [3] [i_2] [0U] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_2])) ? (var_4) : (var_15))) ^ (((/* implicit */int) (short)27787))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((arr_2 [i_0] [i_2] [i_3 + 2]) ? (((/* implicit */int) arr_2 [i_0] [i_2] [i_3 - 1])) : (((/* implicit */int) arr_2 [i_3 - 1] [i_2] [i_3 + 2])))))));
                /* LoopSeq 2 */
                for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0] [i_0]))) <= (((/* implicit */int) var_9))))));
                    arr_11 [i_0] [i_2] [8] [i_3] = ((/* implicit */unsigned char) var_3);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_14 [i_0] [i_2] [i_3] [i_3] [(_Bool)1] |= ((/* implicit */int) (-(10376293541461622784ULL)));
                    var_25 = (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) var_9)))));
                    arr_15 [i_0] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (8070450532247928832ULL) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) arr_13 [i_3 - 2] [i_3 + 3] [i_3 - 1] [i_3 - 1])) : (((((/* implicit */int) (unsigned char)85)) % (var_5)))));
                }
            }
            arr_16 [i_2] = ((/* implicit */_Bool) var_0);
        }
        var_26 -= ((/* implicit */unsigned int) 11462558871535167566ULL);
        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19895)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20602))) : (11462558871535167560ULL)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (min((((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [i_0])), (var_5))))))));
        var_28 ^= ((/* implicit */short) var_9);
    }
    var_29 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) ^ (((unsigned long long int) var_1))));
    var_30 = var_18;
}
