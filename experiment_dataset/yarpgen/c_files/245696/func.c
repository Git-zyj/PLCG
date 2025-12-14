/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245696
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) var_8))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
    var_15 -= ((/* implicit */short) var_7);
    var_16 = ((/* implicit */short) (!(((((((/* implicit */int) var_1)) * (((/* implicit */int) var_6)))) > (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */signed char) ((max((arr_3 [9LL] [i_1 - 2] [i_2]), (arr_3 [i_0] [i_1 + 1] [i_2]))) - (arr_3 [i_0] [i_0] [i_0])));
                    arr_7 [i_0] [18U] [i_1 - 2] [i_0] = ((/* implicit */short) ((unsigned int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) <= (((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))))));
                    var_17 = ((/* implicit */signed char) ((arr_5 [i_2] [i_0] [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_1] [i_2]), (arr_3 [i_2] [0ULL] [0ULL]))))))) : (((/* implicit */int) ((min((arr_3 [i_0] [i_1 + 2] [i_2]), (((/* implicit */long long int) var_12)))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_2] [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))))));
                    arr_8 [i_0] [i_0] [(short)3] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_5 [i_1 + 3] [i_0] [i_1 - 1]))))));
                    arr_9 [4U] [(short)4] [i_2] &= ((/* implicit */unsigned char) (-(arr_0 [i_0] [(short)2])));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))))));
        var_18 = ((/* implicit */unsigned long long int) ((unsigned int) ((((((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) + (2147483647))) >> (((((/* implicit */int) var_5)) - (28813))))));
        arr_11 [(_Bool)1] &= (((!(((/* implicit */_Bool) ((unsigned int) arr_2 [4U] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [18] [i_0])))) == ((+(((/* implicit */int) arr_5 [i_0] [12LL] [i_0])))))))) : (((((/* implicit */_Bool) max((arr_2 [0] [12ULL] [i_0]), (((/* implicit */short) arr_5 [i_0] [(short)4] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [(short)5])) | (((/* implicit */int) arr_2 [4LL] [i_0] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [16] [(short)0] [i_0]))) | (arr_3 [i_0] [i_0] [i_0]))))));
        var_19 = ((/* implicit */_Bool) (~((~(((arr_3 [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [2LL])))))))));
    }
    for (int i_3 = 3; i_3 < 20; i_3 += 4) 
    {
        arr_15 [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_12 [i_3]) < (((/* implicit */int) arr_13 [i_3]))))) <= (arr_12 [i_3]))) ? (((/* implicit */int) (!(arr_13 [18ULL])))) : (((/* implicit */int) arr_13 [7ULL]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            var_20 = (i_3 % 2 == 0) ? (((/* implicit */signed char) (((((~(((int) arr_19 [i_3] [i_4])))) + (2147483647))) << ((((-((~(arr_17 [i_3]))))) - (18067461076578202278ULL)))))) : (((/* implicit */signed char) (((((~(((int) arr_19 [i_3] [i_4])))) + (2147483647))) << ((((((-((~(arr_17 [i_3]))))) - (18067461076578202278ULL))) - (937323597691070910ULL))))));
            arr_20 [i_3] = ((long long int) (!((!(((/* implicit */_Bool) arr_17 [i_3]))))));
            var_21 ^= ((((((/* implicit */_Bool) arr_17 [(short)18])) ? (((/* implicit */int) arr_19 [i_3 - 2] [i_3 - 1])) : (arr_12 [(short)14]))) >= ((~(((/* implicit */int) arr_19 [i_3 - 1] [i_3 - 3])))));
        }
        arr_21 [i_3] [i_3] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_3 - 3])) / (arr_12 [i_3])))), (((((/* implicit */_Bool) arr_17 [i_3])) ? (arr_17 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_3 + 2] [i_3] [i_3 + 2])) ? (arr_12 [i_3]) : (arr_12 [i_3]))))));
    }
    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((_Bool) var_0)) || (((/* implicit */_Bool) min((var_4), (((/* implicit */short) var_6))))))))));
}
