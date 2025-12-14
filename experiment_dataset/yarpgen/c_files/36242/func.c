/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36242
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((3344217316178659795ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))) : (var_5))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((min((-698399840), (((/* implicit */int) (signed char)-64)))) / (((/* implicit */int) var_0)))))));
        var_13 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
        var_14 -= ((/* implicit */long long int) (unsigned short)32617);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-62))) != (arr_1 [i_0 - 1] [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_0 [(signed char)8] [i_0])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1] [i_0 + 1]));
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (signed char)-50))));
                        var_16 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_4]);
                        var_17 += ((/* implicit */unsigned long long int) ((signed char) var_2));
                    }
                    var_18 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) * (arr_6 [i_1] [i_2] [i_1] [i_1])))));
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0]))));
                    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2592849472U)));
                    arr_14 [i_0] [i_1] [(unsigned short)1] [i_1] [(unsigned short)1] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_3]))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    arr_18 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) (((((~(var_7))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)3), ((signed char)-64))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) var_8)), (var_5))))))));
                    arr_19 [i_5] [i_5] &= (+((-(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1))))))));
                }
            }
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_5 [(unsigned short)8] [i_0 - 1] [i_1]))))));
                /* LoopSeq 1 */
                for (long long int i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    var_22 ^= ((/* implicit */signed char) 174455813U);
                    var_23 = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_7]);
                    var_24 &= ((/* implicit */_Bool) ((long long int) ((arr_21 [i_0] [3U] [i_6]) % (((/* implicit */long long int) 1180834283)))));
                    var_25 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0 + 2] [i_0 - 1] [(unsigned short)1] [i_7 + 2] [i_7 + 1]))));
                }
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) var_8))));
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    var_27 += ((/* implicit */unsigned char) var_0);
                    arr_33 [i_0 - 1] [i_1] [i_1] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_0 + 2] [i_0 - 1]))));
                }
            }
            var_28 = max((((/* implicit */unsigned long long int) -1537464059299059927LL)), (((unsigned long long int) -1180834283)));
            /* LoopSeq 2 */
            for (long long int i_10 = 3; i_10 < 14; i_10 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) ((long long int) max((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 2])))));
                var_30 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((signed char)-48), (var_0))))));
                var_31 += ((/* implicit */unsigned long long int) var_1);
                var_32 = ((/* implicit */unsigned char) arr_10 [i_10 - 2] [i_10 - 2] [i_0] [i_1] [i_0]);
            }
            /* vectorizable */
            for (signed char i_11 = 3; i_11 < 13; i_11 += 1) 
            {
                arr_41 [i_1] [i_1] [6LL] = ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_1] [i_1] [i_11] [i_1]))));
                arr_42 [i_0] [(unsigned short)14] [(unsigned short)14] [i_0] &= ((/* implicit */short) var_3);
            }
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (4294967269U))))));
        }
        var_34 *= (~(0ULL));
    }
    var_35 ^= var_5;
    var_36 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)47)), (min((var_5), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)22700)))))))));
    var_37 += ((/* implicit */int) var_5);
}
