/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238547
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (_Bool)1))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 10; i_4 += 1) 
                            {
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned int) 810821798826089707ULL);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_1] = ((/* implicit */long long int) 3573978452919705151ULL);
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3072))) : (4294967289U)));
                                var_13 = ((/* implicit */unsigned char) (+(var_1)));
                                arr_17 [i_1] [i_4] = ((/* implicit */long long int) ((unsigned short) (-(-6958838885810767114LL))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) : (16903616459996759882ULL)))) ? (((((/* implicit */_Bool) -660814785)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)8]))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (_Bool)1))))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [6ULL] = ((/* implicit */int) max((((((/* implicit */_Bool) (short)-30166)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) : (3134566003U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)54)))))))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [(signed char)11] [i_2] [i_0])) ? (((/* implicit */int) (unsigned short)4238)) : (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_7 [i_5] [i_3] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (short)30165)) : (((/* implicit */int) (short)0))))) ? ((+(((/* implicit */int) var_8)))) : (max((arr_13 [i_0]), (336392596)))))) : (((((/* implicit */_Bool) max((3222563721U), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) max((-660814785), (((/* implicit */int) (short)-128))))) : (arr_5 [i_2] [(short)0]))))))));
                                arr_21 [i_0] [i_1] [i_2] [i_2] [(unsigned short)11] [i_1] = ((((/* implicit */int) (unsigned short)45007)) % (((/* implicit */int) (short)1)));
                                arr_22 [i_0] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                            }
                            for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                            {
                                var_16 ^= var_1;
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 1960442799U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1285))))) - (((((/* implicit */_Bool) (short)-24060)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)24060), (arr_4 [i_0]))))) : ((-(arr_12 [i_0] [i_0] [i_2] [i_3] [i_3])))))));
                                var_17 = ((/* implicit */short) max((var_17), ((short)0)));
                                arr_26 [i_1] [i_1] = ((/* implicit */signed char) (~((~(arr_7 [i_6 + 1] [i_6 + 2] [i_6 - 1])))));
                            }
                            var_18 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)130)))))));
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [i_2] [i_3]), ((short)-1))))))) * (min((((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)35997)))), (((((/* implicit */_Bool) 1371491113)) ? (131071) : (((/* implicit */int) (short)24059))))))));
                        }
                    } 
                } 
                var_19 = arr_5 [i_0] [i_1];
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_4)))) >= (1302270758271430316ULL)))) : (((/* implicit */int) var_11)));
    var_21 = ((unsigned long long int) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) 131071)) ? (var_4) : (((/* implicit */long long int) 7U))))));
    var_22 ^= ((/* implicit */short) min((((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (short)30057)) & (((/* implicit */int) (unsigned char)5)))))), (max((((/* implicit */unsigned short) ((short) 4294967274U))), ((unsigned short)360)))));
}
