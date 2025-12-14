/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31878
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
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (+(var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((unsigned char) var_3))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (var_5)))), ((-(var_11)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_3 + 1] [i_4] [i_4] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [20U] [i_3 - 1] [i_3 - 1] [i_4 + 1])) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) ((unsigned short) (unsigned char)152)))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = arr_8 [(unsigned char)2] [i_2] [(_Bool)1] [i_4];
                            arr_16 [i_4] [i_4] [i_4] [i_3] = ((((/* implicit */_Bool) (unsigned char)152)) ? (arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_4 - 3] [(unsigned char)21]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))));
                            var_17 = ((/* implicit */unsigned char) arr_2 [i_0] [i_4 - 2]);
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)133))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 4) 
                        {
                            arr_19 [(signed char)11] [i_1] [i_2] [16LL] [i_5 - 1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3])) / (((/* implicit */int) var_0))))))))));
                            var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (+(var_13))))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (unsigned char)152))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)19])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2])) || (((/* implicit */_Bool) var_0))))))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_12 [i_2] [i_2] [i_3 - 2] [i_5 + 3])))))))));
                            arr_20 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)84), (var_0))))) : (min((((/* implicit */unsigned int) var_6)), (arr_7 [i_5 + 3]))))));
                            var_21 -= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned char)155)), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)94))))) == (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))))))))));
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_3] [(unsigned short)22] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)105)) < (((/* implicit */int) var_12)))))) > (((/* implicit */int) (unsigned char)105))));
                            var_22 += ((/* implicit */long long int) ((short) var_5));
                            arr_25 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? ((~(max((((/* implicit */int) (unsigned char)151)), (var_7))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1 - 1])) && (((((/* implicit */int) (unsigned char)151)) < (((/* implicit */int) (unsigned char)152)))))))));
                        }
                        var_23 = ((/* implicit */_Bool) var_12);
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(var_13))) - (((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_2] [i_0]))))) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)152)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])) ? (var_10) : (((/* implicit */long long int) arr_23 [i_3 + 1] [i_0]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)152)))) << (((((/* implicit */int) max((arr_26 [i_0] [i_0] [i_1] [19U] [i_3] [i_3] [i_7 - 2]), (var_0)))) - (106)))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_0] [i_3 + 1]))) ? ((+(((/* implicit */int) (unsigned char)105)))) : (((((/* implicit */int) (unsigned char)127)) / (((/* implicit */int) (unsigned char)172))))))));
                            arr_29 [i_1] [i_1 - 1] [i_0] [i_7] [i_7] [i_2] [i_7] = ((/* implicit */_Bool) (-(((int) min(((unsigned char)127), ((unsigned char)171))))));
                        }
                    }
                    arr_30 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(unsigned short)17] [i_2] [i_0] [i_0] [i_2] [i_2] [i_2]))) / (((((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165))) : (var_9))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)122), ((unsigned char)92)))))))));
                }
                var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((var_13) == ((+(((/* implicit */int) arr_4 [i_1 - 1] [i_0])))))))));
                var_27 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))))));
            }
        } 
    } 
}
