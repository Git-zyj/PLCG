/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202834
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((long long int) ((unsigned int) (unsigned short)0)));
                            var_18 = ((/* implicit */unsigned char) ((long long int) ((int) ((unsigned int) arr_7 [i_0]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_20 [(unsigned char)8] [i_1] [i_5] [(signed char)10] [i_5] = ((/* implicit */long long int) ((unsigned char) ((signed char) (unsigned short)7711)));
                                arr_21 [i_1] [i_1] [i_4] [i_5] [i_5] [9U] = ((/* implicit */long long int) ((signed char) ((long long int) ((short) var_16))));
                                var_19 = ((/* implicit */signed char) ((unsigned int) ((signed char) var_5)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_20 -= ((/* implicit */int) ((unsigned short) 18446744073709551605ULL));
                            var_21 = ((/* implicit */long long int) ((int) ((unsigned char) 1100394813995107697ULL)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned int i_10 = 3; i_10 < 11; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            {
                                arr_32 [i_0] [i_11] [i_1] = ((/* implicit */unsigned int) ((long long int) ((unsigned char) 8736402016635034664LL)));
                                arr_33 [i_0] [i_1] [i_9] [i_9] [i_10 + 1] [i_11] [i_11] = ((/* implicit */int) ((short) ((unsigned char) var_9)));
                                var_22 = ((/* implicit */long long int) ((unsigned int) ((long long int) ((unsigned char) arr_25 [i_1]))));
                                var_23 = ((int) ((unsigned int) (signed char)-11));
                                var_24 -= ((/* implicit */long long int) ((unsigned char) ((long long int) ((signed char) (signed char)4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned long long int) ((long long int) ((signed char) arr_34 [i_14])));
                            var_27 = ((/* implicit */int) ((long long int) ((unsigned int) (signed char)-21)));
                            arr_44 [i_12] [i_14] [i_12] [i_12] [i_15] [i_13] = ((/* implicit */long long int) ((unsigned char) ((unsigned int) (signed char)-11)));
                            arr_45 [i_14] [i_13] [i_14] [i_13] |= ((/* implicit */unsigned int) ((int) ((_Bool) arr_39 [i_12] [i_14] [i_14] [i_15])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        {
                            var_28 |= ((/* implicit */int) ((signed char) ((unsigned int) var_15)));
                            arr_51 [i_12] [(unsigned short)0] [9] [5ULL] [9] [i_17] = ((/* implicit */signed char) ((long long int) ((unsigned int) ((unsigned short) (unsigned char)37))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) -1907390103)));
}
