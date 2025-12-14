/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26531
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
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) min((arr_8 [i_2] [i_3] [i_2] [i_1] [i_0 - 3]), (arr_2 [i_0]))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 3; i_4 < 21; i_4 += 4) /* same iter space */
                            {
                                arr_14 [i_0] [i_0] [(short)17] [i_0 - 3] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) arr_10 [20ULL] [20ULL] [i_1] [i_2] [i_3] [i_3] [i_4 - 3]));
                                var_15 ^= ((/* implicit */unsigned char) max((var_13), ((signed char)-112)));
                                arr_15 [i_4] [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_4]);
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 3; i_5 < 21; i_5 += 4) /* same iter space */
                            {
                                arr_19 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0 - 3] [i_5 - 2] [i_3] [i_5 - 2] [i_0 - 3])) * (((/* implicit */int) arr_13 [i_0 - 3] [i_5 - 2] [i_3] [i_5 - 2] [i_5 + 1]))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_9))));
                                arr_20 [i_0 - 3] [i_0 - 3] [i_5] [i_5 - 1] [i_5 - 3] = ((/* implicit */long long int) var_11);
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) < (468084966U)));
                                var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_5 - 2] [i_5])) ? (((/* implicit */long long int) -1)) : (var_7)));
                            }
                            arr_21 [(unsigned char)18] [i_2] [i_1] [(unsigned char)18] |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (-(((var_1) + (((/* implicit */unsigned int) arr_8 [i_0] [0LL] [i_1] [i_1] [i_1]))))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!((!(arr_13 [i_0 - 2] [i_0 - 2] [14ULL] [i_0 - 2] [i_0 - 2])))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_31 [i_0] [12ULL] [12ULL] [i_0 - 4] |= ((/* implicit */signed char) (unsigned char)252);
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) (signed char)-126)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 ^= ((/* implicit */unsigned char) ((long long int) (unsigned char)198));
}
