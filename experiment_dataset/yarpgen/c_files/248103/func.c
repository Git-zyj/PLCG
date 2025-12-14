/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248103
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
    var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)65530))))))) ? (max((((((/* implicit */_Bool) 15U)) ? (0ULL) : (((/* implicit */unsigned long long int) 24U)))), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
    var_14 -= ((/* implicit */signed char) var_8);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned short)4] [i_0 + 1] [i_0 + 1]);
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */signed char) 4294967281U);
                    arr_7 [i_2] |= ((/* implicit */unsigned char) (unsigned short)63488);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) 9223372036854775807LL);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-127)) >= (((/* implicit */int) arr_11 [i_3] [(signed char)14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((4294967281U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3] [(unsigned char)0])))))));
                var_18 -= ((/* implicit */signed char) (-(var_4)));
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_9)))) && (((/* implicit */_Bool) var_1))));
                                var_20 *= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_9 [i_5])) > (((/* implicit */int) arr_9 [i_5])))), (((((/* implicit */_Bool) arr_9 [i_5])) || (((/* implicit */_Bool) (short)26741))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_5]))) * (min((((/* implicit */long long int) (unsigned short)0)), (((long long int) (unsigned short)54495))))));
                    var_22 = ((/* implicit */unsigned char) ((_Bool) max((min((9223372036854775790LL), (((/* implicit */long long int) arr_15 [i_3] [i_4] [i_4] [i_5])))), (-2366208322632832906LL))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_15 [i_3] [i_4] [i_5] [i_5]))));
                }
                for (long long int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                {
                    var_24 *= ((/* implicit */signed char) max((((/* implicit */long long int) min((arr_12 [i_8]), (((/* implicit */int) (short)0))))), (max((((/* implicit */long long int) 40U)), (2366208322632832905LL)))));
                    var_25 += ((/* implicit */unsigned char) arr_8 [(_Bool)0] [i_4]);
                    var_26 |= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)54473)));
                }
                for (long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
                {
                    var_27 *= ((/* implicit */_Bool) arr_21 [i_3] [i_9] [6ULL] [(signed char)16]);
                    arr_26 [i_4] [(unsigned short)10] = ((/* implicit */long long int) (-(((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (signed char)-67))))));
                }
                for (long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                {
                    var_28 -= ((((/* implicit */int) var_6)) * (((/* implicit */int) min((arr_18 [i_10] [i_3] [i_4] [(_Bool)1] [i_3] [i_10]), (arr_18 [i_10] [i_4] [(unsigned short)18] [i_10] [(_Bool)1] [i_10])))));
                    var_29 ^= ((((/* implicit */_Bool) min(((unsigned short)24576), (((/* implicit */unsigned short) (signed char)-27))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))));
                    var_30 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_28 [i_3] [i_4])) : (((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1] [i_4] [i_10]))));
                    var_31 = ((/* implicit */short) var_5);
                    var_32 = ((/* implicit */long long int) (signed char)-122);
                }
            }
        } 
    } 
}
