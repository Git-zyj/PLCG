/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23267
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) 
                            {
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_3 [i_0]))))), (((((/* implicit */_Bool) -1129828)) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) var_2))))))))));
                                var_14 += ((/* implicit */int) ((signed char) max(((+(((/* implicit */int) (signed char)-37)))), (((int) -2165036316464925758LL)))));
                                var_15 *= ((/* implicit */signed char) 3579647321U);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_16 ^= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [(signed char)2] [i_5])) && (((/* implicit */_Bool) var_7))))));
                                arr_18 [i_0] [i_0] = ((/* implicit */signed char) max((arr_4 [i_0]), (max((arr_10 [i_5] [i_3] [i_1] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                                arr_19 [i_0] [i_1] [i_5] [i_3] [i_1] [i_0] [i_5] = ((/* implicit */short) min((arr_5 [i_0]), (((((/* implicit */_Bool) (signed char)-37)) && (((/* implicit */_Bool) -3227444988639640476LL))))));
                                var_17 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3] [i_5])) || (((/* implicit */_Bool) var_3)))))))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_1))) % (((/* implicit */unsigned long long int) arr_16 [i_3] [i_1] [i_3] [i_5]))))));
                                var_18 = ((/* implicit */short) arr_0 [i_0]);
                            }
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) var_1);
                            arr_21 [i_0] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_19 = 13567870126315411907ULL;
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))), (max((((/* implicit */unsigned long long int) var_4)), (var_5)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_24 [i_0] [i_1] [i_6] [i_0] [i_1]) ? (((/* implicit */unsigned long long int) var_3)) : (arr_14 [i_6] [i_1] [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))))))))))));
                            var_21 ^= max((max((((/* implicit */unsigned long long int) 2147483647)), (12746568819454384065ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_6])) < (((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */unsigned int) -44951178);
                            var_23 = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= ((-2147483647 - 1)))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_24 [i_0] [i_1] [i_0] [i_1] [i_0]) || (var_2))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_1);
}
