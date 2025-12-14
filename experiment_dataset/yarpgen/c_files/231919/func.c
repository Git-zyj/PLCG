/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231919
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (2389740761918705952LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_2] [14ULL] = ((/* implicit */signed char) var_2);
                    var_18 = ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_7 [i_1 - 2] [i_0 + 2])), (var_3))), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_2]))) > (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_1)))))))));
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) -2389740761918705950LL)) : (524287ULL)));
                    var_20 += ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */int) var_9)) - (((/* implicit */int) arr_7 [i_1 - 2] [i_1 + 1]))))))), (max((((/* implicit */unsigned int) arr_10 [i_2] [i_0] [i_0])), (arr_5 [i_2] [i_1 - 2])))));
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((-2389740761918705926LL) != ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (0LL)))))), (549647854)));
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-90))))), (((((/* implicit */_Bool) (unsigned short)59158)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                    arr_18 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [8U] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_11))))));
                }
                for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    arr_23 [14LL] [i_1 - 2] [18] = min(((-(0LL))), (var_15));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned long long int) max(((signed char)-103), ((signed char)-44)))), (2199019061248ULL))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)-26)))) - (((/* implicit */int) var_5)))))));
                        var_22 = min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)0)), (18446741874690490365ULL)))) ? (((/* implicit */int) (short)11601)) : (((/* implicit */int) (signed char)0)))), (830188719));
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_10 [i_4 + 2] [i_1 + 2] [i_4]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)34751)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1 + 1])))))));
                            var_25 = ((/* implicit */long long int) 18446741874690490365ULL);
                        }
                    }
                }
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((-830188720) - (-830188720))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_1] [i_0])) : (((/* implicit */int) (signed char)-29))))))) : (arr_16 [i_0] [i_0] [(unsigned short)14] [i_1])));
            }
        } 
    } 
    var_27 = max((((/* implicit */int) var_10)), ((-(((/* implicit */int) max(((unsigned char)86), (((/* implicit */unsigned char) (signed char)42))))))));
    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1010)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) || (((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) var_14))));
    var_29 = ((/* implicit */unsigned long long int) var_14);
}
