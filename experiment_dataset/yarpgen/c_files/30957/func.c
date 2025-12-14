/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30957
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1620838801728554531LL)))))) - (((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_9) : (var_9)))))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), ((~(min((((/* implicit */unsigned long long int) ((int) var_8))), (arr_4 [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_4);
                                var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (((18446744073709551615ULL) - (((/* implicit */unsigned long long int) arr_6 [i_2] [i_5])))))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)59294)) ? ((+(4294967295ULL))) : (10ULL))), (((/* implicit */unsigned long long int) (~(1620838801728554520LL)))))))));
                                arr_18 [i_6] [i_3] [(unsigned short)0] [i_3] [(signed char)12] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_11 [i_5]))))));
                                arr_19 [i_2] [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)72)), (var_1)))) ? ((+(16777215ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))))) >> ((((+(arr_17 [i_2] [i_3] [i_2] [i_5] [i_6] [i_3]))) - (3690739211U)))));
                            }
                        } 
                    } 
                    arr_20 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)128)), (var_1))))))) << (((max((arr_3 [i_2] [i_3]), (arr_3 [i_2] [i_3]))) - (17628350893707055826ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            {
                var_20 = ((/* implicit */short) 3728082795U);
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_4))));
                            arr_32 [i_7] [i_8] [i_9] [i_7] = ((/* implicit */unsigned long long int) ((long long int) max((arr_27 [i_7] [i_8] [i_7]), (((/* implicit */unsigned int) var_14)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        {
                            arr_39 [i_7] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(var_11)))) ? (max((((/* implicit */unsigned int) var_14)), (3801348631U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_2))))))) >> (((((long long int) var_2)) + (577286663746137477LL)))));
                            arr_40 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_3 [i_7] [i_8]);
                            arr_41 [i_7] [i_7] [i_11] [i_7] = ((/* implicit */unsigned int) (!(((_Bool) var_11))));
                            arr_42 [i_7] [i_8] [i_11] [i_7] = (~(var_3));
                            arr_43 [i_7] [i_7] [i_11] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (3ULL) : (4099313071998030752ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_33 [i_7] [i_8] [i_11])) / (arr_1 [i_7])))))) : (((((((/* implicit */int) arr_13 [i_7] [(unsigned char)4] [(unsigned char)4] [i_12])) >= (((/* implicit */int) (unsigned char)242)))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) (-(3585101939U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
