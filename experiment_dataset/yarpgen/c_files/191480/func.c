/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191480
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) (unsigned char)138))))) || (((/* implicit */_Bool) arr_9 [i_3] [i_1 + 3] [i_2] [i_3] [i_3] [12])))))) - (arr_5 [i_0] [i_1 + 1] [i_2] [i_3])));
                        arr_12 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_0] [(signed char)17])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (arr_9 [(unsigned short)18] [i_1] [(unsigned short)18] [i_3] [i_3] [i_1])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (228817549U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))))))));
                        var_13 = ((/* implicit */int) ((unsigned int) 252801039796794268ULL));
                        var_14 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)70)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))))) / (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))))));
                        arr_13 [i_0] [20U] [20U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) - (max((((/* implicit */unsigned long long int) (unsigned char)212)), (arr_8 [i_0] [i_0] [i_2] [i_1 - 1])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (signed char i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_15 = (!(((/* implicit */_Bool) min(((unsigned short)32767), ((unsigned short)25779)))));
                            arr_22 [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (+(var_6))))) ? (((((((/* implicit */int) arr_14 [i_0] [i_4])) >= (((/* implicit */int) arr_1 [i_0] [i_1])))) ? (((/* implicit */int) (unsigned short)43576)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8))))))) : (((((/* implicit */int) arr_9 [i_6] [i_6] [i_6 - 3] [i_6 - 2] [i_6] [i_6 + 1])) & (((/* implicit */int) arr_0 [i_0]))))));
                            arr_23 [i_0] [i_0] [i_4] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_4] [i_1 + 1] [i_5] [i_6 - 2] [i_6])) : (var_11)))) && (arr_20 [i_0] [i_1] [i_4] [i_1 + 3] [i_1 + 3] [i_6 + 2] [i_0])));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (252801039796794290ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [0U] [(unsigned char)11] [(unsigned char)11] [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0])) <= (((/* implicit */int) var_3)))))))) < (var_6)));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [4U] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]))))) <= (((((((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_9])) && (((/* implicit */_Bool) arr_0 [i_7])))) ? (((/* implicit */unsigned long long int) ((arr_20 [i_0] [i_7] [i_7] [i_7] [i_0] [i_10 - 1] [i_7]) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9] [i_7])) : (arr_32 [i_7])))) : (max((18193943033912757346ULL), (((/* implicit */unsigned long long int) (unsigned char)31))))))));
                            arr_34 [(unsigned char)2] [(unsigned char)2] [i_0] [i_8] [i_0] [(short)14] [i_0] &= var_0;
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_1))) << (((var_7) - (4778466661220426230ULL)))))))))));
        }
        arr_35 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 18193943033912757347ULL)))) ? (((((/* implicit */_Bool) 268369920)) ? (17589908306264919007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) min((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]), (var_11)))))))));
        var_19 ^= arr_28 [i_0] [16LL] [i_0];
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9)))))) : (min((var_10), (((/* implicit */unsigned long long int) var_5))))))) || (((((/* implicit */unsigned long long int) (-(2778781112U)))) <= (((var_6) / (((/* implicit */unsigned long long int) 4066149746U))))))));
}
