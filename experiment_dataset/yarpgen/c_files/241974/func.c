/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241974
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
    var_15 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)46006);
                            arr_10 [i_2] [i_2] [(short)1] [i_0] = (signed char)127;
                            arr_11 [i_3] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_3]) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (18446744073709551610ULL)))) ? (((arr_4 [i_3] [i_3] [i_3] [i_0]) % (arr_4 [i_0] [i_3] [i_3] [i_3]))) : (18446744073709551602ULL)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    arr_14 [i_0] [i_1] = ((((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_12 [i_0] [0LL])))))) != (((/* implicit */int) arr_2 [i_0] [i_0])));
                    arr_15 [8] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [(unsigned short)9])))))) && (((/* implicit */_Bool) min((arr_12 [i_0] [i_1]), (((/* implicit */unsigned char) arr_3 [i_4] [i_0] [(unsigned char)8]))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_6]))) | (arr_16 [i_0] [i_1] [i_4] [(_Bool)1])))) ? (((arr_1 [i_4] [i_5]) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_4]))))) : (((/* implicit */unsigned long long int) ((int) arr_16 [i_0] [(unsigned char)8] [i_4] [i_5])))));
                                var_17 = ((/* implicit */unsigned long long int) (~((+(((((/* implicit */long long int) -1530779520)) | (var_1)))))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */int) arr_16 [i_4] [i_1] [i_1] [i_0]);
                }
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((10ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518)))))) && (((/* implicit */_Bool) 0LL)))))));
                    arr_24 [i_0] [6ULL] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)65533)), (var_13)));
                }
                var_20 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) - (min((arr_13 [(unsigned char)7] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_20 [i_0])))))), (min((18446744073709551596ULL), (((/* implicit */unsigned long long int) (signed char)-75))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (var_14)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (20ULL)))))))) >= (min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))));
}
