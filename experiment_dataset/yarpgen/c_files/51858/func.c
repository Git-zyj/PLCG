/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51858
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(unsigned char)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)3796))))), (18446744073709551603ULL))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_4 [i_2] [i_3] [(short)10]))));
                                arr_17 [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2914582815U))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    arr_21 [i_0] [11U] [14U] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_0 [i_0] [i_5]));
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_28 [i_6] [i_6] [i_5] [i_1] [i_0] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                                arr_29 [i_0] [i_0] [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((unsigned short) (unsigned short)3811));
                                var_21 ^= ((/* implicit */unsigned char) (~(arr_11 [i_1] [i_6 + 3] [i_5] [i_1 - 1])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_34 [(unsigned short)9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((4002240212971297406ULL) > (((/* implicit */unsigned long long int) -8737070855954063626LL))))) >> (((var_15) - (2489427375U)))));
                                arr_35 [i_9] [i_8] [i_8] [(signed char)16] [i_5] [i_0] [i_0] = arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_8] [i_9];
                                var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) 0LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_8] [(signed char)8]))) : (((((/* implicit */unsigned long long int) -8737070855954063618LL)) | (arr_32 [(unsigned char)17] [i_1] [i_5] [i_1] [i_9])))));
                                var_23 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_0] [i_1] [i_9]);
                            }
                        } 
                    } 
                }
                for (short i_10 = 1; i_10 < 22; i_10 += 2) 
                {
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 369707739U))));
                    arr_39 [i_0] [i_0] [1ULL] = ((/* implicit */unsigned long long int) var_11);
                }
                arr_40 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) ((unsigned char) -1596412332912661720LL))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-19)))))));
    var_26 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 369707739U)) || (((/* implicit */_Bool) (signed char)101))))), (min((((/* implicit */unsigned long long int) (signed char)-12)), (var_10))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-8737070855954063619LL) / (-8737070855954063615LL))))))))));
    var_27 |= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) var_13)) ? (8LL) : (((/* implicit */long long int) 3780555605U)))))), (((/* implicit */long long int) var_6))));
    var_28 = (((+(((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
}
