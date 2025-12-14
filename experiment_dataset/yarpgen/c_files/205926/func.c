/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205926
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    var_12 = var_4;
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) ((unsigned long long int) 290372699208355303LL));
        var_14 = ((/* implicit */long long int) ((short) (signed char)-71));
        arr_4 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)10915)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (1860235994U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) (unsigned short)65535)))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 8; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1 + 1] [i_1] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((arr_5 [(signed char)3] [1]) && (((/* implicit */_Bool) 16567227516718230799ULL))))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (signed char)97)))));
        arr_9 [i_1 - 2] [i_1] = ((/* implicit */signed char) ((long long int) (unsigned short)11050));
        arr_10 [9LL] [9LL] = ((/* implicit */signed char) ((long long int) arr_0 [i_1 - 2]));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_15 = ((/* implicit */_Bool) 3697726331U);
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((long long int) ((-1111479468853193419LL) & (((/* implicit */long long int) 1104208317U))))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((signed char) 16567227516718230803ULL)))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)31)) ? (arr_14 [i_3] [i_2]) : (((/* implicit */int) var_1))));
            arr_15 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_3]));
        }
        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 2] [i_2]))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (long long int i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (unsigned short)63)) : (((/* implicit */int) (signed char)-61))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((-555420773) + (((((/* implicit */_Bool) 16567227516718230800ULL)) ? (((/* implicit */int) arr_22 [i_7] [i_6] [i_4 - 1] [(_Bool)1] [i_4 - 1] [i_2])) : (arr_14 [(signed char)10] [i_4]))))))));
                            var_23 = ((/* implicit */signed char) ((arr_18 [i_4 - 1] [i_7 - 2] [i_7 - 2]) - (arr_18 [i_4 - 3] [i_7 + 1] [i_7])));
                            arr_27 [i_7] [i_2] [i_6] [i_5] [i_5 + 2] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)61))) ? (((/* implicit */int) ((unsigned char) arr_18 [i_7 - 1] [i_6] [(signed char)2]))) : (((/* implicit */int) (signed char)-18))));
                            var_24 = ((/* implicit */short) ((signed char) (_Bool)1));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_2] [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 2] [i_4 - 2] [i_4])))))));
        }
    }
    var_26 = ((/* implicit */unsigned long long int) max(((signed char)101), (((/* implicit */signed char) (_Bool)1))));
}
