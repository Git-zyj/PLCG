/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193231
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))) : (4227858432U)));
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 1892492261U))) & (((((((/* implicit */_Bool) 4227858432U)) || (((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)3312)) : (((/* implicit */int) (signed char)36)))) : (((/* implicit */int) ((unsigned short) var_6)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) ((((((unsigned int) (signed char)112)) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_4 [i_1])))) ? (min((arr_4 [i_1]), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48906))) <= (arr_4 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
            var_15 = ((/* implicit */unsigned char) (signed char)-21);
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)62916)) || (((/* implicit */_Bool) (signed char)29))));
        }
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (unsigned short)40675)) : (((/* implicit */int) (signed char)-1))));
            arr_9 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_1 [i_2])) > (((((/* implicit */int) (unsigned short)24628)) >> (((((/* implicit */int) (signed char)-29)) + (48))))))), (((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_4 [i_2]))))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) / (arr_4 [i_0]))) & (((((/* implicit */_Bool) arr_2 [(unsigned short)12] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))))))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (67108847U) : (4227858449U)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)125)) >= (((/* implicit */int) arr_11 [i_0] [i_3] [i_3]))))) : (((((/* implicit */int) arr_6 [i_0] [i_3] [i_0])) << (((arr_4 [i_0]) - (162776331U)))))));
            var_18 = ((/* implicit */signed char) ((67108864U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
        }
        arr_12 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)161))) ? (((((/* implicit */_Bool) (signed char)49)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)16] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)17])) - (((/* implicit */int) arr_1 [i_0]))))))));
        var_19 = max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 4035368647040679647LL)) || (((/* implicit */_Bool) 2420360134U))))) % (((/* implicit */int) (signed char)113))))), (((((((/* implicit */_Bool) (unsigned short)2662)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : (4162723420U))) << (((((/* implicit */int) arr_1 [i_0])) - (56547))))));
    }
    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((((/* implicit */_Bool) 281474976645120LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))))), (((/* implicit */unsigned int) arr_3 [i_4]))))), (-5422022819887768728LL)));
        var_20 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) != (821954514U))))) & (min((arr_15 [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned short)62746)))))), (max((((arr_14 [i_4] [i_4]) << (0U))), (((/* implicit */unsigned int) ((unsigned short) (signed char)-120)))))));
        arr_17 [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */int) (signed char)-114)) < (((/* implicit */int) arr_0 [i_4])))), (((arr_10 [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73)))))))), (((((/* implicit */_Bool) ((arr_10 [i_4]) << (((((/* implicit */int) (signed char)74)) - (53)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) 898248082U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (9002801208229888LL)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_5] [(unsigned short)7] [i_5])))) != (((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (-9002801208229895LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5])))))))), (max((((((/* implicit */int) (unsigned short)44202)) >> (((/* implicit */int) (unsigned short)11)))), (((/* implicit */int) arr_7 [2U] [2U]))))));
        arr_21 [i_5] = ((/* implicit */signed char) ((((((((/* implicit */int) (unsigned short)16667)) == (((/* implicit */int) arr_11 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)11979)))) > (((/* implicit */int) (signed char)-30))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) (signed char)-46);
                        arr_31 [i_5] [i_7] [i_6] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)-14)), ((unsigned short)20930)));
                        var_22 = ((/* implicit */unsigned short) min((((unsigned int) ((long long int) arr_11 [19U] [i_7] [(unsigned char)18]))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned short)20732)) == (((/* implicit */int) (signed char)-8))))))));
                    }
                } 
            } 
        } 
        arr_32 [i_5] = ((/* implicit */signed char) ((long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_3 [i_5]))))));
    }
}
