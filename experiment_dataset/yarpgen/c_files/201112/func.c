/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201112
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_1 [i_0]))))), ((~(var_6)))));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1 - 2] [i_1 - 2] = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) -142906264)) < (-5166062779382651820LL))));
        var_13 &= ((/* implicit */int) var_6);
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) (~(65535)));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)10010)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) <= (-3LL)))) : (((/* implicit */int) arr_9 [(short)11] [(short)11])))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) (-((+(18292574165625526910ULL)))));
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_13 [i_3]))))) + (((/* implicit */int) var_11))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 1; i_4 < 23; i_4 += 4) 
        {
            arr_17 [i_4] = ((/* implicit */signed char) ((var_4) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) -604220566))))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_16 [i_3]))));
        }
        for (int i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
        {
            arr_20 [i_3] [20LL] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29725)))) ^ (((((/* implicit */_Bool) var_9)) ? ((+(arr_15 [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
            arr_21 [i_5] [(unsigned short)19] = ((/* implicit */long long int) min(((unsigned short)16082), (((/* implicit */unsigned short) (short)-9634))));
            arr_22 [20LL] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 274877906912LL)) & (arr_18 [(short)14]))))))), (((unsigned char) var_0)));
        }
        for (int i_6 = 1; i_6 < 23; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | ((+(min((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))))))))));
                var_20 += ((/* implicit */_Bool) arr_18 [9LL]);
            }
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((((-((+(((/* implicit */int) arr_9 [i_3] [i_6 + 1])))))) + (2147483647))) >> (((((((/* implicit */_Bool) -274877906913LL)) ? (((/* implicit */int) (short)29725)) : (((/* implicit */int) (unsigned short)0)))) - (29719))))))));
            arr_27 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((unsigned long long int) (short)29725)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) -274877906930LL))));
                        var_23 = arr_29 [i_3] [(short)11] [20LL] [i_6];
                    }
                } 
            } 
        }
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (-1456294087070121541LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-274877906913LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) var_4))))))))));
    var_25 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 274877906931LL)) ? (((/* implicit */int) (short)-29725)) : (((/* implicit */int) (unsigned short)65531)))));
    var_26 = ((/* implicit */unsigned short) ((4301561536852789537LL) <= (-274877906928LL)));
}
