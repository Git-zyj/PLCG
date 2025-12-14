/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40442
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
    var_11 ^= var_10;
    var_12 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) / (((/* implicit */int) min(((_Bool)1), (max(((_Bool)1), ((_Bool)1))))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((max((var_9), (((/* implicit */unsigned int) (_Bool)1)))), (var_3)))) >= (((((/* implicit */_Bool) max((10338425533054910950ULL), (2967395751007099603ULL)))) ? (var_10) : (max((((/* implicit */unsigned long long int) var_8)), (var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (9798445650060088ULL))) >> (((-446659218) + (446659269))))), (((var_6) << (((var_3) - (646197642U)))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), ((((+(arr_9 [i_0] [i_1] [i_1] [i_2]))) | ((~(arr_5 [i_1 - 2] [i_1 - 2])))))));
                    arr_11 [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) max((((/* implicit */short) arr_4 [i_0])), (arr_3 [i_0] [i_0] [i_2])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) 887839181))))))))));
                    var_14 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_1 - 2] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25393))))));
                }
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((18446744073709551615ULL), (15121312313136639175ULL))) ^ (((/* implicit */unsigned long long int) arr_13 [i_1 - 2] [i_1 - 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) (unsigned short)15)) ? (2147483647) : (((/* implicit */int) (unsigned short)53918))))))) : (min((((/* implicit */unsigned long long int) arr_0 [i_3] [i_0])), ((((_Bool)0) ? (8556362433404998784ULL) : (var_5)))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) - (min((((/* implicit */unsigned int) var_0)), (arr_9 [i_3] [i_1] [0] [i_0]))))), ((-(arr_13 [i_1 + 1] [i_1 - 1] [i_3]))))))));
                    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (short)8328)), (9798445650060113ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_0] [i_0])) ? (arr_13 [11] [i_1 - 2] [i_0]) : (arr_13 [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))));
                    var_17 *= ((((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 2])) && (((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])))) ? (((((/* implicit */_Bool) -1)) ? (arr_1 [i_1] [i_1 - 1]) : (arr_1 [i_0] [i_1 - 2]))) : (((/* implicit */unsigned long long int) 4294967295U)));
                }
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_4] &= ((/* implicit */short) (+(((((/* implicit */int) max((var_2), (arr_12 [(_Bool)1])))) / ((-(-1411734440)))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8329)) | (((/* implicit */int) (signed char)91))));
                }
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (((((/* implicit */_Bool) 2147483647)) ? (((var_1) / (var_6))) : (((/* implicit */unsigned long long int) -2040933281))))));
                    arr_21 [i_5] [i_1 + 1] [i_0] [i_0] = ((unsigned long long int) var_2);
                }
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) (short)1);
}
