/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239447
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
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))) : (arr_1 [i_0 + 2]))));
                            arr_12 [i_3] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4 + 2])) ? (min((max((((/* implicit */int) arr_4 [i_5])), (var_4))), (((((/* implicit */int) (unsigned char)123)) + (var_2))))) : (((/* implicit */int) var_1))));
                            var_12 = ((((/* implicit */long long int) ((-263274248) / (-1673929705)))) - (var_8));
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 2]))) >= (max((arr_0 [i_0]), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (arr_15 [i_0] [i_0] [i_1] [i_1 + 1] [i_1]))))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */short) var_2);
                            var_14 = ((/* implicit */unsigned int) (~(max((min((((/* implicit */int) var_9)), (var_2))), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_6))))))));
                            var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) -1874680060253296712LL)) ? (max((((/* implicit */unsigned long long int) var_8)), (6935382410731782516ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21659))))), (6935382410731782524ULL)));
                            var_16 = ((/* implicit */short) ((signed char) max((arr_10 [i_6] [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1]), (arr_10 [i_7] [i_7] [i_1 + 2] [i_1 - 2] [i_1] [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        for (short i_12 = 3; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((-4985059568101987806LL), (((/* implicit */long long int) (unsigned char)45)))))));
                                var_18 = var_0;
                                arr_38 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2892453547173936187LL)) ? (1554614909) : (-1073741824)))) ? (max((((/* implicit */unsigned int) var_0)), (arr_34 [i_12] [i_12] [i_12] [i_12 - 2] [i_12 - 2]))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (arr_27 [i_12 - 3]))))));
                                var_19 = ((/* implicit */int) var_0);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 12; i_13 += 4) 
                {
                    for (long long int i_14 = 3; i_14 < 11; i_14 += 2) 
                    {
                        {
                            arr_43 [i_8] [i_14] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) arr_5 [i_13 + 2] [i_13 + 3] [i_13 + 3]))), (((((/* implicit */int) arr_5 [i_13 + 2] [i_13 + 3] [i_13 + 2])) ^ (((/* implicit */int) arr_5 [i_13 + 3] [i_13 + 1] [i_13 + 1]))))));
                            arr_44 [i_14] [i_9] = ((/* implicit */_Bool) max((arr_23 [i_14 + 3] [i_13 + 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_9] [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_14])) ? (arr_41 [i_9] [i_13] [i_13 + 2] [i_14 - 2] [i_14 + 2]) : (var_2))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((((/* implicit */long long int) var_3)), (var_8))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 11)) ? (3394842570U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2052))))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    /* LoopNest 3 */
    for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        for (long long int i_16 = 3; i_16 < 13; i_16 += 2) 
        {
            for (int i_17 = 2; i_17 < 13; i_17 += 3) 
            {
                {
                    arr_55 [i_15] [i_17] [i_17] [i_15] = ((/* implicit */unsigned char) min((arr_21 [i_15] [i_15] [i_16 - 3] [i_16 - 3]), (((/* implicit */unsigned int) max((min((((/* implicit */int) (unsigned char)169)), (var_4))), (arr_3 [i_16]))))));
                    arr_56 [i_17] [i_17] [i_15] = ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_16] [i_16] [i_16] [i_16 + 1] [i_16 - 2]), (arr_8 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16] [i_16 - 2]))))) <= (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19987))))), (((var_7) | (((/* implicit */unsigned int) var_4)))))));
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_17 - 1]))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1673929705)) ? (((/* implicit */int) (short)-21663)) : (((/* implicit */int) (unsigned short)65082))))), (900124736U))))));
                    var_23 ^= ((/* implicit */unsigned short) min(((short)-2052), ((short)21638)));
                }
            } 
        } 
    } 
}
