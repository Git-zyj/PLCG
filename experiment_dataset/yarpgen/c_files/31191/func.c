/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31191
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
    var_18 &= ((/* implicit */unsigned long long int) (unsigned char)236);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [1U]))))) ? (((((/* implicit */_Bool) (signed char)7)) ? (-1132587264) : (((/* implicit */int) (unsigned char)221)))) : ((+(((/* implicit */int) var_7))))))));
                    arr_9 [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1])))))) : ((-(arr_4 [i_0 + 1] [i_1 + 1])))));
                }
                var_20 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) max((arr_2 [i_0 + 1] [(signed char)1]), (((/* implicit */short) var_16))))) < (((/* implicit */int) arr_6 [i_0 - 1] [i_1 - 1] [i_1 + 1])))));
                var_21 &= ((_Bool) 2147483647);
                var_22 = ((/* implicit */_Bool) (+(((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))))));
                var_23 = ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)17)), (3575109431496268312ULL))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19079))) ^ (arr_4 [i_0] [0])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_2);
}
