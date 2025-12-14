/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212566
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_6))))) : (1123883344)));
    var_13 = ((((/* implicit */_Bool) ((285057398U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */long long int) 169370529U)) : (-3706127956058536280LL)))) ? (((((/* implicit */_Bool) (short)12107)) ? (3U) : (var_0))) : (3U))) : (17U));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_12 [i_1] [(unsigned short)0] [i_2] [i_3] &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) min((arr_5 [(short)8] [i_1] [(short)8]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1189112824)) ? (((/* implicit */int) arr_0 [(unsigned short)2] [i_1])) : (((/* implicit */int) (_Bool)1))))) : ((+(618116989836006094LL))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (+(-947980254238035319LL)));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */short) arr_4 [i_0]);
                /* LoopSeq 4 */
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) var_10)))))));
                    var_15 = ((/* implicit */short) ((((((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)0] [(signed char)3] [(signed char)3] [i_4])))))) >= (((int) var_9)))) ? ((+((+(var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_11 [i_0 + 2] [i_1] [i_4] [i_4] [i_4] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0]))) : (arr_17 [i_0] [i_0] [i_4])))))))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_16 = ((/* implicit */short) var_2);
                    arr_20 [i_1] [i_0] = ((/* implicit */int) var_4);
                }
                for (long long int i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) var_11);
                    arr_25 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) (~((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) / (max((((/* implicit */int) (unsigned short)55014)), (var_2)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 3; i_7 < 8; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_7] [i_8])))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) arr_29 [i_0 - 2] [i_1] [i_0 - 2] [i_7 - 3] [(signed char)4])) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) arr_29 [6] [i_6] [i_6] [i_1] [6])))) == (((/* implicit */int) ((unsigned short) arr_11 [i_0 - 4] [i_1] [i_1] [i_6] [i_7] [(unsigned short)2])))))))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+((~(((/* implicit */int) arr_23 [8U])))))))));
                            }
                        } 
                    } 
                }
                for (long long int i_9 = 1; i_9 < 8; i_9 += 1) /* same iter space */
                {
                    arr_35 [(unsigned char)3] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_9] [i_1] [i_0 + 2] [i_0 + 2])) ? (arr_18 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        for (long long int i_11 = 3; i_11 < 7; i_11 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (short)18971))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19196))) : (arr_24 [i_0] [i_10 + 2] [i_9 + 1] [i_0]))))))) : ((((!(((/* implicit */_Bool) arr_10 [i_0] [i_10] [i_9] [i_0])))) ? (((/* implicit */int) ((unsigned char) (short)-12108))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [0ULL] [i_10] [i_11])) || (((/* implicit */_Bool) arr_32 [i_1])))))))));
                                arr_40 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_2))))));
                                arr_41 [i_0] [i_1] [i_9] [i_10] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_27 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(var_1))))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_6 [i_0] [i_9] [i_9] [i_10]))));
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((signed char) arr_8 [i_9])), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
                }
            }
        } 
    } 
}
