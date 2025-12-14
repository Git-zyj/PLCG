/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51043
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
    var_12 |= ((/* implicit */unsigned long long int) 4874438431010287930LL);
    var_13 *= ((/* implicit */_Bool) max(((-(min((((/* implicit */long long int) (signed char)-75)), (255LL))))), (((/* implicit */long long int) (!(((-657570568) != (((/* implicit */int) var_7)))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((unsigned short) var_3)))) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) 4294967295U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) -2046053048)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_6 [i_0 + 2] [i_0] [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) (unsigned short)46928)), ((+(10687417731614847916ULL)))))));
                    var_15 -= ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) / ((-(7759326342094703700ULL))))), (17545680370424001862ULL)));
                    arr_9 [i_0] = ((/* implicit */_Bool) 7759326342094703700ULL);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_16 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 958748084U)) ? (var_2) : (((/* implicit */unsigned long long int) arr_5 [i_2]))))))))) * (min((max((((/* implicit */unsigned long long int) arr_10 [i_4])), (var_2))), (((/* implicit */unsigned long long int) min(((unsigned short)7672), (((/* implicit */unsigned short) (_Bool)0))))))));
                                var_17 -= (-(((/* implicit */int) (unsigned char)0)));
                                arr_16 [i_4] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2]))) - ((+(arr_6 [i_0 - 3] [i_0 - 2] [i_0] [i_0 + 1])))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 15647946341862971499ULL;
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned short) var_2);
                        arr_21 [i_5] [i_0] [i_0] [i_0 - 1] = 17266507868705001319ULL;
                        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)56)), ((short)11435))))) != (((arr_13 [i_0 - 3] [i_5 + 3] [i_2] [i_0] [i_0 + 2]) | (arr_14 [i_5 - 2] [i_0] [i_2] [i_1] [i_0] [i_0])))));
                        arr_22 [i_0] [i_1] [i_0 + 2] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) var_6)))));
                    }
                    for (long long int i_6 = 2; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((long long int) (short)-24703);
                        arr_25 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_7))))) - (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                    }
                    for (long long int i_7 = 2; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_7)))))) : (((/* implicit */int) arr_29 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_2]))));
                        var_21 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) 2564106837U)))) ? (max((17737374828044460000ULL), (((/* implicit */unsigned long long int) arr_7 [i_0])))) : ((+(arr_14 [i_7] [i_0] [i_2] [i_1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_0] [i_7]))) != ((+(((/* implicit */int) var_7)))))))));
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_11)))))))), ((~((+(arr_19 [i_0] [i_2] [i_1] [i_0])))))));
                        var_23 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-11435)) < (((/* implicit */int) (_Bool)1)))))) > (((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0])) ? (255LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [i_1])))))));
                    }
                }
            } 
        } 
    } 
}
