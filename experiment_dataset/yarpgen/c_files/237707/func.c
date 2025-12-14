/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237707
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
    var_16 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_12)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)127)) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((var_7) - (9211193872301473095LL))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) / (2752074743U)))) ? (min((-744955168963486849LL), (((/* implicit */long long int) (signed char)104)))) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))) ? (arr_0 [i_0]) : (((unsigned long long int) arr_1 [i_0] [7U])));
        var_18 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) max(((signed char)-104), ((signed char)5)))), (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-10152)), (arr_1 [(_Bool)1] [i_0])))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0] [6U]), (((/* implicit */int) (unsigned char)172))))) : (arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_20 = arr_4 [i_1];
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                arr_8 [5] [i_1] = ((/* implicit */int) max((672643353U), (((/* implicit */unsigned int) (unsigned short)4138))));
                arr_9 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 206158430208ULL)) ? ((+(-744955168963486860LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))) > (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)9])) ? (max((6729071718242414948ULL), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) min((8602720899029026093LL), (((/* implicit */long long int) (unsigned char)59)))))))));
                arr_10 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-25248)) ? ((~(((unsigned long long int) (signed char)0)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [10U] [i_1])), (((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2 + 1])) | (arr_7 [i_0] [i_1] [i_2]))))))));
            }
        }
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_13 [i_3] [(signed char)15] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_11 [i_3]), (((/* implicit */unsigned short) (short)32760))))) & (max((((((/* implicit */int) (unsigned char)172)) | (((/* implicit */int) arr_11 [i_3])))), ((~(((/* implicit */int) arr_11 [i_3]))))))));
        var_21 = ((/* implicit */signed char) arr_12 [1ULL]);
    }
}
