/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40347
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
    var_10 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) : (739758149U)))) ? ((+(((/* implicit */int) (unsigned char)7)))) : (((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (signed char)32))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_0 [(_Bool)1])))))))), ((+(((((/* implicit */_Bool) (signed char)70)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(min((3271501346U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 19U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0 - 3])))))))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), ((-(var_6))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0 - 4])), (2088785602))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_12 = ((/* implicit */_Bool) var_3);
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) (signed char)108)))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (signed char)-32)))))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_1 [i_0 - 4]))));
            }
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-37)) & (((/* implicit */int) (_Bool)1))));
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_0 - 3] [i_1]))));
                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-32))));
                arr_15 [i_1] [i_1] = ((((((/* implicit */int) (signed char)-46)) + (2147483647))) << (((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-55)))) - (1))));
            }
            for (signed char i_4 = 4; i_4 < 9; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_17 = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1] [i_1]))));
                    var_18 = ((/* implicit */signed char) ((long long int) arr_1 [i_0 - 4]));
                    arr_21 [(signed char)2] [8U] [i_4 - 1] [i_4] |= ((/* implicit */signed char) (~(((/* implicit */int) (!((_Bool)1))))));
                }
                var_19 = ((/* implicit */unsigned short) (+(arr_17 [i_0] [i_1] [i_1])));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    var_20 ^= ((((/* implicit */_Bool) 2147475456U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (signed char)27))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3]))) : (arr_20 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (arr_6 [i_0 - 3]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        var_22 = ((arr_18 [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_4 - 3] [i_6]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) : (12382272014012021237ULL))));
                        arr_26 [i_1] [i_1] = var_6;
                        var_23 = ((/* implicit */unsigned char) 9223372036854775807LL);
                        var_24 &= ((/* implicit */int) (!((_Bool)1)));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_8] [i_6] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_25 [i_1] [i_6] [i_8]))))) >= (arr_20 [i_0 - 4])));
                        var_26 = (!(((/* implicit */_Bool) (~(var_6)))));
                    }
                }
            }
            arr_29 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)14)) != (((/* implicit */int) (_Bool)1))));
        }
    }
    var_27 = ((/* implicit */int) (_Bool)1);
    var_28 = ((/* implicit */signed char) var_9);
}
