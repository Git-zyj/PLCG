/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26885
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-5670)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_14 = arr_1 [i_0] [i_0];
        var_15 = ((/* implicit */long long int) var_6);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_4))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_17 += ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
            var_18 |= ((((((/* implicit */_Bool) 2833548516U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [5U]))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9)))))));
        }
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_7 [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5681)) ? (7852758193295489870LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17)))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)58))));
            var_19 -= ((/* implicit */unsigned long long int) min((min((((/* implicit */short) arr_9 [i_2])), ((short)10945))), (((/* implicit */short) var_4))));
        }
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_2] [i_2] [i_2]), (((/* implicit */long long int) (signed char)57))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_4] [i_2] [i_2])) >= (-7852758193295489872LL))))) : (arr_8 [(signed char)6] [i_4] [10U])))), (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [(short)4])) ? (min((12967808652903940423ULL), (arr_12 [4] [4] [i_4]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_2])))))))));
            arr_13 [13LL] [(unsigned char)11] = min((-7852758193295489853LL), (((/* implicit */long long int) (signed char)14)));
        }
        arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((-7852758193295489871LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184))))), (arr_6 [i_2])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-57)), (2926370900U)))) : (min((((/* implicit */long long int) -637462802)), (-3993164297519125605LL)))));
    }
    var_21 -= ((/* implicit */long long int) var_10);
}
