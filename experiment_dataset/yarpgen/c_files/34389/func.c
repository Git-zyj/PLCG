/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34389
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_1] [i_1] [i_3] [i_4] [i_0 + 2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_6) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2] [i_4])))) ? (arr_1 [i_1 + 2]) : (((/* implicit */int) arr_13 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_3 - 1] [i_2] [i_3 - 1])))))));
                                arr_15 [(_Bool)1] [i_2] [i_2] [i_2] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) (signed char)-14);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_1 + 3] [i_1 + 3] [i_6 - 2] [i_5] [i_2] = ((/* implicit */int) (!((!(arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 3] [i_0 + 3])))));
                                arr_23 [i_0] [i_2] [i_2] [i_5] [i_6 + 4] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        for (long long int i_8 = 4; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)10903))))) ? (1128318205U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2] [i_7 - 1])))))) > (((long long int) ((((/* implicit */_Bool) 173308576U)) ? (((/* implicit */int) arr_10 [i_0 - 1] [(_Bool)1] [i_2] [i_2] [i_7 + 1] [i_7 + 1] [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))))));
                                var_13 ^= ((/* implicit */_Bool) max((((/* implicit */int) ((arr_20 [i_8 - 4] [i_8 - 4] [i_7]) <= (arr_20 [i_8 + 1] [i_8 + 1] [i_7])))), (((arr_20 [i_8 - 1] [i_1] [i_7]) % (arr_20 [i_8 - 3] [i_8 - 3] [i_7])))));
                                arr_29 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0 + 1] = ((((/* implicit */int) (!(((/* implicit */_Bool) -891740515689600231LL))))) <= (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [(signed char)0] [i_0 + 3] [i_2] [i_0])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            {
                                arr_35 [(unsigned char)12] [22U] [i_2 - 1] [i_2] [i_10] |= (!(((/* implicit */_Bool) (~(4922662701386629115LL)))));
                                var_14 = ((/* implicit */unsigned short) arr_25 [i_0 - 1] [i_2] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned long long int) ((2204849661U) * (((/* implicit */unsigned int) (+(((/* implicit */int) ((2654757043U) <= (((/* implicit */unsigned int) var_7))))))))));
                            arr_45 [i_11] [i_11] [i_11] [(short)17] [i_11] [i_11] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        {
                            arr_50 [i_12] [i_11] [i_15] [i_15] [i_11] [i_11] = ((/* implicit */signed char) min((min((((/* implicit */int) arr_37 [i_11] [i_12])), (((int) (unsigned short)28687)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((((/* implicit */_Bool) (short)6731)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6)))))))));
                            var_16 = ((/* implicit */long long int) (unsigned short)34210);
                            arr_51 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) arr_43 [i_11]));
                            arr_52 [i_11] [i_12] [i_16] [i_15] [(short)8] [i_16] &= ((/* implicit */int) (((~(4101836554811548064ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_53 [i_11] [i_11] = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_16 [i_11] [i_12] [i_15] [i_16]) <= (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))), ((~((-(((/* implicit */int) arr_13 [i_11] [9U] [i_12] [i_15] [i_15] [i_11] [i_16]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
