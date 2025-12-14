/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237127
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_11 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_3] [i_3] [i_1])) ? (max((-1703580566), (((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) >= (((/* implicit */int) (unsigned char)161)))))))), (min((((-8780649817896544987LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-100))))), (min((((/* implicit */long long int) 1046528U)), (-1641460040304576424LL)))))));
                            var_12 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) ((_Bool) arr_4 [i_0] [i_1]))), (((unsigned int) (unsigned short)43568)))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)157)) << (((max((min((((/* implicit */long long int) arr_4 [i_0] [i_0])), (-1641460040304576424LL))), (min((-1641460040304576434LL), (((/* implicit */long long int) (signed char)3)))))) + (1641460040304576442LL))))))));
                            arr_11 [i_2] [i_1] = ((/* implicit */unsigned int) (unsigned char)251);
                            var_14 = max((((/* implicit */long long int) max((((((/* implicit */_Bool) 596860916U)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_0] [i_0] [i_1])))), (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2 - 2]))))), (min((-643771269076950262LL), (((/* implicit */long long int) (unsigned char)255)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_10 [i_0] [i_0] [i_1] [i_0] [17U] [i_0]))), (min((3698106374U), (arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (((long long int) var_6)))) == (((/* implicit */long long int) min((((((((/* implicit */int) (signed char)-111)) + (2147483647))) << (((/* implicit */int) var_5)))), (((/* implicit */int) ((short) (signed char)-79))))))));
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */short) ((min((643771269076950261LL), (((/* implicit */long long int) (unsigned char)81)))) == (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [i_4] [19LL]), (arr_14 [i_4] [i_5 + 1])))))))), (min((((/* implicit */short) (signed char)14)), (arr_13 [i_5 + 1] [i_5 - 1])))));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    var_18 &= ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_4] [i_5])) | (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) 3698106380U)) ? (((/* implicit */long long int) 596860914U)) : (8780649817896544959LL))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_15 [i_4] [i_4])) << (((((/* implicit */int) (unsigned char)164)) - (159)))))))));
                    var_19 = ((/* implicit */short) 699979995);
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) (unsigned char)13)) || (((/* implicit */_Bool) -7193614396579758412LL)));
                        var_21 += ((/* implicit */unsigned int) ((long long int) arr_21 [i_4] [i_8 - 1] [i_7] [i_7]));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((arr_16 [i_8 - 1] [i_5 + 1] [i_7]) / (-7408121071119170453LL))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_8 + 1] [i_5 - 1] [i_7] [i_8])) * (((/* implicit */int) arr_20 [i_8 + 1] [i_5 - 1] [i_7] [4LL])))))));
                    }
                    arr_24 [(unsigned char)10] [(unsigned char)5] [(_Bool)1] = ((/* implicit */unsigned int) (unsigned char)227);
                    arr_25 [i_5] [i_5 - 1] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned char)242)) * (((/* implicit */int) (unsigned short)0)))));
                }
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 23; i_10 += 2) 
                    {
                        for (int i_11 = 3; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((596860915U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125)))))))) & (((min((-7408121071119170447LL), (((/* implicit */long long int) (unsigned short)21)))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) (unsigned char)18))))))))))));
                                var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) ((int) arr_26 [i_10 - 2] [i_11 + 3]))) ? (((/* implicit */int) min((arr_26 [i_10 + 1] [i_11 + 1]), ((unsigned char)85)))) : (((/* implicit */int) min((arr_26 [i_10 + 1] [i_11 + 3]), ((unsigned char)30))))))));
                                var_26 = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) max((12699541), (699980013)))), (min((2649440435U), (3595174575U)))))), (3337776984813535826LL)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((_Bool) ((short) min((arr_17 [i_4] [i_4]), (((/* implicit */long long int) 12699530)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 23; i_13 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) max((arr_35 [i_5 + 1] [i_12] [i_13 + 1] [i_12] [i_13]), (((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_5 + 1] [i_5 + 1] [i_13 + 1] [i_12] [i_13 - 1])) <= (((/* implicit */int) arr_35 [i_5 + 1] [i_5 + 1] [i_13 + 1] [i_12] [i_12]))))))))));
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_13] [i_13])) ? (((/* implicit */int) ((((/* implicit */long long int) arr_34 [i_12] [i_13 + 1] [i_12] [i_5 + 1])) == (arr_17 [i_5 - 1] [i_13 + 1])))) : (((/* implicit */int) arr_18 [i_4] [i_4]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
