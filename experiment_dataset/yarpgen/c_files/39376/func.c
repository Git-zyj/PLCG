/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39376
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
    var_10 &= ((/* implicit */int) ((((/* implicit */int) (short)868)) > (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-4102)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1])))) != (((/* implicit */int) (short)-9629))));
                                var_13 = ((/* implicit */short) ((((/* implicit */int) (short)-8726)) - (((/* implicit */int) arr_9 [i_4 - 1] [i_1 + 1] [i_0] [i_0] [i_0] [10U] [i_0]))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [16U] [i_2] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) (((((~(((((/* implicit */int) arr_5 [i_2] [i_1] [(unsigned short)0])) >> (((arr_10 [i_0] [i_1] [i_2] [(unsigned short)7] [i_0]) - (2006978625U))))))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)43000)), (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0])))) & (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (5141936400237572862ULL))))) - (41694ULL)))))) : (((/* implicit */unsigned short) (((((~(((((/* implicit */int) arr_5 [i_2] [i_1] [(unsigned short)0])) >> (((((arr_10 [i_0] [i_1] [i_2] [(unsigned short)7] [i_0]) - (2006978625U))) - (4092001403U))))))) + (2147483647))) >> (((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)43000)), (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0])))) & (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (5141936400237572862ULL))))) - (41694ULL))))));
                    var_14 = var_7;
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_0] [(_Bool)1]))))) ? (((/* implicit */int) (short)-15)) : (((((/* implicit */int) arr_5 [(unsigned short)16] [i_0] [i_0])) << (((((/* implicit */int) (short)22748)) - (22721)))))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [i_0])) % (((/* implicit */int) (short)32114))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)41614))))) ? (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_1] [i_5])) : (((1169615128) >> (((((/* implicit */int) (unsigned short)42028)) - (42027)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (short i_7 = 3; i_7 < 16; i_7 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_1] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) var_3)) + (13913)))))) ? (((/* implicit */int) (short)-8742)) : (((/* implicit */int) arr_1 [i_0]))));
                                arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_1 + 1] [i_1] [i_1] [i_7 + 1])) < (((/* implicit */int) arr_20 [3] [i_1] [i_1] [i_7 - 2]))));
                                arr_23 [i_0] [(unsigned short)14] [i_0] [13] [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) arr_14 [i_7 - 1] [i_1] [i_1] [i_0]))));
                                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) arr_18 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_12 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6]))))))));
                            }
                        } 
                    } 
                }
                var_18 ^= ((/* implicit */unsigned short) ((((((arr_3 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0])) >> (((((/* implicit */int) (unsigned short)41614)) - (41605)))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) arr_19 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] [i_0]))))))))));
            }
        } 
    } 
}
