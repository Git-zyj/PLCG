/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25235
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [(_Bool)1] [i_1] [0ULL] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_9 [i_1 - 2] [i_1 - 2] [i_1])), (((((/* implicit */_Bool) (+(-168434915461352512LL)))) ? (((/* implicit */unsigned long long int) 6108017103813089291LL)) : (139611588448485376ULL)))));
                                arr_15 [i_1 - 3] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) max((max((((/* implicit */unsigned short) var_15)), ((unsigned short)8191))), (arr_0 [i_0] [i_2])))) | (((((/* implicit */int) arr_0 [i_1] [i_1 - 1])) | (((/* implicit */int) arr_0 [i_1] [i_1 - 1]))))));
                                arr_16 [i_4] [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((max((max((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])), ((-9223372036854775807LL - 1LL)))), (8161706792950605829LL))) << (((min((((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))), ((-(((/* implicit */int) var_2)))))) + (242)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (long long int i_6 = 4; i_6 < 12; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_24 [i_6 - 2] [i_1] [i_1] [(unsigned char)0] = (+(((var_18) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_1] [i_1] [i_1] [i_6] [(unsigned short)2]), (((/* implicit */short) var_14)))))))));
                                var_20 = ((/* implicit */unsigned char) arr_7 [i_6]);
                                var_21 = ((/* implicit */long long int) min((max(((~(2047ULL))), (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) -8161706792950605853LL)) : (3667879832859480054ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [(_Bool)1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [6U])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        for (short i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */short) max(((-(((((/* implicit */_Bool) arr_34 [i_8] [i_9] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) : (arr_28 [i_8]))))), (max((arr_37 [i_10 - 2] [i_10 - 2] [i_10] [i_10] [(short)7] [i_10 - 1] [i_9 + 1]), (var_16)))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_33 [i_8] [i_9 - 1] [i_10 + 1])) ? (arr_27 [(short)4]) : (((/* implicit */unsigned long long int) 6324461248085635256LL)))))))));
                                arr_38 [i_8] [i_8] [(_Bool)1] [i_8] [i_8] = ((short) ((((/* implicit */_Bool) (short)-31469)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1237))));
                                arr_39 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */long long int) var_9)), (arr_31 [i_8] [i_10] [(signed char)5])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)110))) ^ (3667879832859480044ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_34 [i_9] [i_9] [i_9] [i_9])), (arr_26 [i_9] [(unsigned short)11]))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */signed char) 1419667498U);
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_46 [i_8] = ((/* implicit */short) ((arr_34 [i_14] [i_13] [(unsigned char)1] [i_8]) >> (((((min((((/* implicit */unsigned long long int) (unsigned char)70)), (3667879832859480054ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31))))) - (90ULL)))));
                            arr_47 [i_8] [i_8] [i_8] [i_14] [i_8] = ((/* implicit */long long int) arr_45 [i_8] [i_8] [i_13] [i_13] [i_8] [(_Bool)1]);
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -1465014715807442503LL))))))), (var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
