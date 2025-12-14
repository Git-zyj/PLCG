/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29976
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -8413816344136196840LL)), (17ULL)))) ? (((unsigned int) 17ULL)) : (((/* implicit */unsigned int) (~(arr_3 [i_1] [i_2] [i_3])))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0])) : (var_12))))))));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)51)))) - (((((/* implicit */int) ((((/* implicit */unsigned int) -2147483638)) != (327220496U)))) >> (((/* implicit */int) var_4))))));
                                var_16 = ((/* implicit */signed char) (unsigned char)127);
                            }
                            for (long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                            {
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) + (17ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) == (var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (arr_11 [i_3 - 1] [i_3 - 1] [i_2] [i_5] [i_5] [i_5 - 1]))))) : (min((((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11146380114619602725ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0)))))))));
                                var_18 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)131))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                            {
                                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_12)), ((-(arr_16 [11ULL] [i_1] [i_2] [i_2] [i_1] [i_1] [(unsigned short)13])))));
                                var_20 = ((/* implicit */_Bool) min((arr_14 [i_0] [i_1] [i_1] [i_2] [(_Bool)1] [(short)8] [(unsigned char)0]), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)6882)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((unsigned char) max((var_2), (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) var_3))))))));
                            }
                            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
                                arr_22 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_20 [13ULL] [13ULL] [7ULL] [(unsigned char)0] [i_7] [(unsigned char)0] [i_1]), (((/* implicit */long long int) max((arr_15 [i_7] [i_1] [i_7] [(short)9] [i_7]), (((/* implicit */unsigned short) var_3)))))))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) / (((/* implicit */int) (signed char)-52)))))));
                            }
                        }
                    } 
                } 
                var_22 = ((unsigned int) arr_10 [i_0] [i_0] [i_0]);
                arr_23 [i_0] [i_0] = ((/* implicit */short) var_3);
                var_23 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
