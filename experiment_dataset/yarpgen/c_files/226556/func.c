/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226556
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))) : (((/* implicit */unsigned int) ((-522142648) & (((/* implicit */int) var_8))))))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -997868155)) || (((/* implicit */_Bool) 16842789718476593738ULL))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((((((/* implicit */int) var_3)) - (((/* implicit */int) var_5)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (var_11)));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_14 &= ((((/* implicit */int) (((~(var_6))) <= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_0 [i_0] [i_0])))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (4095ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26160))))))));
        arr_2 [i_0] = min(((-((+(((/* implicit */int) var_7)))))), ((+(min((((/* implicit */int) var_8)), (var_2))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(522142634)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)39375)) : (((/* implicit */int) (unsigned short)26160)))) : ((+(((/* implicit */int) (unsigned short)21))))));
        var_16 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (5195664828020724989LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39376)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))) : (var_6))) : ((+(380211353U)))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((-522142640) / (((/* implicit */int) (unsigned char)139)))) - ((~(((/* implicit */int) arr_13 [i_1] [i_2] [i_3 - 1] [i_4] [i_4] [i_5])))))))));
                        }
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) : (arr_10 [i_1] [(short)9] [i_3] [i_4]))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) : (var_6)))) ? (((((/* implicit */unsigned int) var_0)) * (arr_16 [(signed char)2] [i_6] [i_6] [i_6] [(signed char)2] [i_6]))) : (((/* implicit */unsigned int) ((var_2) + (((/* implicit */int) arr_0 [i_6] [i_6])))))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) var_5)) : (var_11)))))))));
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6])) - (((/* implicit */int) (signed char)78))))) ? (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [(unsigned char)10])) + (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3968007207U)))) ? (min((((/* implicit */int) (unsigned char)107)), (1369332495))) : (((/* implicit */int) (unsigned char)119))))) : ((-(3098131820U)))));
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 17; i_7 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_0) << (((/* implicit */int) (_Bool)1))))))))));
        arr_23 [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)6776))));
    }
    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (1196835491U))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) & (var_2))) ^ (((((/* implicit */_Bool) 1196835461U)) ? (((/* implicit */int) (unsigned short)39890)) : (((/* implicit */int) (signed char)-9)))))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) 3098131805U)) ? (6291868776097741145LL) : (((/* implicit */long long int) 1196835510U))))))) ? (var_2) : ((+(((/* implicit */int) (!(var_9))))))));
}
