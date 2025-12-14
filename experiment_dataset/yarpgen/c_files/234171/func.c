/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234171
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) max((max(((~(14338592547309114002ULL))), (((4108151526400437609ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-29169))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((6917529027641081856LL) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] = max((((/* implicit */long long int) (short)-9893)), (((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (-3220762333955633222LL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 4035889762U)) ^ (14338592547309114002ULL))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((+(var_8)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_0]))) >= (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) | (arr_0 [i_1 + 1])))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 6917529027641081856LL)) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) & (((/* implicit */int) arr_9 [i_2] [i_2]))))));
        arr_12 [(unsigned char)2] &= ((/* implicit */unsigned char) ((_Bool) arr_4 [i_2]));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (short)31477))));
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3908842098U))));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2]))) < (((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4)))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31477)) ? (((long long int) (short)-296)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    arr_21 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)29)) ? (8220370574689787817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757)))));
                    var_19 = ((/* implicit */unsigned char) ((((_Bool) (signed char)45)) ? (((((/* implicit */_Bool) 8929724396334249947LL)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (short)-9259)))) : (((/* implicit */int) arr_15 [i_4]))));
                    arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3] [i_3])) < (((/* implicit */int) arr_9 [i_3] [i_3]))));
                }
            } 
        } 
    }
}
