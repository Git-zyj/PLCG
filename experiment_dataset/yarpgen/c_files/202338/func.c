/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202338
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 &= ((/* implicit */signed char) (((((+(((/* implicit */int) var_0)))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)29)) < (((/* implicit */int) (signed char)-29))))))) || (((arr_1 [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                arr_8 [i_0] [(short)4] [(short)4] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */long long int) var_0))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) -3114816324458100713LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23166))) : (4591939877509058060ULL))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_10 [i_2])))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_21 [i_2] [(unsigned short)1] [i_5 - 2] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_2] [i_3] [i_5 - 1]))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) arr_7 [(unsigned short)13] [i_2]))))), (max((arr_15 [i_2]), (((/* implicit */long long int) arr_0 [i_2]))))))));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)29);
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35769)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned short)6641))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_7 [i_5 + 3] [i_5 - 2]))) ? (var_2) : ((~((~(1058287347U)))))));
                        }
                    } 
                } 
                arr_23 [i_2] = max((((/* implicit */long long int) ((((/* implicit */_Bool) -2693896988203308369LL)) || (((/* implicit */_Bool) (unsigned char)21))))), (-2693896988203308369LL));
                arr_24 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_12 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) + (((/* implicit */unsigned long long int) arr_15 [i_3])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                {
                    arr_33 [i_6] [i_7] [i_6] [i_7] = ((/* implicit */short) (~(((arr_25 [i_8]) & (((/* implicit */int) var_5))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            {
                                arr_39 [i_6] [i_10] [i_8] [(signed char)5] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */int) max((arr_26 [(short)5]), (((/* implicit */unsigned short) arr_19 [i_6] [i_7] [i_8] [i_9] [i_10]))))) * ((-(((/* implicit */int) var_5)))))) / ((+((+(((/* implicit */int) (unsigned char)241))))))));
                                arr_40 [i_6] [i_10] [i_6] [i_6] = ((/* implicit */short) var_1);
                                var_16 = ((((((/* implicit */int) max((arr_20 [i_10] [i_9] [i_9] [5U] [i_7] [i_6]), (((/* implicit */unsigned char) var_4))))) | (((((/* implicit */int) arr_30 [i_6])) | (((/* implicit */int) (unsigned char)39)))))) < (((((/* implicit */_Bool) max(((signed char)37), (arr_32 [i_7] [10ULL] [i_7])))) ? (((/* implicit */int) ((140737488355327ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min(((unsigned short)58893), (((/* implicit */unsigned short) (unsigned char)39))))))));
                                var_17 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) ((unsigned char) arr_38 [i_10] [i_9] [i_8] [1ULL] [i_6] [i_6]))) >= (((/* implicit */int) var_10)))));
                                var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6]))))) | (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
