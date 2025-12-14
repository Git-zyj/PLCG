/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203344
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
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_9))));
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? ((~(var_1))) : (min((13683296408610421481ULL), (var_1))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_17 = (~(arr_0 [i_0]));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_12 [i_4] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-126))))) ? (((/* implicit */int) ((arr_4 [i_1]) > (0U)))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_3] [i_1] [i_0]))) - (var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_3] [i_3]), ((_Bool)1))))))))));
                            arr_13 [i_0] [(_Bool)0] [(_Bool)0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) < (min((((/* implicit */unsigned long long int) var_14)), (var_6))))))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) % (arr_7 [i_1] [i_1])))), (((((/* implicit */_Bool) 4243468829U)) ? (arr_0 [i_4]) : (((/* implicit */unsigned long long int) arr_4 [i_0]))))))));
                            var_18 += ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_2 [i_1]) ^ (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) arr_1 [11ULL] [i_4]))))))) <= (((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0])))) ? (((/* implicit */int) arr_6 [i_3] [i_3])) : (((/* implicit */int) (!(arr_11 [i_1] [i_1] [(signed char)6]))))))));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 65472U)))) | (min((377417581598612020ULL), (((/* implicit */unsigned long long int) (signed char)102)))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)117))))))))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_1] = (~(((/* implicit */int) (unsigned char)85)));
                            var_20 ^= ((/* implicit */int) arr_6 [i_5] [i_5]);
                        }
                        var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_9 [i_0] [(signed char)5] [i_0] [i_0])), (min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1])), (3758530323398779937ULL))), (((/* implicit */unsigned long long int) arr_5 [11U] [i_1]))))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0]) : (arr_2 [(signed char)4])))) != (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_0 [i_0])))));
        var_22 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) 263873894U)) ? ((-2147483647 - 1)) : (var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6589)) ? (-900212768) : (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))));
    }
}
