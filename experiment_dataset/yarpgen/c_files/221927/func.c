/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221927
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_2 - 2] [i_3] = ((/* implicit */short) -758862690);
                            var_10 = ((/* implicit */short) (_Bool)1);
                            arr_11 [i_0] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] = ((min((((/* implicit */unsigned long long int) (signed char)-17)), (12267289887809802196ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 41994464)) && (((/* implicit */_Bool) 9372272889462035333ULL))))) == (((/* implicit */int) (signed char)-43)))))));
                                arr_21 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (var_7)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                arr_32 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_7 - 1] [i_0 + 2] [i_7 - 1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (3498701481U))))))), ((signed char)43)));
                                arr_33 [i_8] [i_8] [i_8] [i_8] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) 9372272889462035328ULL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_10 = 1; i_10 < 16; i_10 += 1) 
    {
        for (int i_11 = 1; i_11 < 17; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 16; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 17; i_14 += 2) 
                        {
                            {
                                arr_50 [i_10] [i_10] [i_11 - 1] [i_10] [i_12] [i_13] [i_10] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) + (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-2846528644865557497LL)))) && (var_2))))));
                                var_11 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) min(((_Bool)1), (var_4)))) % (((/* implicit */int) (unsigned char)163))))), ((+(var_5)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                arr_57 [i_10] [i_10] [i_12 + 3] [i_15] [i_16] = ((/* implicit */short) (~(((var_7) & (((/* implicit */int) var_3))))));
                                arr_58 [i_10] [i_11] [i_12] [i_15] [i_10] [i_10] = ((/* implicit */int) 5807712191531757938LL);
                                var_12 = ((/* implicit */long long int) var_8);
                                arr_59 [i_10] [i_10] [i_10 + 1] [i_10] = ((/* implicit */unsigned int) max((8381091568291104166ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)53)))))));
                                arr_60 [i_10] [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (9074471184247516270ULL))))) & (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))))) != (8733789614573319976ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
