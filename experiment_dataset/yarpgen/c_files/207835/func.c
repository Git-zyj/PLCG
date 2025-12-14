/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207835
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((signed char) min((((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [i_0] [(short)18])))), ((!(((/* implicit */_Bool) (short)56)))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */short) arr_1 [i_0] [i_0]))))) % (((/* implicit */int) ((unsigned char) var_1))))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_14 = ((/* implicit */long long int) ((max((min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (var_0))), (((var_11) | (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_1] [i_2])))))) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [6LL] [i_1] [6LL] [i_1])))));
                var_15 = ((/* implicit */unsigned int) var_5);
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        {
                            var_16 = ((((/* implicit */long long int) ((/* implicit */int) var_3))) == ((((_Bool)0) ? (-2678851636230549584LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)33))))));
                            arr_16 [i_0] [(unsigned char)18] [i_2] [(unsigned char)18] [i_0 - 1] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */int) var_7)), (((((/* implicit */int) (signed char)33)) / (((/* implicit */int) (short)-57)))))) > (((/* implicit */int) min((var_9), ((short)-38))))));
                            arr_17 [i_1] [i_0] [9] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-34))));
                        }
                    } 
                } 
            }
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_17 = ((/* implicit */long long int) arr_0 [i_0]);
                arr_20 [(short)1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned int) max((12668593578165017801ULL), (((/* implicit */unsigned long long int) (short)56))))), (((/* implicit */unsigned int) (short)-10119))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                var_18 = var_3;
                var_19 = arr_10 [i_0] [i_1] [i_0];
            }
            arr_24 [i_0] [i_1] = min((((short) (+(arr_9 [i_0] [i_0] [i_0] [16LL])))), (((/* implicit */short) var_8)));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (-1) : (((min((var_12), (((/* implicit */int) (unsigned short)22703)))) & ((((_Bool)1) ? (arr_11 [i_0] [i_1] [i_1]) : (((/* implicit */int) arr_4 [i_0]))))))));
        }
        for (signed char i_7 = 1; i_7 < 17; i_7 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) arr_15 [i_0] [(unsigned short)2]);
            var_22 = ((/* implicit */unsigned int) arr_8 [i_0 + 2] [i_0]);
        }
    }
    /* LoopNest 3 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) var_7);
                    arr_34 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_8])), (var_4)))) ? (arr_18 [i_9] [i_9] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8] [15U] [i_10] [i_10])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8] [i_9] [i_10])) ? (((/* implicit */int) var_10)) : (arr_9 [i_9] [i_8] [i_8] [i_10])))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_8] [i_8] [1ULL] [(short)7]), (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_8] [i_9])), (arr_32 [(signed char)18] [i_9] [15LL])))) : (((/* implicit */int) arr_3 [i_8] [i_9] [i_10]))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned short) var_5)), (arr_19 [i_8])))), (min((var_0), (((/* implicit */long long int) -1)))))) : (((/* implicit */long long int) min((((/* implicit */int) ((arr_12 [i_8] [14LL] [i_10] [i_10]) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))))), ((~(((/* implicit */int) arr_25 [i_8])))))))));
                }
            } 
        } 
    } 
}
