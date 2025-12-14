/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209808
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
    var_13 = ((/* implicit */long long int) 0ULL);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((((~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8)))))) + (2147483647))) >> (((((/* implicit */int) (signed char)61)) - (33)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) -1179877889)), (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), ((~(8950915630404620921ULL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)37523)) ? (10295352657477951755ULL) : (max((max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (8475866424641062033ULL))), (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (int i_5 = 3; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_15 ^= ((/* implicit */int) (-(var_11)));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((long long int) arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5])) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [(signed char)6] [(short)4]))))))));
                            var_17 ^= ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) (signed char)-62)))));
                            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_10 [i_3 + 1]), (((/* implicit */unsigned long long int) arr_9 [(_Bool)0] [i_5 - 1]))))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_2])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (17838264589723797465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27996))))) : ((~(((((/* implicit */_Bool) arr_1 [(unsigned short)14])) ? (var_11) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) var_1)) ? (-2695194778876272835LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (var_2))) : (var_2)));
                var_20 = var_10;
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL))));
            }
            arr_26 [i_1] [i_1] [(unsigned char)2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) ^ (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min(((unsigned char)0), (((/* implicit */unsigned char) var_10))))))) : (min((((/* implicit */unsigned int) (unsigned char)90)), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 15; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */int) ((unsigned int) ((long long int) ((signed char) (unsigned short)27996))));
                        var_23 &= ((/* implicit */signed char) (((~((~(((/* implicit */int) (signed char)61)))))) << (((min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) (unsigned short)61971))))), (((unsigned long long int) var_5)))) - (61954ULL)))));
                    }
                } 
            } 
            var_24 -= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)11)) | (((int) ((((/* implicit */int) var_4)) << (((arr_29 [i_1] [i_1]) + (296567581332428829LL))))))));
        }
        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [8])) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_8)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((var_7), (((/* implicit */unsigned short) (unsigned char)26)))), ((unsigned short)8))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) arr_12 [(short)4] [i_1] [16ULL] [(unsigned short)0])) : ((-(var_3)))))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_1] [(unsigned char)1]))) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24753))))) + (9223372036854775807LL))) << ((((((_Bool)1) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) - (7892382907476570928LL)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2003685734007416960LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))), (((unsigned long long int) var_9))))));
    }
}
