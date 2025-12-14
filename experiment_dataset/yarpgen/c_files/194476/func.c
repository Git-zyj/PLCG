/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194476
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= arr_0 [i_0];
        arr_3 [i_0] [i_0] = (~(((/* implicit */int) (short)-1)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((arr_1 [i_0]) <= (arr_1 [i_0])))), (arr_0 [i_0])));
        var_12 ^= ((/* implicit */_Bool) arr_1 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((_Bool) (signed char)46));
        arr_9 [i_1] [i_1] = (_Bool)1;
        arr_10 [i_1] [i_1] = ((_Bool) ((signed char) arr_6 [i_1]));
        arr_11 [i_1] = ((/* implicit */short) ((arr_5 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_6 [i_1])));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_16 [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (-1147755818))), (((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            arr_20 [i_3] = ((/* implicit */_Bool) ((int) ((arr_15 [i_3] [i_3 + 2]) - (((/* implicit */int) var_10)))));
            var_13 = ((/* implicit */unsigned char) max((((((((/* implicit */int) (short)24730)) < (((/* implicit */int) (unsigned char)54)))) ? (((2147483647) >> (((((/* implicit */int) (short)-18751)) + (18757))))) : (arr_19 [i_3 + 3] [i_3 - 1] [i_3 - 2]))), (((/* implicit */int) (signed char)-11))));
            arr_21 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */short) min((((510ULL) << (((min((((/* implicit */int) (signed char)-36)), (arr_17 [i_3]))) + (1905092214))))), (((/* implicit */unsigned long long int) arr_17 [i_3]))))) : (((/* implicit */short) min((((510ULL) << (((((min((((/* implicit */int) (signed char)-36)), (arr_17 [i_3]))) + (1905092214))) - (94966007))))), (((/* implicit */unsigned long long int) arr_17 [i_3])))));
        }
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned char)54))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_11)) ? (var_0) : ((-(var_6))))) : (((/* implicit */int) (short)-1))));
    var_16 = ((/* implicit */signed char) -1430762090);
    var_17 *= ((/* implicit */unsigned char) var_2);
}
