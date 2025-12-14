/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236826
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((_Bool) (_Bool)0))), (var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (9790706930141066625ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) * (((/* implicit */unsigned long long int) (-(arr_3 [i_0] [i_0] [i_0])))))))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) max((9790706930141066610ULL), (((/* implicit */unsigned long long int) 1168639233U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [2])))) : (min((((((/* implicit */_Bool) arr_4 [(signed char)2] [(signed char)2])) ? (((/* implicit */unsigned long long int) 5711892561132560508LL)) : (15966961810017463880ULL))), (((/* implicit */unsigned long long int) min((arr_2 [i_1]), (((/* implicit */unsigned short) var_8))))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2])) * (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_5 [i_2])))) < (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_7)))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_5 [5LL]))))), (max((((/* implicit */long long int) arr_5 [i_2])), (791218724422233036LL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            var_15 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_3] [7LL] [i_3])) ? (((/* implicit */unsigned long long int) var_0)) : (var_10))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    arr_17 [i_2] [i_4] [i_4] [i_5 - 1] [(_Bool)1] = ((/* implicit */unsigned long long int) (signed char)65);
                    var_16 = ((/* implicit */long long int) ((((arr_15 [(unsigned char)1] [i_3 + 1] [i_5] [i_5 + 1]) + (2147483647))) >> ((+(((/* implicit */int) arr_16 [i_2] [16U] [(_Bool)0] [i_4]))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    arr_20 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) arr_19 [i_2] [i_4] [i_2] [i_4]);
                    var_17 = ((/* implicit */short) ((1LL) | (((/* implicit */long long int) arr_15 [i_3 - 1] [i_4] [i_4] [(short)3]))));
                }
            }
            for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_2])) == (((/* implicit */int) arr_21 [i_2])))))));
                var_19 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7])) || (((/* implicit */_Bool) arr_8 [i_2]))))) == ((+(arr_8 [i_7]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    arr_25 [i_2] [i_3] [(short)7] [i_7] = ((((/* implicit */long long int) arr_8 [i_2])) >= (5711892561132560508LL));
                    var_20 = ((((/* implicit */_Bool) 9790706930141066618ULL)) ? (arr_9 [i_2] [i_3 + 1] [i_7 - 1]) : (arr_9 [i_8] [i_3 - 3] [i_2]));
                }
            }
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */long long int) ((_Bool) arr_14 [i_9 + 2] [i_9 + 2] [i_9 + 2]));
                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [i_9])) > (((/* implicit */int) arr_16 [i_2] [i_3] [i_3] [i_9 + 2])))) ? ((+(5711892561132560508LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9 + 2]))) : (arr_9 [(short)16] [i_3] [(unsigned char)19]))))));
            }
            var_23 = ((/* implicit */unsigned long long int) var_8);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    {
                        arr_33 [i_2] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -870427239497674887LL)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (signed char)50))));
                        var_24 = ((/* implicit */int) ((short) 9790706930141066610ULL));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_15 [i_2] [i_2] [(short)2] [i_2]))))) ? (((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2])) ? (arr_8 [i_2]) : (583750066))) : (((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2])))));
    }
}
