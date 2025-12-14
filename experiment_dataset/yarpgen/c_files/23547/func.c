/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23547
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) var_12);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((unsigned char) (signed char)-1)))))));
                            arr_14 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */long long int) arr_0 [i_0]))))) == (min((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_7)))))) ? (min((((unsigned int) arr_3 [i_0])), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [1U]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */long long int) arr_1 [4LL]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1])) || (((/* implicit */_Bool) arr_3 [i_0]))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_3] [i_2])))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_6 [(signed char)9] [(signed char)9] [(_Bool)1]);
                            var_18 ^= var_5;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_23 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 + 1] [i_0])))), ((+(((/* implicit */int) (signed char)-54))))));
                            var_19 = ((/* implicit */signed char) ((unsigned char) ((((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_4])) ? (-1013727367) : (arr_1 [i_1]))) + (2147483647))) << ((((((~(((/* implicit */int) var_6)))) + (28))) - (26))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = max(((~(var_9))), (((690627579) ^ (((/* implicit */int) (_Bool)1)))));
    var_21 = ((/* implicit */_Bool) max((var_21), (var_6)));
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    for (int i_9 = 4; i_9 < 21; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                arr_39 [i_10] [(_Bool)1] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(arr_28 [i_6] [i_6 - 1] [i_6])))) / (((unsigned int) arr_28 [i_6] [i_6 + 1] [i_6]))));
                                var_22 ^= ((((/* implicit */_Bool) ((arr_30 [i_6]) << (((arr_29 [i_6] [i_6 - 1] [i_6 - 1]) - (378294943U)))))) ? ((-(arr_29 [i_6] [i_6 - 1] [i_6 + 1]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (2147483631)))));
                            }
                        } 
                    } 
                } 
                arr_40 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) 847980874U);
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 22; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) 2651265425U))) - ((+(min((((/* implicit */long long int) arr_25 [i_6])), (var_4)))))));
                            arr_47 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_6] [i_6])) > (((/* implicit */int) (_Bool)0))));
                            var_24 ^= ((/* implicit */unsigned int) ((arr_35 [i_6 - 1] [i_6 + 1] [i_7] [i_12] [i_12] [i_12]) ? (((/* implicit */int) ((signed char) arr_35 [i_6] [i_6 + 1] [i_7] [i_7] [i_7] [i_7]))) : ((+(((/* implicit */int) var_10))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (arr_26 [i_12])))) * (min((arr_43 [i_6] [i_7] [i_7] [i_12]), (((/* implicit */unsigned int) -1795859493)))))))))));
                        }
                    } 
                } 
                arr_48 [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
                arr_49 [i_6] [i_6] = ((/* implicit */long long int) (((+(var_4))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_6]) == (((/* implicit */unsigned int) arr_38 [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6] [i_6 - 1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        for (unsigned int i_14 = 1; i_14 < 20; i_14 += 4) 
        {
            {
                arr_55 [0ULL] [i_13] [0ULL] |= ((/* implicit */int) ((signed char) (~(var_12))));
                arr_56 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) arr_53 [i_13] [(unsigned short)9] [18LL]);
                arr_57 [i_13] [i_13] [i_13] = ((/* implicit */int) min((arr_54 [i_14]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_13])) && (var_14))))) <= (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_53 [i_13] [i_14] [i_14]))))))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1478803854)));
                            var_27 = arr_50 [i_15];
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(((/* implicit */int) ((arr_29 [i_13] [12] [i_13]) > (((/* implicit */unsigned int) arr_38 [i_16] [i_14] [i_16] [i_14] [i_14] [i_14] [23U]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
