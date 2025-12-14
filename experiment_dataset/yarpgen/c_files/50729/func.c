/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50729
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned int) min((arr_0 [i_1 - 1]), (((/* implicit */long long int) (unsigned char)162))));
            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (unsigned char)94)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) 4294967295U)))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
            var_12 = min((50331648U), (((/* implicit */unsigned int) (unsigned char)218)));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(3221910903U))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) & (((/* implicit */int) ((2541564026U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3321562824U)))))))))));
                var_13 -= ((/* implicit */unsigned long long int) 8388607);
                /* LoopNest 2 */
                for (short i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned char) ((-5816851467044104714LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) 3283502384U)) / (5816851467044104694LL)));
                            arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) min((max((arr_9 [i_0 + 2] [i_1 + 2]), (arr_9 [i_0 + 2] [i_1 + 2]))), (((/* implicit */long long int) ((int) (-(((/* implicit */int) (unsigned char)188))))))));
                            var_16 = ((/* implicit */unsigned char) (+(((arr_13 [i_1] [i_3] [i_1] [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)188))))));
                        }
                    } 
                } 
                var_17 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 1])) - (((/* implicit */int) arr_1 [i_1 + 2]))))) && (arr_1 [i_1 - 1]));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -693764692)) + (18446744073709551615ULL)));
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_1] [i_0]))));
                var_20 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_1] [i_5] [i_5] [i_5]);
            }
            arr_19 [i_1] = ((/* implicit */unsigned char) max((arr_18 [i_1 - 1] [i_1] [i_0 + 1]), (((/* implicit */int) arr_1 [i_1]))));
        }
        var_21 = ((/* implicit */int) (~(((((/* implicit */long long int) max((-1), (1316001898)))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) : (5816851467044104714LL)))))));
    }
    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_20 [i_8] [i_8])) ? (arr_14 [i_8] [i_8] [i_8] [i_7] [i_6] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_7] [(short)18] [i_7] [i_7]))))))) & (((/* implicit */long long int) ((/* implicit */int) min(((!(arr_13 [i_8] [i_7] [i_7] [i_8] [i_9]))), (((2147483647) >= (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [(unsigned char)1]))))))))));
                        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27938)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_7])) <= (arr_20 [i_8] [i_9]))))))) : (((((/* implicit */_Bool) min((8), (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (6825636231973818394LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) 783691130)), (arr_0 [i_7])))))));
                        var_24 = ((/* implicit */_Bool) arr_6 [i_6] [i_7] [i_8] [i_9]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (!(arr_16 [(_Bool)1])))) < (((/* implicit */int) min(((short)27938), (((/* implicit */short) (unsigned char)130)))))))) * (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6]))));
    }
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (((+((+((-2147483647 - 1)))))) / (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-(255ULL))))))))))));
    var_27 = ((/* implicit */unsigned char) (_Bool)1);
    var_28 = ((/* implicit */long long int) max((var_2), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_4))))) >= (((var_1) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))))))))));
}
