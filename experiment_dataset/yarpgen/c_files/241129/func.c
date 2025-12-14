/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241129
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
    var_11 = ((/* implicit */unsigned short) 18014398492704768LL);
    var_12 = ((/* implicit */unsigned long long int) var_6);
    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32760))))) % (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (7554222209963784515LL)))), ((+(var_4)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (((unsigned char) (_Bool)1))))) ? ((~(((-4922164598028775808LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) (short)-21683)) ? (((/* implicit */long long int) var_6)) : (arr_0 [i_0]))))))))));
                    var_15 = ((/* implicit */unsigned int) (unsigned char)96);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 4) 
        {
            {
                arr_11 [i_3] [i_3] [i_4 + 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_4]))) + (var_0)))) <= ((~(0ULL)))))), (arr_6 [i_3] [i_3])));
                arr_12 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-92))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_18 [i_3] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1152358554653425664ULL)))))) + (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_4 - 2]) : (arr_7 [i_4 + 2]))));
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
                            {
                                arr_22 [i_5] = ((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [(unsigned short)16]);
                                arr_23 [i_7] [i_6] [i_5] [i_4 + 2] [i_3] = ((/* implicit */short) min((((/* implicit */int) (unsigned char)139)), (min((((((/* implicit */int) var_9)) ^ (1950240358))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)54720)) : (((/* implicit */int) (unsigned short)37432))))))));
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 3) 
                            {
                                arr_26 [i_3] [9] [i_3] [i_6 - 1] [i_8 - 3] [i_4] [i_4] = ((/* implicit */unsigned int) arr_0 [i_5]);
                                arr_27 [i_3] [18] [i_5] [i_6 - 1] [i_8] &= ((/* implicit */signed char) arr_14 [(signed char)5] [i_5] [0] [i_8 + 3]);
                                var_16 += ((/* implicit */signed char) (~(-18014398492704775LL)));
                                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)62249)) - (((/* implicit */int) min((((/* implicit */short) (unsigned char)145)), (var_9)))))), (-1434736231)));
                            }
                            for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
                            {
                                var_18 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_7)));
                                var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_10)) <= (var_7)))) < (1950240358)));
                                var_20 = ((/* implicit */long long int) ((unsigned short) arr_16 [i_3] [i_3] [i_4 - 2] [i_6 - 1]));
                            }
                            /* vectorizable */
                            for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                            {
                                var_21 *= ((/* implicit */unsigned short) arr_10 [i_4] [i_10]);
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)47116)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18426))) * (8200552000510003319ULL)))));
                            }
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((5343398179709568439LL) | (((/* implicit */long long int) arr_14 [i_3] [i_4] [i_5] [i_5])))), (((/* implicit */long long int) max((((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_6 [i_6 - 1] [i_6 - 1])))), (((_Bool) 3019107254U))))))))));
                            arr_33 [i_6 - 1] [i_5] [i_4] [i_3] = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    arr_37 [i_11] [(unsigned char)5] [1U] [i_3] = ((/* implicit */_Bool) 1258065266503799758ULL);
                    arr_38 [i_3] [2LL] [i_3] [14U] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_3)), (((var_4) & (((/* implicit */unsigned long long int) 18014398492704764LL))))));
                    var_24 ^= ((/* implicit */short) max((-1950240358), (((/* implicit */int) (unsigned char)128))));
                }
            }
        } 
    } 
}
