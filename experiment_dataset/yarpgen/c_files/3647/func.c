/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3647
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
    var_11 = ((int) (-(var_2)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 1] [19] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((short)-2048), (arr_5 [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5)))))), (max((((((/* implicit */_Bool) 6784624144659305419LL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) << (((arr_1 [i_0] [i_0]) - (9911378775750883877ULL))))))))))) : (((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((short)-2048), (arr_5 [i_0] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5)))))), (max((((((/* implicit */_Bool) 6784624144659305419LL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((var_2) + (9223372036854775807LL))) << (((((arr_1 [i_0] [i_0]) - (9911378775750883877ULL))) - (15016303698251617496ULL)))))))))));
                    arr_9 [i_0] [i_2] [i_2] &= ((/* implicit */long long int) (short)-28883);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))));
                        var_13 ^= ((arr_7 [i_0 - 4] [i_3 + 2] [i_3 + 1]) % (((/* implicit */int) arr_11 [i_0] [i_2] [i_0 - 3] [i_0] [i_0])));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(arr_7 [i_0 - 4] [i_2] [i_4])))), (-3977110645031577187LL)))) ? (((/* implicit */int) arr_4 [i_0] [i_4 + 1])) : (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-28883))))))));
                        arr_14 [i_0] = ((/* implicit */short) ((unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (short)-28883)))));
                        var_15 = ((/* implicit */unsigned int) arr_10 [i_0] [i_1]);
                        arr_15 [i_0] = ((/* implicit */unsigned char) max(((~(arr_6 [i_1] [i_4 - 1] [i_4]))), ((+(((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2]))))))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_5 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((((/* implicit */int) arr_5 [i_0] [i_1])) | (((/* implicit */int) (_Bool)0)))) + (25950)))))) ? (((/* implicit */int) (signed char)21)) : (max((((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))), (((/* implicit */int) max(((unsigned char)24), ((unsigned char)24))))))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_7 [19LL] [19LL] [19LL]))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_1] [i_5] [i_5])), (arr_2 [i_0] [i_5])))) : (min((var_2), (((/* implicit */long long int) arr_17 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_5])))))))))));
                        var_17 += ((/* implicit */int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (var_10))) / (arr_1 [i_5 + 1] [i_2]))), (((/* implicit */unsigned long long int) (-(min((var_8), (((/* implicit */unsigned int) var_9)))))))));
                        arr_19 [i_0] [i_0] [i_2] [i_2] [i_5] [i_0] = ((/* implicit */short) max((max(((unsigned short)9499), (((/* implicit */unsigned short) arr_3 [i_0 - 2] [i_1] [i_5 - 2])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_5 - 2])) || (((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1] [i_2])))))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 2) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */unsigned long long int) var_1);
                        arr_24 [i_0 + 2] [i_1] [i_0] [i_6] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> ((((~(((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_2])))) + (20364)))))), ((~(arr_2 [i_0 - 2] [i_0])))))) : (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> ((((((~(((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_2])))) + (20364))) - (36634)))))), ((~(arr_2 [i_0 - 2] [i_0]))))));
                    }
                    arr_25 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25081))) ^ (5286974U)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_2])) | (((((/* implicit */_Bool) 888044800233710663ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0)))))))));
                    var_19 = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    } 
}
