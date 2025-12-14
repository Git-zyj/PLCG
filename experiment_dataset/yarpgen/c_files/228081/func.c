/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228081
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2065495914) - (((/* implicit */int) arr_1 [i_1 + 2]))))) && (((/* implicit */_Bool) arr_1 [i_0 - 2]))));
            var_12 = ((((/* implicit */_Bool) 203307372)) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)15])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (arr_0 [i_1]))) > (((((/* implicit */_Bool) arr_0 [i_1])) ? (203307372) : (((/* implicit */int) var_3))))))) : (((((/* implicit */int) (unsigned short)65535)) | (((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned char)158)) - (155))))))));
            arr_5 [i_1 + 3] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) ((min(((-2147483647 - 1)), (arr_0 [i_0]))) + (((/* implicit */int) arr_4 [i_1 + 2]))))) : (((((((/* implicit */_Bool) arr_4 [i_1 + 4])) ? (582052264436456745LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 2]))))) + (((/* implicit */long long int) ((752258683) + (((/* implicit */int) var_4)))))))));
            arr_6 [22] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) <= (-1974907536))))))) ? (((((/* implicit */long long int) (-(322514919)))) / ((-(-582052264436456741LL))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)255)) : (856029303))), (((/* implicit */int) (unsigned short)13)))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) ((1648155485394423909LL) >> (((-582052264436456740LL) + (582052264436456791LL)))));
            var_14 = (+(-987527237));
        }
        arr_10 [i_0] = ((/* implicit */unsigned short) (+(var_9)));
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_10))))))));
        var_16 = ((/* implicit */short) var_5);
        arr_15 [i_3] = (unsigned short)55377;
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_4]))))) < (((((/* implicit */_Bool) 2ULL)) ? (-8254241239463179113LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4])))))));
            var_17 = ((/* implicit */long long int) ((4193792ULL) >> ((((+(arr_9 [i_4]))) - (188200196)))));
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4]))) != (((unsigned long long int) var_8))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65525)) && (((/* implicit */_Bool) (unsigned short)61816))));
        }
        for (int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */int) var_3)) < ((+(((/* implicit */int) (unsigned short)19148))))));
            arr_24 [i_4] [i_6] [i_4] = ((/* implicit */signed char) -1374082030);
        }
        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            arr_27 [i_7] [i_4] = ((/* implicit */short) 268435456);
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_0 [i_7]))));
            arr_28 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */int) (short)1)) >= (((((/* implicit */int) var_10)) % (((/* implicit */int) var_7)))))))));
            var_22 = var_10;
        }
        var_23 *= ((/* implicit */short) ((((((((var_8) + (9223372036854775807LL))) >> (((/* implicit */int) (short)1)))) | (((-582052264436456745LL) - (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4]))))))) > (((/* implicit */long long int) (((~(-322514919))) / (((((/* implicit */int) arr_26 [i_4] [i_4])) << (((((/* implicit */int) var_6)) - (34844))))))))));
        arr_29 [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) arr_11 [i_4])) : (((((/* implicit */int) arr_14 [i_4])) | (((/* implicit */int) (unsigned short)32485)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))))));
        var_24 = ((/* implicit */signed char) ((arr_9 [i_4]) << (((((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_9 [i_4]) : (arr_9 [i_4]))) - (188200230)))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        arr_32 [i_8] = (~(((/* implicit */int) arr_22 [i_8] [i_8] [i_8])));
        arr_33 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)127)) / (1051402613))) * (((/* implicit */int) arr_30 [i_8]))));
        var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)33050)) == (((/* implicit */int) arr_16 [i_8]))))) >= (((/* implicit */int) (unsigned short)7))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_4);
    var_27 = ((/* implicit */short) (((-(((/* implicit */int) var_2)))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) -322514919)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32767))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)224))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)32493)) : (8387584)))))));
}
