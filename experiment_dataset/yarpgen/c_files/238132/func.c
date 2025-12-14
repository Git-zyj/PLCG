/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238132
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
    var_18 = ((/* implicit */unsigned char) (~(var_10)));
    var_19 = ((/* implicit */unsigned long long int) (unsigned char)116);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((arr_4 [i_0]), (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (arr_4 [i_1 + 1]))))))));
                var_21 -= ((/* implicit */unsigned char) (signed char)-8);
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_1 - 1]))))) ? ((~((~(arr_4 [i_0]))))) : (arr_4 [i_0])));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)140))));
                            var_23 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)33423)) ? (arr_10 [i_2] [i_1] [i_1] [i_2]) : (6331598983064487349ULL)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)111))))) ? ((-(arr_9 [i_0] [i_0] [i_3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) max((((arr_1 [i_1]) ? (((/* implicit */int) arr_8 [i_0] [8LL] [i_2] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((unsigned short) arr_3 [i_2])))))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)-97), (((/* implicit */signed char) arr_1 [i_1]))))))))));
                            var_25 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [3U]);
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) (+((~((-(6506683516412826430ULL)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((-(var_2))) : (((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */_Bool) 11940060557296725185ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (var_2)))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 4; i_4 < 23; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            for (unsigned char i_6 = 2; i_6 < 24; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_15 [i_5])))) ? (((/* implicit */int) arr_19 [i_4] [i_5] [i_4])) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-127))))), ((+(arr_26 [i_6] [i_7]))))) : (((unsigned long long int) arr_23 [i_4 + 1] [i_4 - 4] [i_4 + 1] [i_4 + 1]))));
                                arr_29 [i_4] [i_4] [i_6] [i_6 - 2] [i_7] [i_8] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)64))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 22; i_10 += 2) 
                        {
                            {
                                arr_34 [i_4] [i_9] = arr_30 [i_4] [i_4] [i_6 - 1] [i_9] [i_10 + 1] [i_6];
                                arr_35 [i_10] [i_9] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4 - 1])) ? (arr_20 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4 - 2] [i_4 - 2] [i_5] [i_6 - 1] [i_9] [i_10 - 1])))))) ? (((/* implicit */long long int) max((((unsigned int) -5902720165600433802LL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 17931217132118998228ULL)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_25 [i_4 - 2] [i_9] [i_4 - 2] [i_4 - 2])))))))) : (min((((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6 + 1]))) : (arr_23 [i_10 + 2] [i_4] [i_4] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2413980859863543378ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_10 - 1] [i_10 + 3] [i_9] [i_4] [i_5] [i_4]))) : (arr_27 [i_10] [i_9] [i_9] [i_4] [i_4] [i_4]))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), ((+(6368514057696562789ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                arr_41 [i_12] [i_6] [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) arr_36 [i_11 + 1] [i_6 - 1] [i_6 - 1] [i_4 + 1]));
                                arr_42 [(unsigned short)23] [i_11] [i_4 + 1] [i_11] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) ((((_Bool) arr_38 [i_11 + 2] [i_11 + 2] [i_6] [i_11] [i_12])) ? (((((/* implicit */_Bool) arr_38 [i_11 - 1] [i_5] [i_6] [i_4] [i_12])) ? (arr_38 [i_11 + 2] [i_11 + 2] [i_6] [i_6] [i_12]) : (13070971884007071860ULL))) : ((-(arr_38 [i_11 - 1] [i_5] [i_6] [i_6] [i_11 - 1])))));
                                var_29 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)116))));
                                var_30 -= ((/* implicit */long long int) arr_33 [i_4] [i_4 - 2] [i_6 - 2] [i_11 - 1] [i_6 - 2]);
                                var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_18 [i_11 + 1])) ? (((((/* implicit */_Bool) arr_37 [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_4] [i_5] [i_6 - 2] [i_11] [i_4]))) : (3427159988423988212LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_5] [i_5] [i_6 - 2] [i_5] [i_4 - 2])))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_30 [i_4] [i_4 - 3] [(_Bool)1] [i_4 - 3] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_16 [i_4 - 3])) : (((/* implicit */int) arr_16 [i_4 + 1]))))))));
                }
            } 
        } 
    } 
}
