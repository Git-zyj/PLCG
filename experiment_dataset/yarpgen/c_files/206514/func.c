/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206514
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
    var_17 ^= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) var_0)))), ((((~(6ULL))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-3853)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9618))) : (18356676446117971279ULL))) << (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_19 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 += ((/* implicit */short) (~(((((((/* implicit */_Bool) arr_3 [4ULL])) || (arr_1 [i_1]))) ? (((/* implicit */int) arr_3 [(short)2])) : ((-(arr_0 [i_1])))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_1]), (arr_0 [i_1])))) ? ((-(arr_0 [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
        var_21 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_3 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_1])), (arr_0 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 8; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) arr_0 [i_1]);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((min((11778888986504240635ULL), (((/* implicit */unsigned long long int) (short)105)))), (max((((/* implicit */unsigned long long int) max((arr_7 [i_1] [(unsigned short)0]), (arr_4 [i_1] [(signed char)4])))), (max((((/* implicit */unsigned long long int) 1073217536)), (6667855087205310980ULL))))))))));
                        var_24 -= ((/* implicit */unsigned char) min((arr_7 [i_2] [(_Bool)1]), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_4 - 2] [i_3] [i_1] [i_1])), (arr_2 [i_2] [i_2])))) && ((!(((/* implicit */_Bool) arr_2 [i_1] [(short)10]))))))));
                    }
                } 
            } 
        } 
    }
}
