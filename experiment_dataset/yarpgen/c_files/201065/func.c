/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201065
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (~(-4507505432047350034LL)));
                                arr_14 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59772)) / ((~(((/* implicit */int) (short)-3661))))))) || (((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)152)))), (((/* implicit */int) (signed char)127)))))));
                                arr_15 [i_0 - 1] [i_1] [i_2] [i_2] [i_4 - 1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)58)) ? (-1) : (((/* implicit */int) (signed char)-57))))))) != (((((/* implicit */_Bool) (short)25731)) ? (-7870742919894314881LL) : (1447277101211392847LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0 + 1] [i_1] [i_2] [i_5] [i_0 + 1] [i_0] |= ((/* implicit */signed char) (((+(619992138))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)9416)) : (((/* implicit */int) (short)-3903))))));
                                arr_21 [i_0 + 2] [i_1] [i_2] [(unsigned char)10] [i_6] = ((/* implicit */unsigned long long int) (-(var_5)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_1] = ((/* implicit */unsigned short) (+((-(-4053269871687410212LL)))));
                                arr_27 [i_2] = ((/* implicit */_Bool) (signed char)123);
                                arr_28 [i_0] [i_1] [i_1] [i_1] [i_8] [i_8] [i_8] &= ((/* implicit */int) (((-(((/* implicit */int) var_12)))) >= (min((((/* implicit */int) (signed char)123)), ((-(var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (signed char i_12 = 2; i_12 < 21; i_12 += 1) 
                    {
                        {
                            arr_40 [i_9] [i_9] [i_11] [i_12] [i_9] = ((/* implicit */unsigned short) var_6);
                            arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (-150042658)));
                            arr_42 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */signed char) (((-(((/* implicit */int) var_12)))) ^ (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)115)) : ((-(((/* implicit */int) (unsigned short)33342))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 21; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        {
                            arr_48 [i_9] &= ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) var_3)) : (var_4))))))), ((signed char)-112)));
                            arr_49 [i_9] [i_10] [i_9] [i_14] = ((/* implicit */unsigned short) (-(14924867505047826274ULL)));
                            arr_50 [i_9] [i_9] [i_13 - 2] [i_14] = ((/* implicit */short) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
}
