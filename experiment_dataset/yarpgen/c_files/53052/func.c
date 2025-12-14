/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53052
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 -= ((/* implicit */short) min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_13)) + (92)))))))), (((/* implicit */unsigned long long int) ((min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)95)))) - (((var_2) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(18446744073709551608ULL)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (_Bool)0)) & (2013265920))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_5)) ^ (arr_11 [i_0] [i_0] [18ULL] [i_3 + 1] [i_1])))) ? (((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)-24)))) : (((/* implicit */int) arr_13 [i_1] [i_1 - 2] [i_4] [i_1] [i_3 + 4] [i_4]))))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) 110397828U))));
                            var_18 = ((((/* implicit */int) var_3)) * (((/* implicit */int) ((signed char) (unsigned char)254))));
                            var_19 = ((/* implicit */long long int) ((var_6) <= (((arr_11 [i_0] [i_2] [i_3 + 3] [i_3 + 4] [i_3]) & (((/* implicit */unsigned long long int) 2774186478U))))));
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_3 + 2])) - (((/* implicit */int) var_11))))) ? ((+(arr_8 [i_0] [i_1] [i_1] [i_3 + 1] [i_3 + 1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [(short)1] [i_1] [i_2] [i_0] [i_3 + 1]))))));
                            arr_19 [i_1 + 1] [i_2] = ((/* implicit */unsigned char) var_12);
                            var_20 = ((/* implicit */unsigned short) var_6);
                        }
                        arr_20 [i_2] [i_2] [i_2] [i_3 + 2] [6ULL] [6ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (((var_3) ? (arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [(unsigned short)6]) : (arr_11 [i_3 + 2] [i_3 + 2] [i_3 + 4] [i_3 + 1] [i_3])))));
                        arr_21 [(unsigned short)19] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 110397821U)), (var_2)))) ? (((/* implicit */int) max((var_9), (((/* implicit */signed char) (_Bool)1))))) : (arr_12 [i_2] [i_0] [i_2]))) % (((int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_1] [i_0] [i_0]))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1)))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61696)))))))))));
            arr_22 [i_0] [i_0] [i_1 + 2] = ((/* implicit */unsigned char) min((-7568361532303011386LL), (min((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (-7568361532303011403LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_23 ^= ((/* implicit */unsigned short) var_0);
            /* LoopNest 3 */
            for (unsigned char i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_34 [i_0] [i_6] [i_7] [i_8] [i_9] = max(((+(((((((/* implicit */int) (short)-19756)) + (2147483647))) << (((((/* implicit */int) arr_16 [i_9 - 1] [i_8] [i_7] [15LL] [i_0])) - (9557))))))), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_35 [i_0] [i_6] [i_7 + 1] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) || (var_3))))) : (var_6)));
                            arr_36 [i_9] [i_8] [(signed char)10] [i_7] [i_6] [i_0] = (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) -1700562532)))))));
                        }
                    } 
                } 
            } 
            arr_37 [16U] = (+(((/* implicit */int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_11)))) || (((/* implicit */_Bool) min((((/* implicit */int) var_13)), (var_7))))))));
            arr_38 [i_0] [i_6] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) var_3))))) ? (((186588420) << (((8665724603689719821ULL) - (8665724603689719819ULL))))) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_33 [i_0] [(signed char)18] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))))));
            arr_39 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_27 [2LL])))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) var_7)))))))));
        }
    }
    var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) < (((var_0) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
}
