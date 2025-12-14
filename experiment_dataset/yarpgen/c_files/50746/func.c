/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50746
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
    var_14 = ((/* implicit */unsigned short) (+(max((((unsigned long long int) 1065353216)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 93485652U)) ? (4970140175673498176LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40970))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((short) ((_Bool) ((2234385059U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-26549)))))));
                    arr_8 [16ULL] [16ULL] = ((/* implicit */signed char) ((long long int) (((-(12974092849701564384ULL))) / (((/* implicit */unsigned long long int) -1065353218)))));
                    arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((-1065353217), (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
    {
        for (short i_4 = 3; i_4 < 9; i_4 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_23 [(unsigned char)3] [i_4 - 3] [i_5] [i_3] [(unsigned char)3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40970)) ? (2147483643) : (-2147483632)))), ((+(2234385060U)))));
                                arr_24 [i_6] [i_4] [i_5] [i_5] = ((((/* implicit */_Bool) min((min((2234385059U), (((/* implicit */unsigned int) -1065353216)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6797819732261595973ULL)) ? (((/* implicit */int) (short)14700)) : (((/* implicit */int) (short)15935)))))))) ? (((/* implicit */unsigned long long int) -1065353220)) : (((unsigned long long int) ((((/* implicit */_Bool) (short)24250)) ? (9511280208155345320ULL) : (((/* implicit */unsigned long long int) 2234385039U))))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_3] = ((unsigned int) ((((long long int) 2944167646U)) ^ ((~(-1739580816918518093LL)))));
            }
        } 
    } 
}
