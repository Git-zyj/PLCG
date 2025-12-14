/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28158
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [(signed char)3] [(unsigned char)6] = ((/* implicit */unsigned short) arr_0 [i_1 + 1]);
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_3 [i_0] [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))))))) : (((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) (+(var_10)))) : (arr_0 [i_0])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_4] [i_3] [i_2 + 1] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)34);
                                var_19 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) != (((/* implicit */int) var_9)))))))));
                                arr_16 [i_0] [(unsigned char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_8 [i_1]))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) / (var_10)))) - (min((arr_7 [i_0] [i_0] [(short)15]), (2992021253U)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (min((arr_12 [(_Bool)1]), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)221))))))), (((/* implicit */unsigned long long int) -3955707861499395975LL))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min(((~(((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_6])) ? (var_1) : (((/* implicit */unsigned long long int) arr_25 [i_6])))))), (max((((((/* implicit */_Bool) arr_22 [(unsigned char)22] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) : (var_16))), (((/* implicit */unsigned long long int) arr_18 [i_5 - 2])))))))));
                var_22 = ((/* implicit */unsigned short) arr_24 [(unsigned char)4]);
            }
        } 
    } 
    var_23 *= ((/* implicit */_Bool) max((var_17), (var_18)));
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_8])) % (min(((-(arr_26 [i_7]))), (((((/* implicit */int) (unsigned short)5359)) / (((/* implicit */int) arr_21 [(unsigned short)12]))))))));
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 16; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        for (int i_11 = 2; i_11 < 17; i_11 += 3) 
                        {
                            {
                                arr_40 [i_7] [i_8] [i_8] [i_8] = (-(((/* implicit */int) arr_39 [i_7] [i_8] [i_9] [i_10] [i_11])));
                                var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3668472231U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))) : (18446744073709551596ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)39)), (arr_32 [(_Bool)1]))))))) ? (((/* implicit */int) (!(arr_36 [i_8] [11ULL] [(unsigned char)18] [i_11 + 2])))) : ((+(((/* implicit */int) arr_38 [i_11 + 2] [i_8] [i_9 - 1] [i_10] [i_11]))))));
                            }
                        } 
                    } 
                    arr_41 [i_7] [i_7] [i_8] [i_8] = ((unsigned short) (!(((/* implicit */_Bool) arr_30 [i_7] [i_8]))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_26 = ((/* implicit */signed char) (unsigned char)228);
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        for (int i_14 = 1; i_14 < 17; i_14 += 4) 
                        {
                            {
                                arr_52 [i_8] [i_8] [i_13] [i_12] [i_8] [i_7] = ((/* implicit */unsigned short) (~(min(((~(((/* implicit */int) (short)-12095)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)32488)), ((unsigned short)48663))))))));
                                arr_53 [i_8] = ((/* implicit */unsigned char) max(((((~(9223372036854775807LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_17))))), (((/* implicit */long long int) (-(max((arr_26 [i_8]), (var_10))))))));
                                var_27 += ((/* implicit */unsigned char) (-(-1263629393)));
                                arr_54 [i_7] [i_8] [(short)4] [i_12] [i_13] [i_13] [i_14 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5)) ? (14555551402247410359ULL) : (14476086435404794977ULL)));
                            }
                        } 
                    } 
                    arr_55 [i_8] [i_12] = ((/* implicit */unsigned short) var_10);
                    var_28 = ((unsigned long long int) (signed char)127);
                }
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        {
                            arr_62 [(_Bool)1] [i_8] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_16] [i_8] [i_8] [i_7])) ? (((/* implicit */int) arr_49 [i_16] [i_8] [i_15] [i_16] [i_7] [i_16] [i_16])) : (min((((((/* implicit */int) arr_29 [i_8])) * (((/* implicit */int) arr_43 [i_8])))), (((/* implicit */int) max(((unsigned short)9), ((unsigned short)4))))))));
                            var_29 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((signed char) arr_34 [i_7] [i_15] [i_16]))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)208)))) : (((/* implicit */int) arr_23 [i_7])))), ((-((+(((/* implicit */int) (unsigned short)65530))))))));
                            arr_63 [i_7] [i_8] [i_8] [i_15] [i_8] [i_16] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)229)), ((-9223372036854775807LL - 1LL))))))))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(arr_44 [i_7] [i_15] [i_15] [i_16]))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((max(((-2147483647 - 1)), (((/* implicit */int) (short)25095)))) + (((/* implicit */int) min((arr_27 [i_8]), (arr_46 [i_7] [i_7] [i_8] [i_8]))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_7] [i_8] [i_7] [17LL] [i_7] [i_8] [i_8]))))) ? (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_7] [i_7] [2] [i_8] [i_8]))))) : (((/* implicit */unsigned long long int) ((int) arr_43 [i_8])))))));
            }
        } 
    } 
}
