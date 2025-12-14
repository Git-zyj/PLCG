/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242312
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (var_3)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned short)9777))));
                                arr_14 [i_0] [i_0] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) max((min((arr_1 [i_4]), (((/* implicit */unsigned long long int) (unsigned short)55759)))), ((~(arr_1 [i_0])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_5] [i_0] = var_12;
                            arr_22 [i_0] [i_0] [i_1] [i_5] [14ULL] = ((/* implicit */unsigned short) (+(var_15)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1]))) ^ (arr_10 [i_1 - 3] [i_1] [i_1 - 1]))) < (arr_7 [i_0] [i_1] [i_1] [i_0])));
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned short)55759))))))));
                                var_21 -= (unsigned short)0;
                                var_22 = ((/* implicit */unsigned short) ((unsigned long long int) arr_26 [i_1] [i_1] [i_1 - 2] [i_8] [i_8] [i_7]));
                            }
                            /* vectorizable */
                            for (unsigned short i_10 = 3; i_10 < 19; i_10 += 2) 
                            {
                                var_23 -= 5922004370896674740ULL;
                                arr_32 [(unsigned short)14] [i_1 - 3] [i_1] [i_1] [i_8] [i_10] [i_10] = ((unsigned short) arr_12 [i_7 + 3] [i_10] [i_10] [i_10] [i_10 + 1]);
                                arr_33 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28854))) & (arr_10 [i_0] [i_0] [i_10])));
                            }
                            arr_34 [0ULL] [i_8] [i_7] [i_1] [i_0] = ((/* implicit */unsigned short) (+((-((~(arr_2 [i_8])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        {
                            arr_40 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)28854)))))));
                            var_24 = ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) : (((((/* implicit */_Bool) 9730041335532802642ULL)) ? (arr_2 [i_0]) : (0ULL))));
                            var_25 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
