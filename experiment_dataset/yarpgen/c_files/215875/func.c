/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215875
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
    var_10 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) - (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_1 [i_0])))));
                    arr_6 [i_0] = ((/* implicit */short) (!(((var_6) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (9223372036854775805LL))))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((-((-(arr_1 [i_1])))))));
                    var_12 = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned short)1])) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
            {
                var_13 = ((/* implicit */unsigned char) (-((-((~(((/* implicit */int) (_Bool)1))))))));
                var_14 = ((((/* implicit */long long int) min((arr_12 [i_3]), (((/* implicit */int) ((unsigned short) arr_12 [i_3])))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) (signed char)127))))) ? (var_2) : (((((/* implicit */_Bool) (unsigned short)33049)) ? (-5735781816164221939LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                {
                    arr_18 [i_3] [i_3] [i_4] [i_3] [9U] = ((/* implicit */unsigned char) arr_16 [i_3 - 2] [i_4] [16] [i_6] [(signed char)0]);
                    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) && (((/* implicit */_Bool) arr_8 [i_5])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) ^ (arr_8 [i_3]))))), (((/* implicit */unsigned long long int) max((arr_14 [i_6] [i_5] [i_4] [i_3]), (((/* implicit */unsigned char) (_Bool)1)))))));
                    arr_19 [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_15 [i_3 - 1] [i_5]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_5] [i_4])))))))) ? (((((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) 2198989701120ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (arr_12 [i_6])))) : (arr_11 [i_3 - 2]))) : (((/* implicit */unsigned long long int) var_0))));
                    var_16 &= ((/* implicit */signed char) (-(7236521103408477098LL)));
                }
                for (signed char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (arr_8 [i_3 + 1]))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)14119)))))))));
                    var_18 |= min((((((/* implicit */_Bool) (short)-20501)) ? (13728541598608138822ULL) : (arr_17 [i_3] [i_7] [i_5 - 2] [i_7] [i_5] [i_5]))), (((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_5 - 2] [i_4] [i_4] [i_7])) ? (arr_17 [i_3] [(_Bool)1] [i_5 - 2] [i_3] [i_3 - 2] [i_3]) : (arr_17 [(unsigned char)14] [i_4] [i_5 + 3] [i_7] [i_5] [i_7]))));
                }
            }
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_8] [i_4])) ? (((/* implicit */int) ((4718202475101412794ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) arr_22 [i_3 + 1])) ? (arr_22 [i_3 - 2]) : (arr_22 [i_3 + 2])))));
                var_19 = ((/* implicit */long long int) max((var_19), (-1096582465728150626LL)));
            }
            arr_26 [i_3] [i_3] [i_3] = ((unsigned int) (-(((/* implicit */int) var_5))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_10 = 4; i_10 < 17; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 1; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (((-(((/* implicit */int) min(((unsigned char)2), (((/* implicit */unsigned char) arr_36 [i_3] [i_9] [i_10] [i_11]))))))) | ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_9]))))))))))));
                            var_21 -= ((/* implicit */signed char) arr_10 [i_12] [i_12]);
                        }
                    } 
                } 
            } 
            var_22 &= ((/* implicit */signed char) (+(((var_6) % (((/* implicit */unsigned long long int) arr_12 [i_3 + 3]))))));
            var_23 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))) * (0LL))), (((/* implicit */long long int) max((((/* implicit */short) arr_23 [i_3] [i_9])), (max(((short)-32761), (((/* implicit */short) (unsigned char)203)))))))));
            var_24 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)32760)), (((unsigned int) (unsigned char)240))));
        }
        var_25 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_32 [i_3 + 2])))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) arr_34 [i_3 + 3] [i_3 + 3]))))))))));
    }
    /* LoopNest 2 */
    for (short i_13 = 1; i_13 < 16; i_13 += 3) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    arr_49 [i_13 - 1] [i_14] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) (short)-31067))) : (((/* implicit */int) arr_30 [i_15] [i_15]))));
                    var_27 = ((/* implicit */int) arr_34 [i_14] [(unsigned short)17]);
                    arr_50 [i_13] = ((/* implicit */int) (!(((((/* implicit */int) ((((/* implicit */_Bool) 2047929368)) || (((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) min((((/* implicit */signed char) arr_41 [i_15])), (var_3))))))));
                    var_28 = ((/* implicit */short) (_Bool)1);
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_15] [8U] [i_13 - 1]))) & (max((((13341979378182743318ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (0ULL))))))));
                }
                arr_51 [i_13 - 1] [i_13 - 1] = ((/* implicit */unsigned long long int) var_9);
                arr_52 [5U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_13 + 1] [i_13] [i_13 + 1]))) | (min((arr_42 [i_13 + 1]), (((/* implicit */unsigned long long int) (_Bool)0))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) (-(((long long int) var_5))));
}
