/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29885
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-98)))), (arr_3 [i_0] [i_0] [i_0])));
                    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_5 [i_0] [i_0] [i_0])))) - (((unsigned long long int) (-(var_4))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_3] [i_0] [i_0]);
                                var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_5))));
        var_12 = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) var_4)))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_6))))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_0]))))) - (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_7)))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_13 = ((/* implicit */int) ((long long int) -1LL));
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (-(arr_19 [i_6] [i_6] [i_5])));
            arr_22 [i_5] [i_5] [i_5] = ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))) >= (arr_19 [i_5] [i_5] [i_5])));
        }
        arr_23 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5])) ? (arr_18 [i_5]) : (((/* implicit */int) var_9))));
        arr_24 [i_5] = ((/* implicit */short) ((arr_19 [i_5] [i_5] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
        arr_25 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_5])) >> (((/* implicit */int) ((unsigned char) var_1)))));
    }
    var_14 = ((long long int) min((((/* implicit */unsigned long long int) var_0)), (var_5)));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 15452202112899166239ULL))))) != ((~(((/* implicit */int) var_9)))))))) > (min((((/* implicit */unsigned long long int) ((int) (_Bool)1))), (min((var_5), (((/* implicit */unsigned long long int) var_2))))))));
    var_16 = ((/* implicit */unsigned int) var_0);
    var_17 = ((/* implicit */int) ((((((unsigned long long int) 9223372036854775807LL)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))))) << (min((max((((/* implicit */long long int) (short)30749)), (3184917622394566335LL))), (0LL)))));
}
