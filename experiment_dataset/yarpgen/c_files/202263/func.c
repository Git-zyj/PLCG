/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202263
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >= (arr_4 [i_1] [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_13 [i_1] = var_5;
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_1] = ((/* implicit */int) (~(min((((-5447397212109320508LL) ^ (((/* implicit */long long int) arr_4 [i_0] [i_1] [(signed char)22])))), (((/* implicit */long long int) arr_15 [i_0 - 1]))))));
                                arr_17 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)1536), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((((/* implicit */int) (signed char)12)) - (((/* implicit */int) (short)-11106))))));
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0 - 1] [i_1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15336)) ? (arr_14 [i_1] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                                var_20 = ((/* implicit */long long int) ((unsigned char) arr_0 [i_0 + 1]));
                            }
                            var_21 = ((/* implicit */signed char) max((arr_3 [i_1]), (min((arr_3 [i_1]), (arr_3 [i_1])))));
                            arr_21 [(signed char)4] [(signed char)4] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)34))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_14)) >> (((/* implicit */int) (_Bool)1))))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) | (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0])) ^ (((/* implicit */int) var_9))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    arr_24 [(unsigned short)4] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [13LL] [i_6] [i_1] [i_0 - 1])) * (((/* implicit */int) arr_8 [i_0] [i_0])))))))) ? (((min((13681862270618587492ULL), (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_5)), (var_13))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-78))))) ? (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (short)0)) * (((/* implicit */int) var_7)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                        var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 + 1])) - (74)))));
                        var_25 ^= ((((/* implicit */_Bool) (short)-8337)) ? (-1) : (((/* implicit */int) (unsigned short)47857)));
                    }
                    arr_29 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(var_12)));
                }
                arr_30 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)8357)))) ? (var_10) : ((+(((/* implicit */int) (_Bool)0))))))) ? (((3543803256707225403LL) + (var_12))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0 - 1] [i_0 - 1]), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)8] [i_0] [i_1] [i_1]))) < (var_16))))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
}
