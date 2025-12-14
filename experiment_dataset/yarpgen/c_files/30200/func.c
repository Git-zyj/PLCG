/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30200
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((-3331759886372924007LL) / (((/* implicit */long long int) (-(var_12)))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
    var_20 *= (-(((/* implicit */int) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))) == (((/* implicit */int) var_6))))));
    var_21 *= ((/* implicit */short) var_16);
    var_22 = ((/* implicit */int) var_16);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) 1693111179))));
        var_24 = ((/* implicit */int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11)))))));
        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) | (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_4 [6U] [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -783342971)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2])) + (((/* implicit */int) arr_7 [(signed char)5] [i_2]))))) : (((((/* implicit */_Bool) var_8)) ? (2055982049U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2])))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_13 [i_2])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51467))) : (arr_9 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (0))))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (max((2238985246U), (((/* implicit */unsigned int) arr_7 [i_2] [i_2]))))))) || (((/* implicit */_Bool) arr_15 [i_5] [i_3] [i_4]))));
                        var_29 |= ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [(signed char)5] [(signed char)5]))))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_4))))))));
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_31 = ((/* implicit */signed char) (-(-783342971)));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((signed char)(-127 - 1)), (((/* implicit */signed char) var_0))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_14)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (1888225819)))))))));
                        var_33 *= ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_16 [i_2] [(_Bool)1] [i_2] [(unsigned char)1])), (((((/* implicit */_Bool) arr_25 [(signed char)15])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) & (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                    }
                } 
            } 
        } 
    }
}
