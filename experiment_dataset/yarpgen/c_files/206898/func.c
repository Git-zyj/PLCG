/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206898
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((var_6) ? (3828055263U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5450420036510037924LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))))));
                    var_14 &= ((/* implicit */_Bool) ((((_Bool) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16128))) : (var_5)))) ? (max((26ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) min((6877132423737838466LL), (0LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 2305843009213693952ULL))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), (((1125625028935680LL) ^ (var_0))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_4] = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5)))))))))) : ((((((_Bool)1) ? (var_0) : (var_1))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 527280213)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        for (short i_6 = 4; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_20 [i_5] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3243535936488387438LL)))))) : (2005456631689342879LL)));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned short) ((var_5) == (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-12341)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_17 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (var_0) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2947896009U))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_1] [i_2] [i_1 + 1] [i_1])), (var_1)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_1] [i_0 + 1] [i_1] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_19 = var_8;
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 2199023255551LL))));
    var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 3476334219977153181LL))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((int) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((unsigned int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
}
