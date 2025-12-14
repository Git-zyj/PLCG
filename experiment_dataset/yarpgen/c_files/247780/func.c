/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247780
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [16] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_3 [i_0] [3] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) : (arr_2 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((4ULL) & (((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_7 [i_1] [i_1] [i_1]) || (var_9)))), ((~(((/* implicit */int) (_Bool)0)))))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) <= (((((/* implicit */int) arr_8 [i_1] [i_2])) - (arr_2 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) ((unsigned int) ((arr_8 [i_0] [i_2]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (18446744073709551611ULL))) : (((/* implicit */unsigned long long int) ((int) arr_7 [i_2] [i_2] [i_2]))))));
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max(((~(5ULL))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [(unsigned char)5] [i_5]))));
                                arr_19 [i_0] [i_4] [i_3] = ((min((((/* implicit */int) arr_15 [i_0] [i_3] [i_3] [i_4] [i_5])), (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned short)26286)) : (((/* implicit */int) arr_16 [i_0] [12] [i_3] [i_5])))))) == (((((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) != (((/* implicit */int) var_9))))) / (((/* implicit */int) var_7)))));
                                arr_20 [i_3] = ((/* implicit */short) arr_12 [i_0] [2] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_24 [i_3] [i_6] [i_3] [(_Bool)1] [(unsigned char)10] [i_3] = ((/* implicit */_Bool) 1733546903);
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) -1733546916);
                            arr_28 [i_0] [(_Bool)1] [10] [i_3] [i_7] = ((/* implicit */unsigned short) ((_Bool) (unsigned char)201));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_10))) < (-1733546899))))));
                                arr_36 [i_0] [i_3] [i_3] [i_8] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)55931)))))))) != (((/* implicit */int) ((var_12) || (((/* implicit */_Bool) ((unsigned char) arr_12 [i_0] [i_1] [i_3]))))))));
                                arr_37 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)128)))) >> (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_0] [(unsigned char)22]))));
                            }
                        } 
                    } 
                    arr_38 [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) (_Bool)0);
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    arr_42 [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)0);
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) var_12))), (arr_40 [(_Bool)1] [(unsigned char)18] [i_10])));
                    var_18 = min((((/* implicit */short) min((arr_29 [(signed char)7] [(signed char)7] [i_10] [i_10]), (arr_29 [i_0] [(unsigned short)23] [i_1] [(unsigned char)17])))), (arr_34 [(unsigned short)19] [i_0] [i_0] [i_0]));
                    arr_43 [i_0] [i_0] [i_0] = ((/* implicit */int) var_7);
                    arr_44 [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)243))))), (((((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_1] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)249), (arr_14 [(short)3] [i_10] [i_0] [i_0])))))))));
                }
                var_19 = ((/* implicit */_Bool) (~(((unsigned long long int) arr_35 [i_0] [i_0] [i_0] [(unsigned char)2] [i_0]))));
                arr_45 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [(_Bool)1] [i_1] [(_Bool)1] [19])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55008)) - (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_1)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((var_6) != (var_6)))));
    var_21 = ((/* implicit */_Bool) var_3);
}
